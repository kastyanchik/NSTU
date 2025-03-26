#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    for (const auto& value : vec) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
