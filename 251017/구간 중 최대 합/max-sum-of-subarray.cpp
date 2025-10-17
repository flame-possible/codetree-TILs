#include <iostream>

using namespace std;

int n, k;
int arr[100];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = 0;

    for(int i = 0; i < n - k; i++){
        int temp = 0;
        for(int p = 0; p < k; p++){
            temp += arr[i + p];
        }

        if(result < temp){
            result = temp;
        }
    }

    cout << result;

    // Please write your code here.

    return 0;
}