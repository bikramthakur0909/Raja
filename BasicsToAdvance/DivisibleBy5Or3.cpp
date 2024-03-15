#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    if(n%5==0 || n%3==0) {     //if(n%5==0 or n%3==0)
        cout<<"This Number is divisible by 5 or 3 .";
    }
    else {
        cout<<"This Number is not divisible by 5 or 3 ."; 
    }

}