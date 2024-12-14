#include <iostream>

using namespace std;

class Player {
public:
    Player(int hp, int xp)
    : hp{ hp }, xp{ xp } {
        cout << "Constructor Called" << endl;
    }

    // Copy Constructor
    Player(const Player& other)
        : hp{ other.hp }, xp{ other.xp } {
        cout << "Copy Constructor Called" << endl;
    }

    void Print() {
        cout << hp << " " << xp << endl;
    }

private:
    int hp;
    int xp;
};

void PrintInformation(Player p) {
    p.Print();
}

int main() {
    Player p1{ 10, 2 };
    Player p2{p1};
    return 0;
}