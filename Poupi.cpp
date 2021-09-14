//
// Created by maxim on 13/09/2021.
//

#include "Poupi.h"

Poupi::Poupi(char* name){
    this->name = name;
    level =1;
    xp =0;
    nextLv =10.0;
    age =0; //In nb of day
    joy =3; //value beetween 0 and 5
    hunger =3; //value beetween 0 and 5
    tiredness =3; //value beetween 0 and 5
    alive =true; //Poupi still alive when he was born
}

//Add xp to the poupi
int Poupi::stonks(float xpGain){
    xp += xpGain;
    if(xp >= nextLv){
        ++level;
        xp -= nextLv;
    }
    return 0;
}

//increase point to play
int Poupi::play(){
    if(tiredness>=4 || hunger>=4)return 1;
    if(joy < 5){
        ++joy;
        ++tiredness;
    }
    return 0;
}

//decrease hunger of poupi
int Poupi::eat(){
    if(hunger >0){
        --hunger;
    }
    return 0;
}

//decrease tiredness of poupi
int Poupi::sleep(){
    if(tiredness>0){
        --tiredness;
    }
    return 0;
}

int Poupi::live(){

}

char *Poupi::getName() const {
    return name;
}

float Poupi::getXp() const {
    return xp;
}

float Poupi::getNextLv() const {
    return nextLv;
}

int Poupi::getLevel() const {
    return level;
}

int Poupi::getAge() const {
    return age;
}

int Poupi::getJoy() const {
    return joy;
}

int Poupi::getHunger() const {
    return hunger;
}

int Poupi::getTiredness() const {
    return tiredness;
}

bool Poupi::isAlive() const {
    return alive;
}

