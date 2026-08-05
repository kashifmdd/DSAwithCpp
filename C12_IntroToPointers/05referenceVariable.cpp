#include<iostream>
using namespace std;

// pass by reference using Reference variables
void changeA(int &param){
    param = 20;
    cout<<param<<endl;
}

int main(){
    int a = 10;
    
    changeA(a);

    cout<<a<<endl;
    return 0;
}