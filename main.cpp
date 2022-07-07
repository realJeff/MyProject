#include <Algorithm/MyAdd.hpp>

#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    MyNamespace::MyAdd myAdd;
    std::cout << " 2 + 3 = " << myAdd( 2, 3 ) << std::endl;

    return 0;
}
