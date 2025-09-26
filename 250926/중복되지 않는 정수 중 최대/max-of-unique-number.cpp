#include <iostream>

using namespace std;

int N;
int nums[1000];
int result[1001];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> nums[i];

        result[nums[i]]++;
    }

    for(int i = 1000; i > 0; i--){
        if(result[i] == 1){
            cout << i;
            
            return 0;
        }
    }

    cout << "-1";

    // Please write your code here.

    return 0;
}
