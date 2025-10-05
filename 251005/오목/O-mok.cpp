#include <iostream>
using namespace std;

int input[20][20];

int row(int y, int k){
    
    int stone_color = input[y][k];
    
    for(int i = 1; i < 5; i++){
        if(input[y][k + i] != stone_color){
            return 0;
        }
    }
    
    cout << input[y][k] << '\n';
    cout << y << ' ' << k + 2 << '\n';

    return 1;
}

int dia(int y, int k){
    
    int stone_color = input[y][k];

    int result = 1;
    
    for(int i = 1; i < 5; i++){
        if(input[y + i][k + i] != stone_color){
            result = 0;
            break;
        }
    }

    if(result == 1){
        
        cout << input[y][k] << '\n';
        cout << y + 2 << ' ' << k + 2 << '\n';

    }
    else{

        result = 1;
    
        for(int i = 1; i < 5; i++){
            if(((y + i) > 0 && (k - i) > 0) && input[y + i][k - i] != stone_color){
                result = 0;
                break;
            }
        }

        if(result == 1){
        
            cout << input[y][k] << '\n';
            cout << y + 2 << ' ' << k - 2 << '\n';

        }

    }
    

    return result;
}

int col(int y, int k){
    
    int stone_color = input[y][k];
    
    for(int i = 1; i < 5; i++){
        if(input[y + i][k] != stone_color){
            return 0;
        }
    }
    
    cout << input[y][k] << '\n';
    cout << y + 2 << ' ' << k << '\n';

    return 1;
}


int main() {
    // Please write your code here.

    for(int i = 1; i <= 19; i++){
        for(int k = 1; k <= 19; k++){
            cin >> input[i][k];
        }
    }

    
    for(int i = 1; i <= 19; i++){
        for(int k = 1; k <= 19; k++){
            if((input[i][k] == 1 || input[i][k] == 2) && (row(i, k) || dia(i, k) || col(i, k))){
                return 0;
            }
        }
    }

    cout << "0";



    return 0;
}