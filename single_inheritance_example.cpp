#include<iostream>
using namespace std;
class scooty {
    public:
    int topspeed;
    float mileage;
};
   
class bike : public scooty{ //child class / derivied class
    public:
    int gears;
};
int main(){
    bike b1;
    b1.topspeed = 85;
    b1.mileage = 5.5;
    b1.gears = 4;

    cout<<b1.mileage<<" ";
}