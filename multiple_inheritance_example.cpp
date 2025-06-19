#include<iostream>
using namespace std;
class cricketer{
    public :
    int runs;
    int wickets;
    int average;
};
class engineer{
    public :
    int experience;
    string domain;
};
class phodu : public engineer,public cricketer{
    public:
    string name;
};
int main(){
    phodu p1;
    p1.runs = 3000;
    p1.wickets = 59;
    p1.average = 44.4;
    p1.experience = 3;
    p1.name = "sourabh";

    cout<<p1.wickets<<" "<<p1.runs<<" "<<p1.experience<<" "<<p1.name<<endl;
}