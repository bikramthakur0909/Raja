#include<iostream>
using namespace std;
int main() {
    //Simple Interest = ptr/100
    float p;
    cout<<"Enter p : ";
    cin>>p;
    float t;
    cout<<"Enter t : ";
    cin>>t;
    float r;
    cout<<"Enter r : ";
    cin>>r;
    float si = (p*t*r)/100;
    cout<<"Simple Interest is : "<<si;
    
}