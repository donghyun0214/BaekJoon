#pragma once

#include <iostream>

#ifndef ENTITY_H
#define ENTITY_H

using namespace std;

class Entity {
public:
    Entity(int x, int y);

    void ShowPosition();

    void Talk();

protected:
    int x, y;
};

#endif //ENTITY_H
