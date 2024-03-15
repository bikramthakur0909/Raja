#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int a=1;
    for(int i=1; i<=n; i+=2) {
        cout<<a<<" ";
        a=2*a;

        
    }
}