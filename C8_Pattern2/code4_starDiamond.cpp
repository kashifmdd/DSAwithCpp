#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter num of Stars : ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        int k;
        for(k = 1; k <= n-i; k++){
            cout<<"  ";
        }
        int j;
        for(j = 1; j <= n-k+i; j++){
            cout<<"* ";
        }
    cout<<endl;
    }

    for(int i = n-1; i >= 1; i--){
        int k;
        for(k = 1; k <= n-i; k++){
            cout<<"  ";
        }
        int j;
        for(j = 1; j <= n-k+i; j++){
            cout<<"* ";
        }
    cout<<endl;
    }
}