#include <iostream>
#include <queue>
using namespace std;

int x, i = 0;
deque<int> first, second;

void first_win(){
    first.push_back(first.front());
    first.push_back(second.front());
    first.pop_front();
    second.pop_front();
}

void second_win(){
    second.push_back(first.front());
    second.push_back(second.front());
    first.pop_front();
    second.pop_front();
}

int main(){

    for(int j = 0; j < 10; j++){
        cin >> x;
        if(j < 5) first.push_back(x);
        else second.push_back(x);
    }   

    while(true){

        if(first.size() == 10){
            cout << "first " << i;
            return 0; 
        }
        else if(second.size() == 10){
            cout << "second " << i;
            return 0;
        }
        else if(i > 100000){
            cout << "botva";
            return 0;
        }

        if(first.front() == 0 and second.front() == 9) first_win();
        else if(first.front() == 9 and second.front() == 0) second_win();
        else if(first.front() > second.front()) first_win();
        else if(first.front() < second.front()) second_win();

        i++;
    }

}