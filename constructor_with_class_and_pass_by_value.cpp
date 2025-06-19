#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    int price;
    string type;
    int seats;

Car(string n, int p, string t, int s){
    name = n;
    price = p;
    type = t ;
    seats = s;
}
};
  void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.type<<" "<<c.seats<<" ";
}
  void change(Car& c){
    c.name = "Audi A8";
  }
int main(){
    Car c1("Honda city",1800000,"sedan",5);
   
    print(c1);
    change(c1);//pass by value
    print(c1);
}
