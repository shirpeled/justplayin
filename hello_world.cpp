#include <iostream>
#include <string>

std::string recursive_world(const unsigned u) {
    if (u) {
        return std::string("world ") + recursive_world(u - 1);
    } else {
        return std::string("world!\n");
    }
}

int main() {
    std::cout << "Hello " << recursive_world(9);
}