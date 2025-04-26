#include<iostream>
#include<vector>
using namespace std;

int allOcc(vector<int> arr, int t){
    if(sizeof(arr) == 0){
        return -1;
    }
    int count = 0;
    if(arr[sizeof(arr)-1] == t){
        count++;
    };
    arr.pop_back();
    int rvalue = allOcc(arr,t);
    if(rvalue != -1){
        count += rvalue;
    }

    return count;
}

int main(){


    return 0;
}