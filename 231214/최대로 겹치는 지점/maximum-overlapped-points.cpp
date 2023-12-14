#include <iostream>

using namespace std;

int main() {
    
    int n;
    int input[101] = {0,};

    cin >> n;

    for(int i = 0; i < n; i++){
        int a, b;

        cin >> a >> b;

        for(int k = a; k <= b; k++){
            input[k]++;
        }
    }

    int max = 0;

    for(int i = 0; i < 101; i++){
        if(input[i] > max){
            max = input[i];
        }
    }

    cout << max;

    return 0;
}