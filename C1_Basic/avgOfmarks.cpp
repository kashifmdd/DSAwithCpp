#include<iostream>
using namespace std;

int main() {
    float sci,math,art,avg;
    cout<<"Enter of sci = ";
    cin>>sci;

    cout<<"Enter of math = ";
    cin>>math;

    cout<<"Enter of art = ";
    cin>>art;

    avg = (sci+math+art)/3;
    cout<<"Avg of Marks = "<<avg<<endl;

    return 0;
};