#include<iostream>
using namespace std;
int main() {
    // int n;
    // cout<<"Enter Number of Rows : ";
    // cin>>n;
    // for(int i=1; i<=n; i++) {
    //     for(int j=1; j<=i; j++){
    //         cout<<2*j-1<<" ";
            
    //     }
    //     cout<<endl;
    // }
    //==========================================
    int n;
    cout<<"Enter Number of Rows : ";
    cin>>n;
    int a=1;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++){           //1
            cout<<a<<" ";                  //23
            a++;                           //456   
                                           //78910
            
        }
        cout<<endl;
    }
}