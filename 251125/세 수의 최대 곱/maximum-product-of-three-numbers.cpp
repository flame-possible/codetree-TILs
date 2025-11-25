#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    int input[N];
    
    int pos = 0;
    int zero = 0;
    int neg = 0;

    for(int i = 0; i < N; i++){
        cin >> input[i];

        if(input[i] > 0){
            pos++;
        }
        else if(input[i] < 0){
            neg++;
        }
        else{
            zero++;
        }
    }

    sort(input, input + N);

    int result = INT_MIN;
    int a = 0, b = 0, c = 0;

    if(pos >= 3){
        a = input[N-1];
        b = input[N-2];
        c = input[N-3];

        result = max(result, a * b * c);
    }

    if(pos >= 1 && neg >= 2){
        a = input[N-1];
        b = input[0];
        c = input[1];

        result = max(result, a * b * c);
    }

    if(zero){
        result = max(result, 0);
    }

    if(pos >= 2 && neg >= 1){
        a = input[neg + zero];
        b = input[neg + zero + 1];
        c = input[neg - 1];

        result = max(result, a * b * c);
    }

    if(neg >= 3){
        a = input[neg - 1];
        b = input[neg - 2];
        c = input[neg - 3];

        result = max(result, a * b * c);
    }

    cout << result;



    return 0;
}