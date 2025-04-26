#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n;
    cin >> n;

    char* s;
    for(int i = 0; i<n; i++){
        char* a;
        cin >> a;

        if(i == 0){
            s = a;
        }else if(strcmp(a,s) > 0){
                s = a;
            }
    }

    cout << s;

}