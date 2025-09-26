#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int input[n] = {0,};

    int result = INT_MAX;

    for(int i = 0; i < n; i++){
        cin >> input[i];
    }

    for(int i = 1; i < n; i++){
        if(input[i] - input[i-1] < result){
            result = input[i] - input[i-1];
        }
    }

    cout << result;

    return 0;
}