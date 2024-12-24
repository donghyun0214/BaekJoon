#include <iostream>

#include "Entity.h"
#include "Player.h"
#include "Entity.cpp"
#include "Player.cpp"

using namespace std;

int main() {
    // Entity p = Player{1, 1, 10};
    // Player p2 = Player{1, 1, 10};
    // Entity* ePtr = new Player{1, 1, 1};
    // Entity& eRef = p2;

    // Player* pPtr = new Entity{1, 1, 1}; // ERROR!

    Player p{1, 1, 10};
    p.Move(1, 1);

    return 0;
}