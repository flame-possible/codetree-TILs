#include <iostream>

using namespace std;

int main() {
    
    int N;
    int x;
    char pos;
    int last[2001] = {0,};
    int black[2001] = {0,};
    int white[2001] = {0,};

    cin >> N;

    int cur = 1000;
    for(int i = 0; i < N; i++){
        cin >> x >> pos;

        if(pos == 'R'){
            for(int k = 0; k < x; k++){
                black[cur]++;
                last[cur++] = 1;
            }
            cur--;
        }
        else{
            for(int k = 0; k < x; k++){
                white[cur]++;
                last[cur--] = -1;
            }
            cur++;
        }

    }

    int gray_num = 0;
    int black_num = 0;
    int white_num = 0;

    for(int i = 0; i <= 2000; i++){
        if(black[i] >= 2 && white[i] >= 2){
            gray_num++;
        }
        else{
            if(last[i] == 1){
                black_num++;
            }
            else if(last[i] == -1){
                white_num++;
            }
        }
    }

    cout << white_num << ' ' << black_num << ' ' << gray_num << '\n';


    return 0;
}