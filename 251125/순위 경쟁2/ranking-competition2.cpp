#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;

    cin >> N;

    int result = 0;

    char input1;
    int input2;

    int a = 0, b = 0;
    int pan = 0;

    for(int i = 0; i < N; i++){
        cin >> input1 >> input2;

        if(input1 == 'A'){
            a += input2;
        }
        else{
            b += input2;
        }

        int temp = 0;

        if(a == b){
            temp = 0;
        }
        else if(a > b){
            temp = -1;
        }
        else{
            temp = 1;
        }

        if(temp != pan){
            pan = temp;
            result++;
        }
    }

    cout << result;

    return 0;
}