#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    if(n%5==0 && n%3==0) {   //if(n%5==0 and n%3==0)
        cout<<"This Number is divisible by 5 and 3 .";
    }
    else {
        cout<<"This Number is not divisible by 5 and 3 ."; 
    }
    // if(n%15==0) {
        // cout<<"This Number is divisible by 5 and 3 .";
    // }
    // else {
        // cout<<"This Number is not divisible by 5 and 3 ."; 
    // }
}