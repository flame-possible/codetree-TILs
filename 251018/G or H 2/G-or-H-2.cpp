#include <iostream>
using namespace std;

char pan[101];

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int max_cnt = 0;

    for(int i = 0; i < n; i++){
        int a;
        char b;

        cin >> a >> b;

        pan[a] = b;

        if(max_cnt < a){
            max_cnt = a;
        }
    }

    int result = 0;

    for(int i = max_cnt; i > 0; i--){

        for(int k = 0; k <= max_cnt; k++){
            int g = 0, h = 0;

            for(int p = k; p < k + i; p++){
                if(pan[p] == 'G'){
                    g++;
                }
                else if(pan[p] == 'H'){
                    h++;
                }
            }

            if(h == g && pan[k] != 0 && pan[k + i - 1] != 0){
                result = i - 1;
                break;
            }

        }

        if(result != 0){
            break;
        }
    }

    cout << result;

    return 0;
}