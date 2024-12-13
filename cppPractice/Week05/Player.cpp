#include "Player.h"

using namespace std;

Player::Player(string nameVal, int healthVal, int xpVal)
    : name(nameVal), health(healthVal), xp(xpVal) {}

Player::~Player() {}