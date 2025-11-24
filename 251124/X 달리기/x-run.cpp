#include <iostream>
#include <climits>
using namespace std;

int speed[3] = {1, 0, -1};
int X;
int result = INT_MAX;

int answer(int cur, int distance, int time){

    if(distance > X || cur < 1){
        return 0;
    }

    if(distance == X){
        if(cur != 1){
            return 0;
        }

        result = min(result, time);

        return time;
    }

    for(int i = 0; i < 3; i++){
        cur += speed[i];

        distance += cur;

        answer(cur, distance, time+1);

        distance -= cur;

        cur -= speed[i];
    }

    return 0;

}

int main() {
    // Please write your code here.

    cin >> X;

    answer(1, 1, 1);

    cout << result;

    return 0;
}