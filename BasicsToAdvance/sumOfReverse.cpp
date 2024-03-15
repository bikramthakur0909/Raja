#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int rev=0;//Not completed
    int sum=0;;   //Not completed
    while(n!=0) {     //Not completed
        int ld = n%10;
        n = n/10;
        cout<<ld;
        sum = sum+ld;
        rev = rev*10+ld;
    }
    cout<<sum;
    cout<<rev;
    

}
    