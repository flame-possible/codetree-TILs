#include <iostream>

using namespace std;

int main() {
    
    int x1, y1, x2, y2;
    int input[2001][2001] = {0,};

    for(int i = 0; i < 3; i++){

        cin >> x1 >> y1 >> x2 >> y2;

        x1 += 1000;
        x2 += 1000;
        y1 += 1000;
        y2 += 1000;

        for(int k = x1; k < x2; k++){
            for(int p = y1; p < y2; p++){
                if(i == 2)
                    input[k][p] = 0;
                else
                    input[k][p] = 1;

            }
        }

    }

    int result = 0;
    for(int i = 0; i < 2001; i++){
        for(int k = 0; k < 2001; k++){
            if(input[i][k])
                result++;
        }
    }

    cout << result << '\n';

    return 0;
}