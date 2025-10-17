#include <iostream>
#include <climits>

using namespace std;

int N, S;
int arr[100];

int main() {
    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int result = INT_MAX;

    for(int i = 0; i < N; i++){
        for(int k = 0; k < N; k++){
            if(i == k){
                continue;
            }

            int temp = 0;

            for(int p = 0; p < N; p++){
                if(p == i || p == k) continue;

                temp += arr[p];
            }

            if(result > abs(S - temp)){
                result = abs(S - temp);
            }
        }
    }

    cout << result;

    // Please write your code here.

    return 0;
}