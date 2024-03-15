#include<iostream>
using namespace std;
int main() {
    int cp ;
    cout<<"Enter a Cost Price : ";
    cin>>cp;
    int sp ;
    cout<<"Enter a Selling Price : ";
    cin>>sp;
    if(sp>cp) {
        cout<<"Profit"<<endl<<"Profit is "<<sp-cp;
    }
    else if(sp<cp) {
        cout<<"Loss"<<endl<<"Loss is "<<cp-sp;
    }
    else {
        cout<<"No Profit No Loss";
    }
}