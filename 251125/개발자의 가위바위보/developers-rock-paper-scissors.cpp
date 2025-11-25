#include <iostream>
using namespace std;

int game(int a, int b){

    if(a == 1){
        if(b == 3){
            return 1;
        }

        return 0;
    }
    else if(a == 2){
        if(b == 1){
            return 1;
        }

        return 0;
    }
    else{
        if(b == 2){
            return 1;
        }

        return 0;
    }

    return 0;

}

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    int input[N][2];

    int cell[6][3] = {{1, 2, 3}, {1, 3, 2}, {2, 1, 3}, {2, 3, 1}, {3, 1, 2}, {3, 2, 1}};

    for(int i = 0; i < N; i++){
        cin >> input[i][0] >> input[i][1];
    }

    int result = 0;

    for(int i = 0; i < 6; i++){
        int temp = 0;
        for(int k = 0; k < N; k++){
            temp += game(cell[i][input[k][0] - 1], cell[i][input[k][1] - 1]);
        }

        result = max(result, temp);
    }

    cout << result;

    return 0;
}