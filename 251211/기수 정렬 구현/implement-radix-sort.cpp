#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    int input[N];

    int maxV = 0;

    for(int i = 0; i < N; i++){
        cin >> input[i];

        maxV = max(maxV, input[i]);
    }

    for(int exp = 1; (maxV / exp) > 0; exp *= 10){
        int count[10] = {0,};
        int arr[N] = {0,};

        for(int i = 0; i < N; i++){
            int digit = (input[i] / exp) % 10;
            count[digit]++;
        }

        for(int i = 1; i < 10; i++){
            count[i] += count[i-1];
        }

        for(int i = N - 1; i >= 0; i--){
            int digit = (input[i] / exp) % 10;
            arr[count[digit] - 1] = input[i];
            count[digit]--;
        }

        for(int i = 0; i < N; i++){
            input[i] = arr[i];
        }

    }

    for(int i = 0; i < N; i++){
        cout << input[i] << ' ';
    }


    return 0;
}