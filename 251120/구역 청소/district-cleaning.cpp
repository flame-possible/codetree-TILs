#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int input[101] = {0,};

    for(int i = a; i <= b; i++){
        if(!input[i]){
            input[i]++;
        }
    }
    
    for(int i = c; i <= d; i++){
        if(!input[i]){
            input[i]++;
        }
    }

    int result = 0;

    for(int i = 0; i <= 100; i++){
        result += input[i];
    }

    cout << result-1;

    return 0;
}