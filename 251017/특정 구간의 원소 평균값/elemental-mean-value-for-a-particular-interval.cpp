#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = n;

    for(int i = 2; i <= n; i++){
        for(int k = 0; k <= n - i; k++){
            int temp = 0;
            for(int p = k; p < k + i; p++){
                temp += arr[p];
            }

            if(temp % i == 0){
                temp /= i;
                
                for(int p = k; p < k + i; p++){
                    if(temp == arr[p]){
                        // cout << temp << ' ' << arr[p] << ' ' << i << '\n';
                        result++;
                        break;
                    }
                }
            }

        }
    }

    cout << result;

    // Please write your code here.

    return 0;
}