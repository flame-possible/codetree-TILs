#include <iostream>
using namespace std;

int N;
int input[101];
int s1, e1, s2, e2;

int answer(int s, int e, int size){
    int temp[101] = {0,};
    int cnt = 1;

    for(int i = 0; i < 101; i++){
        temp[i] = 0;
    }

    for(int i = 1; i <= size; i++){
        if(i >= s && i <= e){
            continue;
        }

        temp[cnt++] = input[i];
    }

    for(int i = 0; i < 101; i++){
        input[i] = temp[i];
    }

    return cnt - 1;
}

int main() {
    // Please write your code here.

    cin >> N;

    for(int i = 1; i <= N; i++){
        cin >> input[i];
    }

    int size = N;

    cin >> s1 >> e1;
    cin >> s2 >> e2;

    size = answer(s1, e1, size);
    size = answer(s2, e2, size);

    cout << size << '\n';

    if(size){
        for(int i = 1; i <= size; i++){
            cout << input[i] << '\n';
        }
    }


    return 0;
}