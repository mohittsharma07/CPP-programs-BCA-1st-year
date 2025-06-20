#include<iostream>
using namespace std;
class crickter{
    public:
    string name;
    int runs;
    float avg;

    crickter(string name, int runs, float avg){
    this->name = name;
    this->runs = runs;
    this->avg = avg;
    }
};

void change(crickter* c){
  c->avg = 79.4; //(*c).avg = 79.4;
}

int main(){
    crickter c1("M.S.Dhoni",30000,66.6);
    cout<<c1.avg<<endl;
    change(&c1);
    cout<<c1.avg<<endl;
}
    // crickter c2("Rohit sharma",46000,33.4);

//     crickter*p1 = &c1;
//     cout<<(*p1).runs<<endl; //c1.runs
//    (*p1).avg = 77.7; //c1.avg = 77.7
//     cout<<c1.avg<<endl; 
// }