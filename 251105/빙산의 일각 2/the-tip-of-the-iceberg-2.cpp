#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    int input[N];

    int Maxcnt = 0;

    for(int i = 0; i < N; i++){
        cin >> input[i];

        Maxcnt = max(Maxcnt, input[i]);
    }

    int result = 0;

    for(int i = 1; i < Maxcnt; i++){
        int temp[N];
        int tempcnt = 0;

        for(int k = 0; k < N; k++){
            temp[k] = input[k] - i;
        }

        int change = max(temp[0], 0);

        for(int k = 1; k < N; k++){

            if(change == 0){
                if(temp[k] > 0){
                    tempcnt++;
                    change = temp[k];
                }
            }
            else{
                if(temp[k] <= 0){
                    change = 0;
                }
            }

        }

        if(change > 0){
            tempcnt++;
        }

        result = max(result, tempcnt);
    }

    cout << result;

    return 0;
}