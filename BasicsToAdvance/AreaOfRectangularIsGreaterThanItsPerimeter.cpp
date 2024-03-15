#include<iostream>
using namespace std;
int main() {
    int L;
    int B;
    cout<<"Enter Length : ";
    cin>>L;
    cout<<"Enter Breadth : ";
    cin>>B;
    int A = L*B;   //A = Area
    int P = 2*(L+B);   //Perimeter
    if(A>P) {
        cout<<"Area of a Rectangular is greater than its Perimeter.";
    }
}