#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.

    int N, B;

    cin >> N >> B;

    int input[N];

    for(int i = 0; i < N; i++){
        cin >> input[i];
    }

    sort(input, input+N);

    int result = 0;

    for(int i = 0; i < N; i++){
        int temp_cnt = 0;
        int temp_Price = B;

        for(int k = 0; k < N; k++){
            int temp = input[k];

            if(i == k) temp /= 2;

            if(temp <= temp_Price){
                temp_cnt++;
                temp_Price -= temp;
            }
        }

        result = max(result, temp_cnt);
    }

    cout << result;

    return 0;
}