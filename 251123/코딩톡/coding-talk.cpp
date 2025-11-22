#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N, M, p;

    cin >> N >> M >> p;

    int input[26];

    for(int i = 0; i < 26; i++){
        input[i] = -1;
    }

    for(int i = 1; i <= M; i++){
        char a;
        int b;

        cin >> a >> b;

        input[a-'A'] = i;
    }

    char result = 'A';

    for(int i = 0; i < N; i++){
        if(input[i] < p){
            result += i;
            cout << result << ' ';
        }

        result = 'A';
    }


    return 0;
}