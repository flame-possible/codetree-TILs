#include <iostream>

using namespace std;

int main() {
    
    int N;
    int x1, y1;
    int input[201][201] = {0,};

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> x1 >> y1;

        x1 += 100;
        y1 += 100;

        for(int k = x1; k < x1 + 8; k++){
            for(int p = y1; p < y1 + 8; p++){
                input[k][p] = 1;
            }
        }
    }

    int result = 0;
    for(int i = 0; i < 201; i++){
        for(int k = 0; k < 201; k++){
            if(input[i][k])
                result++;
        }
    }

    cout << result << '\n';

    return 0;
}