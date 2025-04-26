#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }

    int sum = INT_MIN;
    int temp = 0;
    int ini = 0;
    int fin = 0;
    bool initial = true;
    for(int i = 0; i<n; i++){
        if(sum < temp){
            sum = temp;
        }
        temp += arr[i];
        if(temp < 0){
            temp = 0;
            initial = false;
        }
        if(i == n-1){
            fin = temp;
        }
        if(initial){
            ini = max(ini, temp);
        }

    }
    cout << "sum: " << max(sum, (ini + fin));
    // int s = 0;
    // int e = n-1;
    // int index = -1;
    // while(s<=e){
    //     int m = (s+e)/2;
    //     if(arr[m] == t){
    //         index = m;
    //         s = m+1;
    //     }else if(arr[m] < t){
    //         s = m+1;
    //     }else{
    //         e = m - 1;
    //     }
    // }

    // cout << "target: " << index;

    return 0;
}