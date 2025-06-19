#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollNO;
    int marks;

    student(string n, int r, int m){
        name = n;
        rollNO = r;
        marks = m ;
        cout<<"constructor called"<<endl;
      }
      ~student(){
        cout<<"Destructor called for"<<marks<<endl;
      }
};
int main(){
    student s("mohit",34,89);
}
