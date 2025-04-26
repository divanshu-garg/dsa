#include <iostream>
using namespace std;

int main(){

    int row, col, t;
    cin >> row >> col >> t;

    int arr[row][col];

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cin >> arr[i][j];
        }
    }

    int mid = (row * col)/2;

    int i = 0;
    int j = row*col -1;
    int index = -1;
    while(i<=j){
        // if(arr[i/col][i%col] == t){}
        if(arr[mid/col][mid % col] == t){
            index = mid;
            break;
        }else if(arr[mid/col][mid % col] > t){
            j = mid - 1;
        }else{
            i = mid + 1;
        }
        mid = (i + j)/2;
    }

    cout << index;

}