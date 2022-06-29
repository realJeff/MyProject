#include <Algorithm/MyAdd.hpp>
#include <Algorithm/MyMultiply.hpp>

#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    MyNamespace::MyAdd myAdd;
    std::cout << " 2 + 3 = " << myAdd( 2, 3 ) << std::endl;

    MyNamespace::MyMultiply myMultiply;
    std::cout << " 2 * 3 = " << myMultiply( 2, 3 ) << std::endl;

    return 0;
}
