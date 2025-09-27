#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};

    std::sort(arr.begin(), arr.end());

    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
