#include <iostream>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int N, K;

    int input[101] = {0,};

    cin >> N >> K;

    for(int i = 0; i < K; i++){
        int a, b;

        cin >> a >> b;

        for(int j = a; j <= b; j++){
            input[j]++;
        }
    }

    int max = 0;

    for(int i = 1; i <= N; i++){
        if(input[i] > max){
            max = input[i];
        }
    }

    cout << max;
    
    return 0;
}