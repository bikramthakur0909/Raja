#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    if(n>99 && n<1000) {
        cout<<"This Number is 3 digit Number.";
    }
    else {
        cout<<"This Number is not 3 digit Number."; 
    }
}