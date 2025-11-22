#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N, M, p;

    cin >> N >> M >> p;

    int input[26];
    int person[M+1];
    int read[M+1];

    for(int i = 0; i < 26; i++){
        input[i] = -1;
    }

    for(int i = 1; i <= M; i++){
        char a;
        int b;

        cin >> a >> b;
        person[i] = a-'A';
        read[i] = b;

        input[a-'A'] = i;

        if(b == 0){
            for(int k = 0; k < N; k++){
                input[k] = i;
            }
        }
        else if(read[i-1] == read[i]){
            input[person[i-1]] = i;
        }
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