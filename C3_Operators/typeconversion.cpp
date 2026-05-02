// Typecasting :- Conversion of data from one type to another.
// Implicit Conversion(automatic/type promotion)
// Done by compiler to avoid data loss.
// bool > char > int > float > double
// Explicit Conversion(forced by programmer)

#include<iostream>
using namespace std;

int main() {
    // implicit
    // cout<< (10/3) <<endl;
    // cout<< (10/3.0) <<endl;
    // cout<< ('A' + 1) <<endl;
    // explicit
    cout<<(int)('A')<<endl;
    float PI = 3.14;
    cout<<(int)(PI)<<endl;
    cout<<((float)10/3)<<endl;
    cout<<(char)('A' + 3)<<endl;
    return 0;
}