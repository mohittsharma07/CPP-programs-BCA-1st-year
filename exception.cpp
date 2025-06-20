#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter two numbers";
    cin>>a>>b;
    try{
        if(b!=0)
        {
            c = a/b;
            cout<<"devision="<<c;
        }
        else{
            throw(b);
        }

    }
    catch(int b)
    {
        cout<<"devide by"<<b<<"error";
    }
    return 0;

}