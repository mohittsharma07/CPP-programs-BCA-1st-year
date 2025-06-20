#include<iostream>
using namespace std;
class Student{ // student is a new data type
public:
string name;
float marks;
int rollnumber;
int age;
float waight;
};

int main(){
    Student s1;
    s1.name = "Mohit sharma";
    s1.marks = 83.3;
   // s1.rollnumber = 33;
    s1.age = 16;
    s1.waight = 65.5;
    cin>>s1.rollnumber;

    Student s2;
    s2.name = "Nidhi sharma";
    s2.marks = 84.3;
    s2.rollnumber = 7;
    s2.age = 16 ;
    s2.waight = 40.5;

    cout<<s1.name<<" "<<s1.marks<<" "<<s1.rollnumber<<" "<<s1.age<<" "<<s1.waight<<" ";
    cout<<s2.name<<" "<<s2.marks<<" "<<s2.rollnumber<<" "<<s2.age<<" "<<s2.waight<<" ";
}

