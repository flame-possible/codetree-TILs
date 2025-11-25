#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    string input;

    cin >> input;

    int place_1[N] = {0,};
    int place_1_cnt = 0;

    for(int i = 0; i < N; i++){
        if(input[i] == '1'){
            place_1[place_1_cnt++] = i;
        }
    }

    int max_1 = 0;
    int max_1_place = 0;

    for(int i = 1; i < place_1_cnt; i++){

        if(max_1 < (place_1[i] - place_1[i-1]) / 2){
            max_1 = (place_1[i] - place_1[i-1]) / 2;
            max_1_place = place_1[i-1] + max_1;
        }

    }

    int edgeL = place_1[0];
    int edgeR = N - 1 - place_1[place_1_cnt-1];

    if(max_1 < edgeL){
        max_1 = edgeL;
        max_1_place = 0;
    }
    
    if(max_1 < edgeR){
        max_1 = edgeR;
        max_1_place = N - 1;
    }

    input[max_1_place] = '1';

    int result = N;
    place_1_cnt = 0;

    for(int i = 0; i < N; i++){
        if(input[i] == '1'){
            place_1[place_1_cnt++] = i;
        }
    }

    for(int i = 1; i < place_1_cnt; i++){
        result = min(result, place_1[i] - place_1[i-1]);
    }

    cout << result;




    return 0;
}