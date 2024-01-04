#include <iostream>

using namespace std;

int main() {
    
    int n;
    int input[2001] = {0,};

    cin >> n;

    int cur = 1000;

    for(int i = 0; i < n; i++){
        int x;
        char pos;

        cin >> x >> pos;

        if(pos == 'R'){
            for(int k = 0; k <= x; k++){
                input[cur++]++;
            }
            cur--;
        }
        else{
            for(int k = 0; k <= x; k++){
                input[cur--]++;
            }
            cur++;
        }
    }

    int result = 0;

    for(int i = 0; i <= 2000; i++){
        if(input[i] >= 2){
            result++;
            // cout << i << ' ' << input[i] << ' ' << result << '\n';
        }
        if(i > 0 && input[i-1] >= 2 && input[i] < 2){
            result--;
            // cout << i << ' ' << input[i] << ' ' << result << '\n';
        }
    }

    cout << result;

    return 0;
}