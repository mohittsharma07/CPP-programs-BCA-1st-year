#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float gpa;
    int age;

    Student(){ // Default 

    }

    Student(string s, int r, float g, int a){
        name = s;
        rno = r;
        gpa = g;
    }
    Student(string s, int r, int a){
         name = s;
         rno = r;
         age = a ;
    }
};

    int main(){

        Student s1("Mohit sharma",33,8.8);
        Student s2;

        s2.name = "Deepak";
        s2.rno = 54;
        s2.gpa = 9.7;
        
        Student s3 = s1; //Deep copy
        
        Student s4(s2);//copy constructo3
    
        cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<" "<<s1.age<<endl;
        cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<" "<<s2.age<<endl;
        cout<<s3.name<<" "<<s3.rno<<" "<<s3.gpa<<" "<<s3.age<<endl;
        cout<<s4.name<<" "<<s4.rno<<" "<<s4.gpa<<" "<<s4.age<<endl;
    }



// #include<iostream>
// using namespace std;
// class Student{
//     public:
//     string name;
//     int rno;
//     float gpa;

//     Student(){ // Default constructor

//     }

//     Student(string s, int r, float g){
//         name = s;
//         rno = r;
//         gpa = g;
//     }
//     Student(string s, int r){
//          name = s;
//          rno = r;
//     }
// }; 
//     void print(Student s){
//         cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<" ";
// }

//     int main(){

//         Student s1("Mohit sharma",33,8.8);

//         Student s2;

//         s2.name = "Deepak";
//         s2.rno = 54;
//         s2.gpa = 9.7;
        
//         Student s3 = s1; //Deep copy
//         s3.name = "vijay";
        
//         Student s4(s2);//copy constructor
//         s4.rno = 44;

//     //     cout<<s1.name<<" "<<s1.rno<<" ";
//     //     cout<<s2.name<<" "<<s2.rno<<" ";
//     //     cout<<s3.name<<" "<<s3.rno<<" ";
//     //     cout<<s4.name<<" "<<s4.rno<<" ";
//     // }

//     print(s1);
//     print(s2);
//     print(s3);
//     print(s4);
// }