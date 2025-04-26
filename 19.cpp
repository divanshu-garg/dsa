#include<iostream>
using namespace std;


// recursion first lec 5 april

int factorial(int n){
    if(n == 0){
        return 1;
    }

    return n * factorial(n-1);
}

int fibonacci(int n){
    if(n == 0){
        return 0;
    }

    if(n == 1){
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int power(int x, int y){
    if(y == 0) return 1;

    return x * power(x,y-1);
}

void print(int n){
    if(n == 1){
        cout << "one ";
    } else if(n == 2){
        cout << "two ";
    }else if(n == 3){
        cout << "three ";
    }else if(n == 4){
        cout << "four ";
    }else if(n == 5){
        cout << "five ";
    }else if(n == 5){
        cout << "six ";
    }else if(n == 7){
        cout << "seven ";
    }else if(n == 8){
        cout << "eight ";
    }else if(n == 9){
        cout << "nine ";
    }else{
        cout << "zero ";
    }
}

void spell(int m){
    if(m == 0){
        return;
    }
    spell(m/10);
    int n = m%10;
    if(n == 1){
        cout << "one ";
    } else if(n == 2){
        cout << "two ";
    }else if(n == 3){
        cout << "three ";
    }else if(n == 4){
        cout << "four ";
    }else if(n == 5){
        cout << "five ";
    }else if(n == 5){
        cout << "six ";
    }else if(n == 7){
        cout << "seven ";
    }else if(n == 8){
        cout << "eight ";
    }else if(n == 9){
        cout << "nine ";
    }else{
        cout << "zero ";
    }
}

int st(string s){
    if(s.size() == 1){
        return s[0] -'0';
    }
    int value = s[s.size()-1] -'0'; 
    s.pop_back();
    return value + (st(s) * 10);
}

int main(){
    // cout << fibonacci(9);
    // cout << power(2,3);
    spell(102);
    // cout << st("123");
}