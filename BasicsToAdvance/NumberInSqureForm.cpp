#include<iostream>
using namespace std;
int main() {
    int m;
    cout<<"Enter number of Rows : ";
    cin>>m;
    // int n;
    // cout<<"Enter number of cols : ";
    // cin>>n;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}