// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5]= {3,4,5,6,7};
//     int sum = 0;

//     for(int i=0; i<=5; i++){
//         sum += arr[i];
//     }
// cout<<"sum"<<sum<<endl;

// return 0;
// }


#include <iostream>
using namespace std;
int main(){

int n;
cout<<"enter size of array ";
cin>>n;

int arr[n];
int sum = 0;

cout << " enter " << n << "elements" << endl;
for(int i = 0; i < n; i++){
    cin >> arr[i];
    sum +=arr[i];
}

cout << "sum of array elements" <<sum <<endl;

return 0;
}