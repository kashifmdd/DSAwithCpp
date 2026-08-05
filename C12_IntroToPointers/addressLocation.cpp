#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *p = &a;
    // cout << &a <<" = "<< p <<"\n";

    // float pi = 3.14;
    // float *p2 = &pi;

    // cout << sizeof(p) << "\n";
    // cout << sizeof(p2) << "\n";

    int **ppt = &p;
    cout<<&p<<"="<<ppt<<"\n";
    return 0;
}