#include <iostream>
using namespace std;

int check[10][10];

void ans(int temp[10]){
    
    int a1 = 0, a2 = 0;

    int result = 0;

    for(int k = 1; k < 10; k++){
        if(temp[k] == 2){
            result = 1;
        }
    }

    if(result){
        for(int k = 1; k < 10; k++){
            if(temp[k]){
                if(!a1){
                    a1 = k;
                }
                else{
                    a2 = k;
                }
            }
        }

        check[a1][a2] = 1;
        check[a2][a1] = 1;
    }

}

int main() {
    // Please write your code here.



    int input[3][3];

    for(int i = 0; i < 3; i++){
        string temp;
        cin >> temp;
        for(int k = 0; k < 3; k++){
            input[i][k] = temp[k] - '0';
        }
    }


    for(int i = 0; i < 3; i++){

        int temp[10] = {0,};

        for(int k = 0; k < 3; k++){
            temp[input[i][k]]++;
        }

        ans(temp);

    }
    
    for(int i = 0; i < 3; i++){

        int temp[10] = {0,};

        for(int k = 0; k < 3; k++){
            temp[input[k][i]]++;
        }

        ans(temp);

    }

    int temp[10] = {0,};

    for(int i = 0; i < 3; i++){
        temp[input[i][i]]++;
    }

    ans(temp);

    for(int i = 0; i < 10; i++){
        temp[i] = 0;
    }

    for(int i = 0; i < 3; i++){
        temp[input[i][2-i]]++;
    }

    ans(temp);

    int result = 0;

    for(int i = 1; i < 10; i++){
        for(int k = 1; k < 10; k++){
            result += check[i][k];
        }
    }

    cout << result / 2;



    return 0;
}