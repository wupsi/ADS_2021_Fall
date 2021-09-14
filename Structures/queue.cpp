#include <iostream>
using namespace std;

struct queue{
    int q[100000];
    int start, endd;

    queue(){
        start = 0;
        endd = 0;
    }

    bool error(){
        return endd - start <= 0;
    }

    void push(int n){
        q[endd] = n;
        endd++;
    }

    int pop(){
        start++;
        return q[start - 1];
    }

    int front(){
        return q[start];
    }

    int size(){
        return endd - start;
    }

    void clear(){
        start = 0;
        endd = 0;
    }
};

int main(){

    queue q;

    return 0;
}