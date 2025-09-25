#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    double score[8] = {0,};

    double result = 0;

    for(int i = 0; i < 8; i++){
        cin >> score[i];

        result += score[i];
    }

    cout << fixed;

    cout.precision(1);

    cout << result / 8;



    return 0;
}