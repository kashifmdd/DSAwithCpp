#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int lastDigit = 0;
    int reverse = lastDigit;
    while(n>0){
        lastDigit = n%10;
        reverse *= 10;
        reverse += lastDigit;
        n/=10;
    }
    cout<<reverse<<endl;
}