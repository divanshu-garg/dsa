#include<iostream>
using namespace std;

void genP(int n, int i, string ans){
    if(i>n*2){
        cout << ans << endl;
        return;
    }

    ans += '(';
    genP(n,i+1, ans);

}

int main(){

}