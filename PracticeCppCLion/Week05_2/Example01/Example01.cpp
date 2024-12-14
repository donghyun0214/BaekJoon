#include <iostream>

using namespace std;

class Player {
    friend void DisplayPlayer(const Player& p);

public:
    Player(int x, int y, int speed)
        : x{ x }, y{ y }, speed{ speed } {}

    void SetPosition(int x, int y) {
        this->x = x;
        this->y = y;
    }

    int GetXPosition() const { return x; }

    int GetYPosition() const { return y; }

private:
    int x, y;
    int speed;
};

void DisplayPlayer(const Player& p) {
    cout << p.x << " " << p.y << endl;
}

int main() {
    Player p1{1, 1, 10};
    DisplayPlayer(p1);
    return 0;
}