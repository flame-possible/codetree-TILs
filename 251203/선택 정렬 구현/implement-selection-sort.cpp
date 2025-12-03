#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    int input[N];

    for(int i = 0; i < N; i++){
        cin >> input[i];
    }

    for(int i = 0; i < N-1; i++){
        int min = i;

        for(int k = i+1; k < N; k++){
            if(input[k] < input[min]){
                min = k;
            }
        }

        int temp = input[i];
        input[i] = input[min];
        input[min] = temp;
    }

    for(int i = 0; i < N; i++){
        cout << input[i] << ' ';
    }

    return 0;
}