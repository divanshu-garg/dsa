#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int vol = 0;
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //         int l = j-i;
    //         int h = min(arr[i], arr[j]);
    //         vol = max(vol, l*h);
    //     }
    // }

    int l = 0;
    int r = n-1;

    while(l<r){
        int length = r - l;
        int height = min(arr[l],arr[r]);

        vol = max(vol, length*height);

        if(arr[l] < arr[r]){
            l++;
        }else if(arr[l]>arr[r]){
            r--;
        }else{
            r--;
            l++;
        }
    }

    cout << "volume: " << vol;
    return 0;
}