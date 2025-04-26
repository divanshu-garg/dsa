#include <iostream>
using namespace std;

// spiral print a matrix

int main(){

    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    int mid;
    if(n%2 == 0){
        mid = (n/2)-1;
    }else{
        mid = n/2;
    }

    for(int i = 0; i<=mid; i++){
        for(int j = i; j<=n-i-2; j++){
            cout << arr[i][j] << " ";
        }
        for(int j = i; j<=m-i-2; j++){
            cout << arr[j][n-i-1] << " ";
        }
        for(int j = n-i-1; j>=i+1; j--){
            cout << arr[n-i-1][j] << " ";
        }
        for(int j = m-i-1; j>=i+1; j--){
            cout << arr[j][i] << " ";
        }
    }
    return 0;
}