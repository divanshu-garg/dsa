#include<iostream>
using namespace std;

int compare(char* a, char* b){
    int ans = 0;

    int i = 0;
    while(a[i] != '/0' && b[i] != '/0'){
        if(a[i] > b[i]){
            return 0;
        }else if(b[i] > a[i]){
            return -1;
        }
        i++;
    }

    return ans;
}

int main(){
    int n;
    cin >> n;
    char arr[n+1];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    arr[n] = NULL;
    int i = 0;
    int j = n;

    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for(auto i:arr){
        cout << i << " ";
    }
    return 0;
}