#include <iostream>
using namespace std;


int a = 0, b = 0, c = 0;
int pan = 0;
int result = 0;

int ans(int cnt){

    if(cnt == a && cnt == b && cnt == c){
        return 0;
    }
    else if(cnt == a && cnt == b){
        return 1;
    }
    else if(cnt == a && cnt == c){
        return 2;
    }
    else if(cnt == b && cnt == c){
        return 3;
    }
    else if(cnt == a){
        return 4;
    }
    else if(cnt == b){
        return 5;
    }
    else if(cnt == c){
        return 6;
    }

}

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    for(int i = 0; i < N; i++){
        char input1;
        int input2;

        cin >> input1 >> input2;

        if(input1 == 'A'){
            a += input2;
        }
        else if(input1 == 'B'){
            b += input2;
        }
        else{
            c += input2;
        }

        int temp = ans(max(a, max(b, c)));

        if(temp != pan){
            pan = temp;
            result++;
        }

    }

    cout << result;

    return 0;
}