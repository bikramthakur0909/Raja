#include<iostream>
using namespace std;
void greet(int n) {
    if(n==0) return;
    cout<<"hey"<<endl;
    greet(n-1);

}
int main() {
    greet(10);
}