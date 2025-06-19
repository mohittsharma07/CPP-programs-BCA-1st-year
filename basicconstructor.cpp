#include<iostream>
using namespace std;
class student{
    public:
    string name;
    float marks;
    int rollnumber;

    student(string s, float marks, int rollnumber){
        name = s;
        marks = marks;
        rollnumber = rollnumber; 
    }
};

int main(){
    student s1("Mohit", 33,87.9);
    cout << s1.name << " " <<s1.marks <<" " <<s1.rollnumber <<endl;
}