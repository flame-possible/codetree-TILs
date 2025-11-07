#include <iostream>
using namespace std;

int N;
int input[20][2];
int x[3], y[3];
int checkX[11], checkY[11];
int checkN[20];
int x_cnt, y_cnt;


int line(int x_cur, int y_cur){

    if(x_cnt == x_cur && y_cnt == y_cur){

        // for(int i = 0; i < x_cnt; i++){
        //     cout << x[i] << ' ';
        // }
        // cout << '\n';

        // for(int i = 0; i < y_cnt; i++){
        //     cout << y[i] << ' ';
        // }
        // cout << '\n';

        for(int i = 0; i < N; i++){
            checkN[i] = 0;
        }

        for(int i = 0; i < N; i++){
            for(int k = 0; k < x_cnt; k++){
                if(input[i][0] == x[k]) checkN[i] = 1;
            }

            for(int k = 0; k < y_cnt; k++){
                if(input[i][1] == y[k]) checkN[i] = 1;
            }
        }

        int result = 1;

        for(int i = 0; i < N; i++){
            if(!checkN[i]){
                result = 0;
                break;
            }
        }

        return result;

    }

    int result = 0;

    for(int i = 0; i <= 10; i++){
        if(!checkX[i] && x_cur < x_cnt){
            checkX[i] = 1;

            x[x_cur++] = i;

            result = line(x_cur, y_cur);

            if(result) break;

            x[x_cur--] = 0;

            checkX[i] = 0;
        }
    }

    if(result){
        return result;
    }


    for(int i = 0; i <= 10; i++){
        if(!checkY[i] && y_cur < y_cnt){
            checkY[i] = 1;

            y[y_cur++] = i;

            result = line(x_cur, y_cur);

            if(result) break;

            y[y_cur--] = 0;

            checkY[i] = 0;
        }
    }


    return result;

}

int main() {
    // Please write your code here.

    cin >> N;


    for(int i = 0; i < N; i++){
        cin >> input[i][0] >> input[i][1];
    }

    x_cnt = 0;
    y_cnt = 3;

    int result = 0;

    for(int i = 0; i <= 3; i++){
        
        result = line(0, 0);

        if(result == 1) break;

        x_cnt++;
        y_cnt--;


    }


    cout << result;



    return 0;
}