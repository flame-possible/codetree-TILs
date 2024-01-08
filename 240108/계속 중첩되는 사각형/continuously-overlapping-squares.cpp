#include <iostream>

using namespace std;

int main() {
    
    int N;
    int input[201][201] = {0,};

    int x1, x2, y1, y2;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += 100;
        y1 += 100;
        x2 += 100;
        y2 += 100;

        for(int k = x1; k < x2; k++){
            for(int p = y1; p < y2; p++){
                if(i & 1){
                    input[k][p] = 2;
                }
                else{
                    input[k][p] = 1;
                }
            }
        }
    }

    int result = 0;
    for(int i = 0; i < 201; i++){
        for(int k = 0; k < 201; k++){
            if(input[i][k] == 2){
                result++;
            }
        }
    }

    cout << result << '\n';

    return 0;
}