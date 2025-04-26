#include<iostream>
using namespace std;

// check palindrome

int main(){
    int n;
    cin >> n;
    char arr[n+1];
    cin >> arr;
    arr[n] = '\0';

    int i = 0;
    int j= n-1;
    
    bool pal = true;
    while(i<=j){
        if(arr[i] != arr[j]){
            pal = false;
            break;
        }
    }

    if(pal){
        cout << "true";
    }else{
        cout << "false";
    }

    return 0;
}