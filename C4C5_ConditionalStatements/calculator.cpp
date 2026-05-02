#include<iostream>
using namespace std;

int main() {
    int a, b;
    char ch;
    cout<<"Enter Number : ";
    cin>>a;
    cout<<"Enter Number : ";
    cin>>b;
    cout<<"Enter char : ";
    cin>>ch;

    // for ifelse
    // if(ch == '+'){
    //     cout<<"a + b = " << (a+b) <<endl;
    // }else if(ch == '-'){
    //     cout<<"a - b = " << (a-b) <<endl;
    // }else if(ch == '*'){
    //     cout<<"a * b = " << (a*b) <<endl;
    // }else if(ch == '/'){
    //     cout<<"a / b = " << (a/b) <<endl;
    // }else{
    //     cout<<"Invalid Operator";
    // }

    // for switch
    switch(ch){
        case '+': cout<<"a + b = " << (a+b) <<endl;
            break;
        case '-': cout<<"a - b = " << (a-b) <<endl;
            break;
        case '*': cout<<"a * b = " << (a*b) <<endl;
            break;
        case '/': cout<<"a / b = " << (a/b) <<endl;
            break;
        default : cout<<"Invalid Operator";
    }
    return 0;
}