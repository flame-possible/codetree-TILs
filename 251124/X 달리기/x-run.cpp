#include <iostream>
#include <climits>
using namespace std;

int X;
int result = INT_MAX;

int main() {
    // Please write your code here.

    cin >> X;

    int cur = 0;
    int distance = 0;
    int time = 0;

    while(distance < X / 2){
        cur++;
        distance += cur;
    }

    if((X - distance) - (distance - cur) < 0){
        distance -= cur;
        cur--;
        distance = (X - distance) - (distance - cur);
    }
    else{
        distance = (X - distance) - (distance - cur);
    }

    time = ((cur-1) * 2) + 1;

    cur--;
    while(distance != 0){
        if(distance - cur >= 0){
            time++;
            distance -= cur;
        }
        cur--;
    }

    cout << time;

    return 0;
}