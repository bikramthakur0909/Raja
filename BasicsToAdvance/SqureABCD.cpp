#include<iostream>
using namespace std;
int main() {
    // int m;
    // cout<<"Enter number of Rows : ";
    // cin>>m;
    // for(int i=1; i<=m; i++){
    //     for(int j=1; j<=m; j++){
    //         cout<<(char)(j+64)<<" ";
    //     }
    //     cout<<endl;
    // }
//=============================================
    //   int m;
    // cout<<"Enter number of Rows : ";
    // cin>>m;
    // for(int i=1; i<=m; i++){
    //     for(int j=1; j<=m; j++){
    //         cout<<(char)(i+64)<<" ";
    //     }
    //     cout<<endl;
    // }
    int m;
    cout<<"Enter number of Rows : ";
    cin>>m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            cout<<(char)(j+96)<<" ";
        }
        cout<<endl;
    }
}