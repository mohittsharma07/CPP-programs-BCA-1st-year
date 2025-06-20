#include<iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int runs;
    float avg;

    cricketer(string name, int runs, float avg){
    this->name = name;
    this->runs = runs;
    this->avg = avg;
    }
};
void change(cricketer* c2){
    c2->runs = 55000;
}

int main(){
    cricketer c1("virat kohli", 25000, 22.3);
    cricketer* c2 = new cricketer("M.S.Dhoni", 77000, 77.7);

    cout<<c1.name<<" "<<c1.avg<<endl;
    cout<<c2->name<<" "<<c2->runs<<endl;
    change(c2);
    cout<<c2->runs<<endl;
}