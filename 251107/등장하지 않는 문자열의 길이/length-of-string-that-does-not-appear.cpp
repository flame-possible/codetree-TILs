#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    string input;

    cin >> input;

    for(int i = 1; i <= N; i++){

        int temp = 0;

        for(int k = 0; k <= N - (i * 2); k++){
            string dns = input.substr(k, i);

            temp = 0;

            for(int p = k + i; p <= N - i; p++){
                string tar = input.substr(p, i);

                if(dns == tar){
                    temp = 1;

                    break;
                }
            }

            if(temp) break;
        }

        if(!temp){
            cout << i;
            break;
        }
    }

    return 0;
}