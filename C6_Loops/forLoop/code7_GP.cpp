#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    // 1 2 4 8 16 ... n terms
    // int a = 1;
    // for(int i=1; i<=n; i++){
    //     int table = n*i;
    //     cout<<a<<endl;
    //     a = a * 2;
    // }

    // 2 6 18 54 ...
    int a = 2;
    for(int i=1; i<=n; i++){
        int table = n*i;
        cout<<a<<endl;
        a = a * 3;
    }
    return 0;
}