//
// Created by whuebner on 03.11.23.
//

#include "invest.h"
#include "stdio.h"

//Quarterly value jan 2017 - oct 2023 (jan - apr - jul - oct)
double msci_world[] = {35.7600, 36.7400, 35.4100, 37.1800, 37.8820, 37.0930, 39.1910, 38.0530,
                       37.6590, 41.3380, 42.1350, 42.5350, 45.0030, 39.9260, 41.2380,
                       41.8810, 46.8360, 52.0800, 55.1300, 58.4300, 57.6140, 57.5620,
                       56.9860, 54.8960, 54.2440, 54.6680, 59.1120, 55.6020};
double btc[] = {964, 1350, 2856, 6434, 10149, 9242, 7725, 6303, 3413, 5269,
                10085, 9150, 9328, 8627, 11357, 13816, 33141, 57775, 41490,
                61359, 38492, 37640, 23323, 20498, 23127, 29235, 29231, 34661};
int length = sizeof(msci_world)/sizeof(msci_world[0]);

double invest_alice(double cap){
    double start_cap_msci = cap / 2;
    double shares_msci = start_cap_msci / msci_world[0];
    double start_cap_btc = cap /2;
    double shares_btc = start_cap_btc / btc[0];
    return (shares_msci * msci_world[27]) + (shares_btc * btc[27]);
}

double invest_bob(double cap){
    double shares_btc = cap / btc[0];
    double shares_msci = 0;
    for (int i = 1; i < length; ++i) {
        if((shares_btc * btc[i-1]) < ((shares_btc * btc[i]) / 2)){      //doubled investment
            shares_btc /= 2;
            shares_msci += (shares_btc * btc[i]) / msci_world[i];
        } if ((shares_btc * btc[i-1]) > ((shares_btc * btc[i]) * 2)){   //halved investment
            shares_msci += (shares_btc * btc[i]) / msci_world[i];
            shares_btc = 0;
        }
    }
    return (shares_btc * btc[27]) + (shares_msci * msci_world[27]);
}

double invest_own(double cap){
    double shares_btc = cap / btc[0];
    double shares_msci = 0;
    for (int i = 1; i < length; ++i) {
        if((shares_btc * btc[i-1]) < ((shares_btc * btc[i]) / 2)){      //doubled investment
            shares_msci += ((shares_btc / 4) * btc[i]) / msci_world[i];   //invest only 1/4th in msci
            shares_btc *= 0.75;
        } if ((shares_btc * btc[i-1]) > ((shares_btc * btc[i]) * 4)){   //stop if investment quartered
            shares_msci += (shares_btc * btc[i]) / msci_world[i];
            shares_btc = 0;
        }
    }
    return (shares_btc * btc[27]) + (shares_msci * msci_world[27]);
}



int invest(){
    double cap_alice = 100000.0, cap_bob = 100000.0;    //declare start_capital
    printf("alice' capital in Q3 2023:\t%.2f", invest_alice(cap_alice));
    printf("\nbob's capital in Q3 2023:\t%.2f", invest_bob(cap_bob));
    printf("\nspecial investment strategy:\t%.2f", invest_own(cap_alice));
    return 0;
}
