#include<iostream>
using namespace std;

int binary_search(int arr[], int size, int target){
    int s = 0;
    int e= size -1;

    while(s<=e){
        int m = (s+e)/2;

        if(arr[m] == target){
            return m;
        }else if(arr[m] > target){
            e = m - 1;
        }else{
            s = m + 1;
        }
    }
    return -1;
}

int main(){

    int n, t;
    cin >> n >> t;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int count = 0;
    for(int i = 0; i<n; i++){
        int index = binary_search(arr, n, (t-arr[i]));

        if(index !=-1 && index != i){
            count++;
        }
    }

    // return count;
    cout << "count: " << count/2;


    return 0;
}