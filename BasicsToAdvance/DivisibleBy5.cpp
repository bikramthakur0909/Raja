#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    if(n%5==0) {
        cout<<"This Number is divisible by 5.";
    }
    else {
        cout<<"This Number is not divisible by 5.";    
    }
}