#include<iostream>
using namespace std;

int main(){
    // int x, y;
    // cout<<"Enter First Number : ";
    // cin>>x;
    // cout<<"Enter Second Number : ";
    // cin>>y;

    // if(x > y){
    //     cout<<"First Number is largest "<<x<<endl;
    // }else{
    //     cout<<"Second Number is largest "<<y<<endl;
    // }


    int num;
    cout<<"Enter Number : ";
    cin>>num;

    if(num%2==0){
        cout<<num<<" is Even"<<endl;
    }else{
        cout<<num<<" is Odd"<<endl;
    }

    return 0;
}