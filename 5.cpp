#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for(int i = 0; i<m; i++){
        cin >> b[i];
    }

    int c[n+m];

    int p = 0;
    int q = 0;
    for(int i = 0; i<n+m; i++){
        if(p >= n){
            c[i] = b[q];
            q++;
        }else if(q >= m){
            c[i] = a[p];
            p++;
        }else if(a[p] < b[q]){
            c[i] = a[p];
            p++;
        }else if(b[q] < a[p]){
            c[i] = b[q];
            q++;
        }else{
            c[i] = a[p];
            p++;
        }
    }

    for(auto i:c){

        cout << i << " ";
    }

    return 0;
}