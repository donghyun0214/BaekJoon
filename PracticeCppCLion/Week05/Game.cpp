#include <iostream>
#include <string>

#include "Player.h"
#include "Player.cpp"

using namespace std;

int main() {
    Player empty;
    Player kim("kim");
    Player hero("Hero", 100);
    Player enemy("Enemmy", 1000, 0);
    return 0;
}