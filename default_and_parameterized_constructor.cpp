#include<iostream>
using namespace std;
class Student{
public:
string name;
int rno;
float gpa;

Student(){ // DEFAULT CONSTRUCTOR

}

Student(string n, int r, float g){ // PARAMETRISED CONSTRUCTOR
    name = n;
    rno = r;
    gpa = g;
}
};

// void print(Student s){
//     cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<" "; 
// }
// void change(Student& s){
//     s.name = "Reena";
//     s.gpa = 9.7;
// }

int main(){
    Student s1("Mohit sharma",33,8.9);
    
    Student s2;
    s2.name = "Raghav sir";
    s2.rno = 76;
    s2.gpa = 9.9;
    
    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<" ";
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<" ";
    // change(s2);
    // print(s1);
    // change(s2);
    // print(s2);
}