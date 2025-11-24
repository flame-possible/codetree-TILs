#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    string input;

    cin >> input;

    int place_1[1001] = {0,};
    int dis[1001] = {0,};
    int cnt = 0;
    int temp = 0;

    int maxDis = 0;

    for(int i = 0; i < N; i++){
        if(input[i] == '1'){
            place_1[cnt] = i;
            dis[cnt++] = temp;

            maxDis = max(maxDis, temp);
            temp = 0;
        }
        else{
            temp++;
        }
    }

    int result = 0;

    for(int k = 1; k < cnt; k++){
        if(dis[k] == maxDis){
            input[place_1[k] - (dis[k] / 2) - 1] = '1';

            int temp_result = 1000;
            temp = 0;

            for(int i = 1; i < N; i++){
                if(input[i] == '1'){
                    temp_result = min(temp_result, temp);
                    temp = 0;
                }
                else{
                    temp++;
                }
            }

            result = max(result, temp_result);
            
            input[place_1[k] - (dis[k] / 2) - 1] = '0';
        }
    }

    cout << result + 1;

    return 0;
}