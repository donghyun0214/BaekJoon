#include "Entity.h"

using namespace std;

Entity::Entity(int x, int y)
    : x{ x }, y{ y } {}

void Entity::ShowPosition() {
    cout << "[" << x << ", " << y << "]" << endl;
}

void Entity::Talk() {
    cout << "Hello" << endl;
}