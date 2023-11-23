//
// Created by Akasur on 23.11.2023.
//

#include "slanted_throw.h"
#include <stdio.h>
#include <math.h>

const int INITIAL_SPEED = 20;   //initial throw speed in m/s
const int INITIAL_HEIGTH = 2;           //height in meters
const double ACCELERATION = 9.81;

double flight_time(double degree){ //function for time
    double rad_degree = degree * (M_PI / 180);
    double t = (INITIAL_SPEED * sin(rad_degree) + sqrt(pow(INITIAL_SPEED, 2) *
            pow(sin(rad_degree), 2) + 2 * ACCELERATION * INITIAL_HEIGTH)) / ACCELERATION;
    return t;
}

double flight_distance(double degree){
    double rad_degree = degree * (M_PI / 180);
    double w = INITIAL_SPEED * cos(rad_degree) * flight_time(degree);
    return w;
}

double flight_max_height(double degree){
    double rad_degree = degree * (M_PI / 180);
    double x = ((pow(INITIAL_SPEED, 2) * sin(2 * rad_degree)) / (2 * ACCELERATION));
    double y = ((INITIAL_SPEED * pow(sin(rad_degree), 2)) / (2 * ACCELERATION)) + INITIAL_HEIGTH;
    return y;
}

int slanted_throw(){
    double degree;
    for (int i = 1; i < 90; ++i) {
        degree = i;
        if(flight_distance(degree) > 40.0) {
            printf("\ndegree: %.0f", degree);
            printf("\tflight_time: %.2fs", flight_time(degree));
            printf("\tdistance: %.2fm", flight_distance(degree));
            printf(" \thighest point: %.2fm", flight_max_height(degree));
        }
    }
    return 1;
}