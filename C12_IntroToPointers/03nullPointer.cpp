#include<iostream>
using namespace std;

int main(){
    int *ptr = NULL;
    cout << ptr << "\n";

    //segmentation fault
    cout << *ptr << "\n";

    cout << "bye";
    return 0;
}