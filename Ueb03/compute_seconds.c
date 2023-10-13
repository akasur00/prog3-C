//
// Created by whuebner on 12.10.23.
//

#include "compute_seconds.h"
#include "stdio.h"

//Calculate from given minutes
long convert_minutes(long minutes){
    long seconds;
    return seconds = minutes * 60;
}

//Calculate from given hours
long convert_hours(long hours){
    long minutes = hours * 60;
    return convert_minutes(minutes);
}

//Calculate from given days
long convert_days(long days){
    long hours = days * 24;
    return convert_hours(hours);
}

//Calculate from given weeks
long convert_weeks(long weeks){
    long days = weeks * 7;
    return convert_days(days);
}

//Calculate from given years
long convert_years(long years){
    long days = years * 365;
    return convert_days(days);
}

int compute_seconds(){
    char input_sel;
    long input_val;
    long result;
    printf("<--Program for calculating a given amount of time in seconds-->\n");
    printf("please select what time unit you want to convert:\nminutes - (a)\thours - (b)\tdays - (c)\n"
           "weeks - (d)\tyears - (e)\n");
    scanf(" %c", &input_sel);
    printf("now select the amount:\n");
    scanf( " %li", &input_val);

    switch (input_sel) {
        case 'a':
            result = convert_minutes(input_val);
            break;
        case 'b':
            result = convert_hours(input_val);
            break;
        case 'c':
            result = convert_days(input_val);
            break;
        case 'd':
            result = convert_weeks(input_val);
            break;
        case 'e':
            result = convert_years(input_val);
            break;
        default:
            return -1;
    }
    printf("Input was: %li ", input_val);
    printf("\nIn Seconds: %li", result);

    return 0;
}