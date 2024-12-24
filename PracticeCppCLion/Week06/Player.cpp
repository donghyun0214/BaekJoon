#include "Player.h"

using namespace std;

Player::Player(int x, int y, int speed)
    : Entity{x, y}, speed{speed} {}

void Player::Move(int dx, int dy) {
    x += dx;
    y += dy;
}

void Player::SetHP(int hp) {
    if (hp < 0) return;
    this->hp = hp;
}

void Player::Talk() {
    cout << "Player Talk" << endl;
}
