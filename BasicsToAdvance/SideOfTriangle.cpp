#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter 1st side : ";
    cin>>a;
    cout<<"Enter 2nd side : ";
    cin>>b;
    cout<<"Enter 3rd side : ";
    cin>>c;
    if((a+b)>c && (b+c)>a && (a+c)>b) {
        cout<<"This is side of triangle.";
    }
    else {
        cout<<"This is not side of triangle.";
    }
}