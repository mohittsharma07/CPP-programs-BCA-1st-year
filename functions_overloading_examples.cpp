// #include<iostream>
// using namespace std;
// class loading{
//     public:
//     void sum(string a, string b){
//         cout<<a+b<<endl;
//     }
//     void sum(int a, int b){
//         cout<<a+b<<endl;
//     }
//     void sum(int a, int b, int c){
//         cout<<a+b+c<<endl;
//     }
// };

// int main(){
//     loading a;
//     a.sum(5,9);
//     a.sum("Mohit", "sharma");
// }


#include <iostream>
using namespace std;

class Calculator {
public:
    // Function overloading: same function name, different parameters
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of 2 integers: " << calc.add(5, 10) << endl;
    cout << "Sum of 2 floats: " << calc.add(3.5f, 4.5f) << endl;
    cout << "Sum of 3 integers: " << calc.add(1, 2, 3) << endl;

    return 0;
}
