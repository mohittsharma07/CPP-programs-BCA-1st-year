#include<iostream>
using namespace std;
class vehicle{
    public:
    int topspeed;
    float mileage;
    string fuel;
};
class twoeheeler : public vehicle{
    public:
    int tayers;
    string colour;
};
class fourwheeler : public vehicle{
    public:
    int tayers;
    float hight;
};
class scooty : public twoeheeler{
    public:
    string name;
    float price;
};
class bike : public twoeheeler{
    string name;
    double mirrors;
};

int main(){
    scooty s1;
    s1.topspeed = 60;
    s1.name = "activa";
    s1.price = 10000;
    s1.colour = "red";
    s1.tayers = 2;
    s1.fuel = "cng";


    
    cout<<s1.topspeed<<" "<<s1.name<<" "<<s1.price<<" "<<s1.colour<<" "<<s1.tayers<<" "<<s1.fuel<<" ";

}         