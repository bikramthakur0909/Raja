#include<iostream>
using namespace std;
int sum(int a, int b) {
    return a+b;
}
int main() { 
    int a;
    cout<<"Enter 1st number : ";
    cin>>a;
    int b;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<sum(a,b);
   //void sum(int a,int b){
   //cout<<a+b;
   //      }
   //int main() {
   //sum(7,90);
   //  }    
}