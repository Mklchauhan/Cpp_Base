#include <iostream>
#include <vector>

int main() {
    std::vector<int> myVector = {1, 2, 3}; //This is concept of cpp 11:: clang++ -std=c++11 -stdlib=libc++ vec.cpp -o vec

    myVector.push_back(4); // Add 4 to the end
    myVector.push_back(5); // Add 5 to the end

    std::cout << "Elements: ";
    for (int element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    std::cout << "Size: " << myVector.size() << std::endl;

    myVector.pop_back(); // Remove the last element

    std::cout << "Elements after pop_back: ";
    for (int element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}