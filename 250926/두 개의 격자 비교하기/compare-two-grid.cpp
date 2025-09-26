#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n, m;

    cin >> n >> m;

    int input1[n][m] = {0,};
    int input2[n][m] = {0,};

    for(int i = 0; i < n; i++){
        for(int k = 0; k < m; k++){
            cin >> input1[i][k];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int k = 0; k < m; k++){
            cin >> input2[i][k];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int k = 0; k < m; k++){
            if(input1[i][k] == input2[i][k]){
                cout << "0 ";
            }
            else{
                cout << "1 ";
            }
        }
        cout << '\n';
    }

    return 0;
}