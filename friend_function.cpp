#include <iostream>
using namespace std;

class Ankit; // Forward declaration

class Ankush {
private:
    int money = 10;
    friend void rohit(Ankit, Ankush); // Friend function
};

class Ankit {
private:
    int money = 20;
    friend void rohit(Ankit, Ankush); // Friend function
};

void rohit(Ankit r1, Ankush r2) {
    cout << "Sum = " << r1.money + r2.money << endl;
}

int main() {
    Ankush obj1;
    Ankit obj2;

    rohit(obj2, obj1);
    return 0;
}