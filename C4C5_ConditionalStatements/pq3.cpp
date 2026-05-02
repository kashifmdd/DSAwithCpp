#include<iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout<<"Enter Num1 : ";
    cin>>num1;
    cout<<"Enter Num2 : ";
    cin>>num2;
    cout<<"Enter Num3 : ";
    cin>>num3;

    if(num1 > num2 && num1 > num3 ){
        cout<<"Num1 is Largest "<<num1<<endl;
    }else if(num2 > num3){
        cout<<"Num2 is Largest "<<num2<<endl;
    }else{
        cout<<"Num3 is Largest "<<num3<<endl;
    }
    
    return 0;
}