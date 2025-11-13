#include <iostream>
using namespace std;

int input[41];

int main() {
    // Please write your code here.

    for(int i = 0; i < 15; i++){
        int a;

        cin >> a;

        input[a]++;
    }

    for(int a = 1; a <= 40; a++){
        for(int b = 1; b <= 40; b++){
            for(int c = 1; c <= 40; c++){
                for(int d = 1; d <= 40; d++){
                    int temp[161] = {0,};

                    temp[a]++;
                    temp[b]++;
                    temp[c]++;
                    temp[d]++;

                    temp[a+b]++;
                    temp[b+c]++;
                    temp[c+d]++;
                    temp[d+a]++;
                    temp[a+c]++;
                    temp[b+d]++;

                    temp[a+b+c]++;
                    temp[a+b+d]++;
                    temp[a+c+d]++;
                    temp[b+c+d]++;

                    temp[a+b+c+d]++;

                    int result = 1;

                    for(int i = 1; i < 41; i++){
                        if(input[i] != temp[i]){
                            result = 0;
                            break;
                        }
                    }

                    if(result){
                        cout << a << ' ' << b << ' ' << c << ' ' << d;
                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}