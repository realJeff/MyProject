#include <iostream>
#include <Algorithm/MyAdd.hpp>

int main() {
    std::cout << "Hello, World!" << std::endl;

    MyNamespace::MyAdd myAdd;

    std::cout << myAdd( 2, 3 ) << std::endl;

    return 0;
}
