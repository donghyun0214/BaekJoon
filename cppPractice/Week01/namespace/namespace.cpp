#include <iostream>

namespace A {
    void function() {
        std::cout << "function A\n";
    }
}

namespace B {
    void function() {
        std::cout << "function B\n";
    }
}

int main() {
    A::function();
    B::function();
    
    return 0;
}