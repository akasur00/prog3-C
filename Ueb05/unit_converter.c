//
// Created by whuebner on 27.10.23.
//
#include "stdio.h"
#include "unit_converter.h"




float acre_to_km2 (float acre){
    float km2;
    km2 = acre * 247.105f;
    return km2;
}
float km2_to_acre (float km2){
    float acre;
    acre = km2 / 247.105f;
    return acre;
}
float hectare_to_km2(float hectare){
    float km2;
    km2 = hectare * 100;
    return km2;
}
float km2_to_hectare(float km2){
    float hectare;
    hectare = km2 / 100;
    return hectare;
}
float saarland_to_km2(float saarland){
    float km2;
    km2 = saarland * 2.569f;
    return km2;
}
float km2_to_saarland(float km2){
    float saarland;
    saarland = km2 / 2.569f;
    return saarland;
}

float pound_to_kilogram(float pound){       //weights
    float kilogram;
    kilogram = pound * 0.45359237f;
    return kilogram;
}
float kilogram_to_pound(float kilogram){
    float pound;
    pound = kilogram / 0.45359237f;
    return pound;
}
float stone_to_kilogram(float stone){
    float kilogram;
    kilogram = stone * 6.35029f;
    return kilogram;
}
float kilogram_to_stone(float kilogram){
    float stone;
    stone = kilogram / 6.35029f;
    return stone;
}

float fahrenheit_to_celsius(float fahrenheit){      //temperature
    float celsius;
    celsius = (fahrenheit - 32) * 5/9;
    return celsius;
}
float celsius_to_fahrenheit(float celsius){
    float fahrenheit;
    fahrenheit = celsius * 1.8f + 32;
    return fahrenheit;
}

int unit_converter(){
    printf("<--program for conversion of units-->");

    return 0;
}