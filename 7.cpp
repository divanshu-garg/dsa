#include<iostream>
using namespace std;

int main(){

    int x = 76;
    int* xptr = &x;

    int y = 890;
    int* yptr = &x;
    yptr++;

    cout << xptr;

    // return 0;
}