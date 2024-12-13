#include <iostream>

using namespace std;

class Player {
    public:
        int x, y;
        int speed;

        void Move(int dx, int dy) {
            x += dx * speed;
            y += dy * speed;
        }
};

int main() {
    Player player1;
    player1.x = 10; player1.y = 10; player1.speed = 2;
    player1.Move(2, 3);
    return 0;
}