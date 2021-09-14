#include <iostream>
using namespace std;

struct stack{
    int arr[100000];
    int pos;
    stack(){
        pos = 0;
    }

    bool error(){
        return pos - 1 < 0;
    }

    void push(int n){
        arr[pos] = n;
        pos++;
    }

    int pop(){
        pos--;
        return arr[pos];
    }

    int top(){
        return arr[pos - 1];
    }

    int size(){
        return pos;
    }

    void clear(){
        pos = 0;
    }
};

int main(){
    
    stack st;

    return 0;
}