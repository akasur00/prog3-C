//
// Created by whuebner on 01.11.23.
//

#include "conv_area.h"

float acre_to_km2 (float acre){         //areas
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

float conv_area (){
    return 0;
}