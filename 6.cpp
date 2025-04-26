#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int l[n];
    int r[n];
    l[0] = arr[0];
    for(int i =1; i<n;i++){
        l[i] = max(l[i-1], arr[i]);
    }
    r[n-1] = arr[n-1];

    for(int i = n-2;i>=0;i--){
        r[i] = max(arr[i],r[i+1]);
    }

    int sum = 0;

    for(int i = 1; i<n-1; i++){
        int w = min(l[i-1],r[i+1]) - arr[i];
        sum += max(0, w);
    }

    
    return 0;
}