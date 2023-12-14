#include <iostream>

using namespace std;

int mon[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string str[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int count_mon(int m, int d){
    int sum = 0;

    for(int i = 1; i < m; i++){
        sum += mon[i];
    }
    sum += d;

    return sum;
}

int main() {


    int m1, d1, m2, d2;
    string input;

    cin >> m1 >> d1 >> m2 >> d2;
    cin >> input;

    int stan = count_mon(m1, d1);
    int tar = count_mon(m2, d2);

    int diff = count_mon(m2, d2) - count_mon(m1, d1);
    int cnt = 0;
    int pos = 0;

    for(int i = 0; i < 7; i++){
        if(str[i] == input){
            pos = i;
            break;
        }
    }

    cnt = diff / 7;
    diff %= 7;

    if(pos <= diff){
        cnt++;
    }

    cout << cnt << '\n';

    // 여기에 코드를 작성해주세요.
    return 0;
}