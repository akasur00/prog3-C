//
// Created by whuebner on 01.11.23.
//
#include "stdio.h"
#include "conv_length.h"

float mile_to_meter(float mile){
    float meter;
    meter = mile * 1609.344f;
    return meter;
}
float sea_mile_to_meter(float sea_mile){
    float meter;
    meter = sea_mile * 1852.f;
    return meter;
}
float yard_to_meter(float yard){
    float meter;
    meter = yard * 0.9144f;
    return meter;
}
float foot_to_meter(float foot){
    float meter;
    meter = foot * 0.3048f;
    return meter;
}
float inch_to_meter(float inch){
    float meter;
    meter = inch * 0.0254f;
    return meter;
}

float conv_length(){
    char input_unit;
    char str_in[32];
    float input_value;

    printf("<--length units-->");
    printf("\nplease choose the unit of the input:\n(a) - mile\t(b) - sea mile\t(c) - yard\t(d) - foot\t(e) - inch\n");

    do {                                                                //choose input unit
        fgets(str_in, 32, stdin), fflush(stdin);
        sscanf(str_in, "%c", &input_unit);
        if (input_unit != 'a' && input_unit != 'b' && input_unit != 'c' && input_unit != 'd' && input_unit != 'e') printf("wrong input");
    } while (input_unit != 'a' && input_unit != 'b' && input_unit != 'c' && input_unit != 'd' && input_unit != 'e');

    printf("please input value \n");
    fgets(str_in, 32, stdin), fflush(stdin);    //input value number
    sscanf(str_in, "%f", &input_value);

    switch (input_unit) {
        case 'a':
            printf("%0.2f mi ---> %0.2f m", input_value, mile_to_meter(input_value));
            return 0;
        case 'b':
            printf("%0.2f sm ---> %0.2f m", input_value, sea_mile_to_meter(input_value));
            return 0;
        case 'c':
            printf("%0.2f ya ---> %0.2f m", input_value, yard_to_meter(input_value));
            return 0;
        case 'd':
            printf("%0.2f ft ---> %0.2f m", input_value, foot_to_meter(input_value));
            return 0;
        case 'e':
            printf("%0.2f in ---> %0.2f m", input_value, inch_to_meter(input_value));
            return 0;
        default:
            return -1;
    }
    return 0;
}