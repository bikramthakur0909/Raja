#include<iostream>
using namespace std;
int main() {
    //VolumeOfSphere = 4/3*pi*r*r*r
    float r;
    cout<<"Enter a radius : ";
    cin>>r;
    float pi = 3.14159265359;
    float V = 1.33*pi*r*r*r;
    cout<<"Volume of Sphere is : "<<V;
    
}
