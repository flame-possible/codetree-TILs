#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    int input[101] = {0,};

    for(int i = 0; i < N; i++){
        int temp;

        cin >> temp;

        input[temp]++;
    }

    int result = INT_MAX;

    for(int i = 0; i <= 100 - 17; i++){
        int k = i + 17;

        int temp = 0;

        for(int p = 0; p < i; p++){
            temp += input[p] * (i - p) * (i - p);
        }

        for(int p = 100; p > k; p--){
            temp += input[p] * (p - k) * (p - k);
        }

        result = min(result, temp);

        
    }

    cout << result;

    return 0;
}