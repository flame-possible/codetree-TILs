#include <iostream>
using namespace std;

int T, N;
int u[200];
int v[200];

void answer(){
    int temp1 = u[N-1];
    int temp2 = v[N-1];

    for(int i = N-1; i > 0; i--){
        u[i] = u[i-1];
    }

    u[0] = temp2;

    
    for(int i = N-1; i > 0; i--){
        v[i] = v[i-1];
    }

    v[0] = temp1;
}

int main() {
    // Please write your code here.

    cin >> N >> T;

    for(int i = 0; i < N; i++){
        cin >> u[i];
    }
    
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }

    for(int i = 0; i < T; i++){
        answer();
    }

    for(int i = 0; i < N; i++){
        cout << u[i] << ' ';
    }

    cout << '\n';

    for(int i = 0; i < N; i++){
        cout << v[i] << ' ';
    }

    return 0;
}