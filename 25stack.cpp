#include<iostream>
#include<vector>
using namespace std;

 class stack{
    vector<int> arr;
    vector<int> arr2;
    public:

    stack(){

    }
    void push(int n){
        if(arr.size() == 0){
            arr.push_back(n);
            arr2.push_back(n);
        }else{
            arr.push_back(n);
            if(arr2.back() < n){
                arr2.push_back(arr2.back());
            }else{
            arr2.push_back(n);
            }
        }
    }

    int top(){
        return arr2.back();
        // return mini;
    }
    int size(){
        return arr.size();
    }

    void empty(){
        arr.resize(0);
    }

    void pop(){
        arr.pop_back();
    }
};


// void main(){
//     cout << "abc";
// }

// class stack{

// }

int main(){
    stack s;
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(1);
    s.push(2);

    cout << s.top();
    
  
    return 0;
}