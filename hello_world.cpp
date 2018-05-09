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
  std::cout << "This is what's going on right now";
  std::cout << "Hello " << recursive_world(9);
  std::cout << "Yes";
}