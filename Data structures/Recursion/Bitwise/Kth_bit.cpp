#include <iostream>
using namespace std;

class Kth_bit {
private:
    int n, k;
public:
    Kth_bit(int n, int k) {
        this->n = n;
        this->k = k;
    }
    
    bool isKthBitSet();  // Function declaration
};

bool Kth_bit::isKthBitSet() { // Corrected definition (removed parameters)
    return (n & (1 << k)) != 0;  // Ensuring boolean return
}

int main() {
    int n, k;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the position: ";
    cin >> k;
    
    Kth_bit obj(n, k);
    if (obj.isKthBitSet()) {
        cout << "The " << k << "th bit is set" << endl;
    } else {
        cout << "The " << k << "th bit is not set" << endl;
    }
    
    return 0;
}
