//
// Created by maxim on 13/09/2021.
//

#ifndef POUPIGOTCHI_POUPI_H
#define POUPIGOTCHI_POUPI_H


class Poupi {
private:
    char* name; //Name of poupi
    float xp; //xp of poupi
    float nextLv; //xp required for next level
    int level; //Level of poupi
    int age; //Age of poupie in day
    int joy; //value beetween 0 and 5
    //if joy == 0 poupi die of sadness
    int hunger; //value beetween 0 and 5
    //if hunger == 5 poupi die of hunger
    int tiredness; //value beetween 0 and 5
    //if tiredness == 5 poupi die of tiredness
    bool alive; //Indicate if poupi still alive or DEAD

public:
    Poupi(char* name);

    //Add xp to the poupi
    int stonks(float xpGain);

    //increase point to play
    int play();

    //decrease hunger of poupi
    int eat();

    //decrease tiredness of poupi
    int sleep();

    //increase hunger
    //increase tiredness
    //decrease joy
    int live();

    char *getName() const;

    float getXp() const;

    float getNextLv() const;

    int getLevel() const;

    int getAge() const;

    int getJoy() const;

    int getHunger() const;

    int getTiredness() const;

    bool isAlive() const;

};


#endif //POUPIGOTCHI_POUPI_H
