#include<iostream>
using namespace std;

int main(){
    int m,n,t;
    cin >> m >> n >> t;
    int arr[m][n];

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    int index = -1;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            if(arr[i][j] == t){
                index = 1;
                break;
            }
        }
    }

    if(index > 0){
        cout << "True";
    }else{
        cout << "False";
    }



    return 0;
}