#include <iostream>

using namespace std;

int main() {

    int mon[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string str[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    int m1, d1, m2, d2;

    cin >> m1 >> d1 >> m2 >> d2;

    int standard = 0;
    int tar = 0;

    for(int i = 1; i < m1; i++){
        standard += mon[i];
    }

    for(int i = 1; i < m2; i++){
        tar += mon[i];
    }

    standard += d1;
    tar += d2;

    int cursor = 1;

    while(standard != tar){
        if(standard < tar){
            cursor++;
            standard++;
        }
        else if(standard > tar){
            cursor--;
            standard--;
        }
        if(cursor < 0){
            cursor = 6;
        }

        else if(cursor == 7){
            cursor = 0;
        }
    }

    cout << str[cursor] << '\n';


    return 0;
}