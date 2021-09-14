#include <iostream>
using namespace std;

struct deque{
    int q[100000];
    int start, endd;

    deque(){
        start = 50000;
        endd = 50000;
    }
    
    bool error(){
        return endd - start <= 0;
    }

    void push_front(int n){
        q[start] = n;
        start--;
    }

    void push_back(int n){
        q[endd + 1] = n;
        endd++;
    }

    int pop_front(){
        start++;
        return q[start];
    }

    int pop_back(){
        endd--;
        return q[endd + 1];
    }

    int front(){
        return q[start + 1];
    }

    int back(){
        return q[endd];
    }

    int size(){
        return endd - start;
    }

    void clear(){
        start = 50000;
        endd = 50000;
    }
};

int main(){

    deque dq;

    return 0;
}