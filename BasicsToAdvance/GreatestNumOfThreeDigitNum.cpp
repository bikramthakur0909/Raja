#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter 1st Number : ";
    cin>>a;
    cout<<"Enter 2nd Number : ";
    cin>>b;
    cout<<"Enter 3rd Number : ";
    cin>>c;
    if(a>b) {
        if(a>c) cout<<a<<" is the greatest number.";
        else cout<<c<<" is the greatest number.";
    }
    else {
        if(b>c) cout<<b<<" is the greatest number.";
        else cout<<c<<" is the greatest number.";
    } 
     
}