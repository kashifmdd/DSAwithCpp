#include<iostream>
#include<cmath>
using namespace std;


int mini(int x, int y){      // own function
    if(x<y)
        return x;
    else
        return y;
}

int maxx(int x, int y){      // own function
    if(x<y)
        return y;
    else
        return x;
}

int main(){
    // cout<<mini(7, 15)<<endl;
    // cout<<maxx(44, 34)<<endl;

    // cout<<min(6,5)<<endl;
    // cout<<max(53, 24)<<endl;
    cout<<sqrt(9)<<endl;
}

