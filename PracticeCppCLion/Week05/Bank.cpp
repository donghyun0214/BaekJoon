#include <iostream>
#include <string>

#include "Account.h"
#include "Account.cpp"

using namespace std;

int main() {
     Account kimAccount;
     Account leeAccount(100.0, "Lee");

     Account* parkAccountPtr = new Account(200.0, "Park");
     delete parkAccountPtr;
     return 0;
}