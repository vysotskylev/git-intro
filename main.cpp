#include <iostream>
#include <cstdint>

void f();

int main() {
    std::cout << "Hello, world" << std::endl;
    f();
    return 0;
}


void f() {
    std::cout << "Goodbye" << std::endl;
}

int64_t sum(int x, int y) {
    return (int64_t)x + y;
}

