#include<iostream>
using namespace std;

int* func(){
    int x = 10;
    return &x;
}

int main(){

    int* xptr = func();
    cout << xptr << endl;
    return 0;
}