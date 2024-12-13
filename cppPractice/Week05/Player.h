#pragma once

#include <string>

using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player {
public:
    Player(string nameVal="None", int healthVal=0, int xpVal=0);
    ~Player();

private:
    string name;
    int health;
    int xp;
};

#endif //PLAYER_H
