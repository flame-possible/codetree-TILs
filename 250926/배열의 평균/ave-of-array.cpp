#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    double input[2][4] = {0,};

    double row_ave[2] = {0,};
    double column_ave[4] = {0,};
    double average = 0;

    cout << fixed;
    cout.precision(1);

    for(int i = 0; i < 2; i++){
        for(int k = 0; k < 4; k++){
            cin >> input[i][k];

            row_ave[i] += input[i][k];
            column_ave[k] += input[i][k];
            
            if(i == 1){
                column_ave[k] /= 2;
            }
        }

        row_ave[i] /= 4;
        average += row_ave[i];
    }

    for(int i = 0; i < 2; i++){
        cout << row_ave[i] << ' ';
    }

    cout << '\n';

    for(int i = 0; i < 4; i++){
        cout << column_ave[i] << ' ';
    }

    cout << '\n';

    cout << average / 2;

    return 0;
}