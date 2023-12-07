#include <iostream>

using namespace std;

int main() {
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int m1, d1, m2, d2;

    cin >> m1 >> d1 >> m2 >> d2;

    int sum_1 = 0, sum_2 = 0;

    for(int i = 1; i < m1; i++){
        sum_1 += num_of_days[i];
    }
    sum_1 += d1;

    for(int i = 1; i < m2; i++){
        sum_2 += num_of_days[i];
    }
    sum_2 += d2;

    cout << sum_2 - sum_1 + 1 << '\n';

    // 여기에 코드를 작성해주세요.
    return 0;
}