#include<iostream>
using namespace std;

class check_constructor {
    private:
    bool status;
    public:
    check_constructor();
    ~check_constructor(); // destructor
};

check_constructor::check_constructor():status{true} {
    if (status) {
        cout << "printing" << endl;
    }
}

check_constructor::~check_constructor() {
    cout << "Destructor called, object is being destroyed." << endl;
}

int main() {
    check_constructor obj;
    return 0;
}
