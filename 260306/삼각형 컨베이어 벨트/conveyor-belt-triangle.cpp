#include <iostream>
using namespace std;

int T, N;
int u[200];
int v1[200];
int v2[200];

void answer(){
    int temp1 = u[N-1];
    int temp2 = v1[N-1];
    int temp3 = v2[N-1];

    for(int i = N-1; i > 0; i--){
        u[i] = u[i-1];
    }

    u[0] = temp3;

    
    for(int i = N-1; i > 0; i--){
        v1[i] = v1[i-1];
    }

    v1[0] = temp1;

    
    for(int i = N-1; i > 0; i--){
        v2[i] = v2[i-1];
    }

    v2[0] = temp2;
}

int main() {
    // Please write your code here.

    cin >> N >> T;

    for(int i = 0; i < N; i++){
        cin >> u[i];
    }
    
    for(int i = 0; i < N; i++){
        cin >> v1[i];
    }
    
    for(int i = 0; i < N; i++){
        cin >> v2[i];
    }

    for(int i = 0; i < T; i++){
        answer();
    }

    for(int i = 0; i < N; i++){
        cout << u[i] << ' ';
    }

    cout << '\n';

    for(int i = 0; i < N; i++){
        cout << v1[i] << ' ';
    }

    cout << '\n';

    for(int i = 0; i < N; i++){
        cout << v2[i] << ' ';
    }

    return 0;
}