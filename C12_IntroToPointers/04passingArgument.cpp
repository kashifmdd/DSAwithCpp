#include<iostream>
using namespace std;

// Pass by Value
// void changeA(int param){
//     param = 20;
//     cout<<param<<endl;
// }

// Pass by reference using pointer
void changeA(int *ptr){
    *ptr = 20;
    cout<<*ptr<<endl;
}

int main(){
    int a = 10;
    changeA(&a);

    cout<<a<<endl;
    return 0;
}