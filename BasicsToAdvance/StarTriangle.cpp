 #include<iostream>
 using namespace std;
 int main() {
    // int m;
    // cout<<"Enter number of Rows : ";
    // cin>>m;
    // for(int i=1; i<=m; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    //==========================================
    // int m;
    // cout<<"Enter number of Rows : ";
    // cin>>m;
    // for(int i=1; i<=m; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    //============================================
    int m;
    cout<<"Enter number of Rows : ";
    cin>>m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=i; j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
 }