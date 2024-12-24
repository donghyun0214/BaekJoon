#pragma once

#include "Entity.h"

#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player : public Entity {
public:
    Player(int x, int y, int speed);

    void Move(int dx, int dy);

    void SetHP(int hp);

    void Talk();

private:
    int hp;
    int xp;
    int speed;
};

#endif //PLAYER_H
