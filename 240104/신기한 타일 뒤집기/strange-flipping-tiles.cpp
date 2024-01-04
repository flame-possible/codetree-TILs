#include <iostream>

using namespace std;

int main() {
    
    int N;
    int input[200001] = {0,};
    int x;
    char pos;

    cin >> N;

    int cur = 100000;
    for(int i = 0; i < N; i++){
        cin >> x >> pos;

        if(pos == 'R'){
            for(int k = 0; k < x; k++){
                input[cur++] = 1;
            }
            cur--;
        }
        else{
            for(int k = 0; k < x; k++){
                input[cur--] = -1;
            }
            cur++;
        }
    }

    int white_num = 0;
    int black_num = 0;

    for(int i = 0; i <= 200000; i++){
        if(input[i] == 1){
            black_num++;
        }
        else if(input[i] == -1){
            white_num++;
        }
    }

    cout << white_num << ' ' << black_num << '\n';

    return 0;
}