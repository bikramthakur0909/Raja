#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    for(int i=0; i<=n; i++) {
        if(i==3 || i==5) continue;
        cout<<i<<" ";
    }
          
    }
    