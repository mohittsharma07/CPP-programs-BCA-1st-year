#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter size of array ";
    cin >> n;

    int arr[n];

    cout << "Enter" << n << "Elements" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int min = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    int fact = 1;
    for(int i = 1; i <= min; i++){
        fact *= i;
    }

    cout << "Smallest number is: " << min << endl;
    cout << "Factorial of " << min << "is" << fact << endl;

    return 0;

}