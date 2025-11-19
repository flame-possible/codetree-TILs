#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int ans = 2;

    int input[101] = {0,};

    for(int i = a; i <= b; i++){
        input[i]++;
    }
    
    for(int i = c; i <= d; i++){
        input[i]++;
        
        if(input[i] >= 2){
            ans = 1;
        }
    }

    int result = 0;

    for(int i = 0; i <= 100; i++){
        if(input[i]){
            result++;
        }
    }

    cout << result - ans;

    return 0;
}