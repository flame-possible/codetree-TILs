#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N, M, p;

    cin >> N >> M >> p;

    int input[26][2];
    int person[M+1];
    int read[M+1];

    for(int i = 0; i < 26; i++){
        input[i][0] = -1;
        input[i][1] = -1;
    }

    for(int i = 1; i <= M; i++){
        char a;
        int b;

        cin >> a >> b;
        person[i] = a-'A';
        read[i] = b;

        input[a-'A'][0] = i;
        input[a-'A'][1] = b;

        if(b == 0){
            for(int k = 0; k < N; k++){
                input[k][0] = i;
                input[k][1] = b;
            }
        }

        for(int k = 0; k < N; k++){
            if(input[k][1] == b){
                input[k][0] = i;
            }
        }
    }

    char result = 'A';
    
    // for(int i = 0; i < N; i++){
    //     result += i;
    //     cout << result << ' ' << input[i][0] << '\n';
        

    //     result = 'A';
    // }

    for(int i = 0; i < N; i++){
        if(input[i][0] < p){
            result += i;
            cout << result << ' ';
        }

        result = 'A';
    }


    return 0;
}