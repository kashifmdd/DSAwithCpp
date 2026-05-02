#include<iostream>
using namespace std;

int main() {
    int age = 10;
    int marks = 59; // int is 32 bits & 4 bytes.

    char grade = 'A'; // char size is 8 bits & 1 bytes.

    bool isAdult = true; // same as a char.

    float cgpa = 9.9; // same as int

    double price = 99.9;

    cout<<"size of int = "<<sizeof(int)<<endl;
    cout<<"size of char = "<<sizeof(char)<<endl;
    cout<<"size of bool = "<<sizeof(bool)<<endl;
    cout<<"size of float = "<<sizeof(float)<<endl;
    cout<<"size of double = "<<sizeof(double)<<endl;

    return 0;
};