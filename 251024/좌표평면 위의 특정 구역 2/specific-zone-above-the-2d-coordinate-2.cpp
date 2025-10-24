#include <iostream>
#include <climits>
using namespace std;

int N;

int main() {
    // Please write your code here.

    cin >> N;

    int input[N][2];

    for(int i = 0; i < N; i++){
        cin >> input[i][0] >> input[i][1];
    }

    int result = INT_MAX;

    for(int i = 0; i < N; i++){

        int yMax = 0;
        int xMax = 0;
        int yMin = INT_MAX;
        int xMin = INT_MAX;

        for(int k = 0; k < N; k++){
            if(i == k) continue;

            if(input[k][0] > yMax){
                yMax = input[k][0];
            }

            if(input[k][1] > xMax){
                xMax = input[k][1];
            }
            
            if(input[k][0] < yMin){
                yMin = input[k][0];
            }

            if(input[k][1] < xMin){
                xMin = input[k][1];
            }

        }

        int temp = (yMax - yMin) * (xMax - xMin);

        if(temp < result){
            result = temp;
        }

    }

    cout << result;

    return 0;
}