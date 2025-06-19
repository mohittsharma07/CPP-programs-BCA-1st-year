#include<iostream>
using namespace std;
class student{
    public :
    string name;
    int rno;
    float gpa;
    student(){ //default constructor

    }

    student(string n,int r){ //parameterised constructor
        name = n;
        rno = r;
    }
    student(string n, int r, float g){ //parameterised constructor
        name = n;
        rno = r;
        gpa = g;
    }
};

int main(){
    student s1("Mohit sharma",33);
    s1.gpa = 8.2;

    student s2;
    s2.name = "viany";
    s2.rno = 22;
    s2.gpa = 6.4;

    student s3("gagan",13,9.5);

    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<" ";
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<" ";
    cout<<s3.name<<" "<<s3.rno<<" "<<s3.gpa<<" ";

}