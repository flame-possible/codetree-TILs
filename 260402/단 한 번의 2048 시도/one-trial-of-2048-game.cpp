#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> arr(4, vector<int>(0));

char dir;

void moveLinebyLine(){
    vector<int> temp(4, 0);

    if(dir == 'L'){

        for(int i = 0; i < 4; i++){
            int cnt = 0;
            for(int k = 0; k < 4; k++){
                if(arr[i][k] != 0){
                    temp[cnt++] = arr[i][k];
                }
            }

            for(int k = 0; k < 4; k++){
                arr[i][k] = temp[k];
            }

            fill(temp.begin(), temp.end(), 0);
        }
    }

    else if(dir == 'R'){

        for(int i = 0; i < 4; i++){
            int cnt = 3;
            for(int k = 3; k >= 0; k--){
                if(arr[i][k] != 0){
                    temp[cnt--] = arr[i][k];
                }
            }

            for(int k = 0; k < 4; k++){
                arr[i][k] = temp[k];
            }

            fill(temp.begin(), temp.end(), 0);
        }
    }

    else if(dir == 'U'){

        for(int k = 0; k < 4; k++){
            int cnt = 0;
            for(int i = 0; i < 4; i++){
                if(arr[i][k] != 0){
                    temp[cnt++] = arr[i][k];
                }
            }

            for(int i = 0; i < 4; i++){
                arr[i][k] = temp[i];
            }

            fill(temp.begin(), temp.end(), 0);
        }
    }

    else if(dir == 'D'){

        for(int k = 0; k < 4; k++){
            int cnt = 3;
            for(int i = 3; i >= 0; i--){
                if(arr[i][k] != 0){
                    temp[cnt--] = arr[i][k];
                }
            }

            for(int i = 0; i < 4; i++){
                arr[i][k] = temp[i];
            }

            fill(temp.begin(), temp.end(), 0);
        }
    }

}

void move(){

    moveLinebyLine();

    if(dir == 'L'){
        for(int i = 0; i < 4; i++){
            for(int k = 0; k < 3; k++){
                if(arr[i][k] == arr[i][k+1]){
                    arr[i][k] += arr[i][k+1];
                    arr[i][k+1] = 0;
                }
            }
        }
    }

    else if(dir == 'R'){
        for(int i = 0; i < 4; i++){
            for(int k = 3; k > 0; k--){
                if(arr[i][k] == arr[i][k-1]){
                    arr[i][k] += arr[i][k-1];
                    arr[i][k-1] = 0;
                }
            }
        }
    }

    else if(dir == 'U'){
        for(int k = 0; k < 4; k++){
            for(int i = 0; i < 3; i++){
                if(arr[i][k] == arr[i+1][k]){
                    arr[i][k] += arr[i+1][k];
                    arr[i+1][k] = 0;
                }
            }
        }
    }

    else if(dir == 'D'){
        for(int k = 0; k < 4; k++){
            for(int i = 3; i > 0; i--){
                if(arr[i][k] == arr[i-1][k]){
                    arr[i][k] += arr[i-1][k];
                    arr[i-1][k] = 0;
                }
            }
        }
    }

    moveLinebyLine();

}

int main() {
    // Please write your code here.

    for(int i = 0; i < 4; i++){
        for(int k = 0; k < 4; k++){
            int input;

            cin >> input;
            arr[i].push_back(input);
        }
    }

    cin >> dir;

    move();
    
    for(int i = 0; i < 4; i++){
        for(int k = 0; k < 4; k++){
            cout << arr[i][k] << ' ';
        }
        cout << '\n';
    }




    return 0;
}