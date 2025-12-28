#include <iostream>
#include <deque>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    deque<int> d;

    for(int i = 1; i <= N; i++){
        d.push_back(i);
    }

    int cnt = 1;

    while(d.size() != 1){
        if(cnt & 1){
            d.pop_front();
        }
        else{
            d.push_back(d.front());
            d.pop_front();
        }
        cnt++;
    }

    cout << d.front();

    return 0;
}