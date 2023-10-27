//
// Created by whuebner on 12.10.23.
//

#include "temperature.h"
#include "math.h"
#include "stdio.h"

//calculate the sum of all elements in an array
double sumofarray(double array[], int start, int end){
    double sum=0;
    for (; start < end; ++start) {
        sum += array[start];
    }
    return sum;
}

//calculate the average for a given array
double average(double array[], int start, int end){
    double average;
    int length = end-start;
    double sum = sumofarray(array, start, end);
    average = sum / length;
    return average;
}

//calculate variance for a given array
double variance(double array[], int start, int end){
    double variance =0;
    int length = end-start;
    double average_var = average(array, start, end);
    double varsum=0;
    for (; start < end; ++start) {
        varsum += pow((array[start] - average_var),2 );
    }
    variance = (1.0 / (length - 1.0)) * varsum;
    return variance;
}

//calculate the standard deviation in a given array
double deviation(double array[], int start, int end){
    double deviation;
    double variance_var = variance(array, start, end);
    deviation = sqrt(variance_var);
    return deviation;
}

int temperature(){
    // Aug 2021 - Aug 2022
    double temp_array2022[] = {16.4, 15.2, 9.6, 4.7, 2.6, 2.6, 4.4, 5.1,
                               7.8, 14.4, 18.4, 19.2, 20.3};
    // Sep 2022 - Sep 2023
    double temp_array2023[] = {13.4, 12.5, 6.4, 1.8, 3.5, 3.2, 5.7, 7.5,
                               13.1, 18.5, 18.7, 18.3, 17.2};
    //int length_2022 = sizeof(temp_array2022)/sizeof(temp_array2022[0]);
    //int length_2023 = sizeof(temp_array2023)/sizeof(temp_array2023[0]);
    //end <= length, start >= 0

    //Calculations
    double average_0921_0822 = average(temp_array2022, 1, 13);
    double deviation_0921_0822 = deviation(temp_array2022, 1, 13);
    double average_0922_0823 = average(temp_array2023, 0, 12);
    double deviation_0922_0823 = deviation(temp_array2023, 0, 12);

    double fall2021 = average(temp_array2022, 1, 4);
    double fall2022 = average(temp_array2023, 0, 3);
    double winter2021 = average(temp_array2022, 4, 7);
    double winter2022 = average(temp_array2023, 3, 6);
    double spring2022 = average(temp_array2022, 7, 10);
    double spring2023 = average(temp_array2023, 6, 9);
    double summer2022 = average(temp_array2022, 10,13);
    double summer2023 = average(temp_array2023, 9, 12);
    double diff21_22 = temp_array2022[0] - temp_array2022[12];
    double diff21_23 = temp_array2022[0] - temp_array2023[11];
    double diff22_23 = temp_array2022[12] - temp_array2023[11];

    //Dump
    printf("<--Program for statistical temperature calculations-->");
    printf("\n\nAverage Temperature for 092021 - 082022:\t%0.1f", average_0921_0822);
    printf("\nStandard Deviation for 092021 - 082022:\t\t%0.1f", deviation_0921_0822);
    printf("\nAverage Temperature for 092022 - 082023:\t%0.1f", average_0922_0823);
    printf("\nStandard Deviation for 092022 - 082023:\t\t%0.1f", deviation_0922_0823);

    printf("\n\nAverage Temperature for fall 2021:\t%0.1f", fall2021);
    printf("\nAverage Temperature for fall 2022:\t%0.1f", fall2022);
    printf("\nAverage Temperature for winter 2021/22:\t%0.1f", winter2021);
    printf("\nAverage Temperature for winter 2022/23:\t%0.1f", winter2022);
    printf("\nAverage Temperature for spring 2022:\t%0.1f", spring2022);
    printf("\nAverage Temperature for spring 2023:\t%0.1f", spring2023);
    printf("\nAverage Temperature for summer 2022:\t%0.1f", summer2022);
    printf("\nAverage Temperature for summer 2023:\t%0.1f", summer2023);

    printf("\n\nDifference between Aug21 - Aug22:\t%0.1f", diff21_22);
    printf("\nDifference between Aug21 - Aug23:\t%0.1f", diff21_23);
    printf("\nDifference between Aug22 - Aug23:\t%0.1f", diff22_23);

    return 0;
}