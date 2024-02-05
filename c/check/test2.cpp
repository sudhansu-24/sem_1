#include <iostream>

int main() {
for (int i = 0; i < 5; i++) {
    std::cout << i << " ";  // Prints 0 1 2 3 4
}

for (int i = 0; i < 5; ++i) {
    std::cout << i << " ";  // Prints 1 2 3 4 5
}
    return 0;
}d