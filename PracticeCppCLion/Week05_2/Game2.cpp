#include <iostream>

using namespace std;

class Player {
public:
    Player(int hp, int xp)
    : hp{ hp }, xp{ xp } {
        cout << "생성자 호출됨" << endl;
    }

    void Print() {
        cout << hp << " " << xp << endl;
    }

private:
    int hp;
    int xp;
};

int main() {
    Player p{10, 2};
    return 0;
}