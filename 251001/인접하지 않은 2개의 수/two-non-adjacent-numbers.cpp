#include <iostream>
#include <climits>

using namespace std;

int n;
int numbers[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int result = INT_MIN;

    for(int i = 0; i < n; i++){
        for(int k = 0; k < n; k++){
            if(i == k || i == k - 1 || i == k + 1){
                continue;
            }

            if(numbers[i] + numbers[k] > result){
                result = numbers[i] + numbers[k];
            }
        }
    }

    cout << result;

    // Please write your code here.

    return 0;
}