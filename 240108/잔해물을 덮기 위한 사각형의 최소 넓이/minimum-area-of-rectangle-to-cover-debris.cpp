#include <iostream>

using namespace std;

int main() {
    
    int x1, y1, x2, y2;
    int input[2001][2001] = {0,};

    for(int i = 0; i < 2; i++){
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += 1000;
        y1 += 1000;
        x2 += 1000;
        y2 += 1000;

        for(int k = x1; k < x2; k++){
            for(int p = y1; p < y2; p++){
                if(i == 0)
                    input[k][p] = 1;
                else
                    input[k][p] = 0;
            }
        }

    }

    x1 = y1 = 2001;
    x2 = y2 = 0;

    int pan = 0;
    int result = 0;
    for(int i = 0; i < 2001; i++){
        for(int k = 0; k < 2001; k++){
            if(input[i][k]){
                pan = 1;
                // cout << i << ' ' << k << '\n';
                if(x1 > i){
                    x1 = i;
                }
                if(x2 < i){
                    x2 = i;
                }
                if(y1 > k){
                    y1 = k;
                }
                if(y2 < k){
                    y2 = k;
                }
            }
        }
    }

    x2++;
    y2++;

    // cout << x1 << ' ' << y1 << ' ' << x2 << ' ' << y2 << '\n';

    if(pan == 1){
        result = (x2 - x1) * (y2 - y1);
    }
    else{
        result = 0;
    }

    cout << result << '\n';

    return 0;
}