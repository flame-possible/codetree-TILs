#include <iostream>
using namespace std;

int N;

void Heapify(int input[], int N, int cnt){
    int largest = cnt;
    int l = cnt * 2;
    int r = (cnt * 2) + 1;

    if(l <= N && input[l] > input[largest]){
        largest = l;
    }

    if(r <= N && input[r] > input[largest]){
        largest = r;
    }

    if(largest != cnt){
        int temp = input[largest];
        input[largest] = input[cnt];
        input[cnt] = temp;

        Heapify(input, N, largest);
    }

}

void HeapSort(int input[], int N){
    for(int i = N / 2; i >= 1; i--){
        Heapify(input, N, i);
    }

    for(int i = N; i > 1; i--){
        int temp = input[i];
        input[i] = input[1];
        input[1] = temp;

        Heapify(input, i-1, 1);
    }
}

int main() {
    // Please write your code here.

    cin >> N;

    int input[N+1] = {0,};

    for(int i = 1; i <= N; i++){
        cin >> input[i];
    }

    HeapSort(input, N);

    for(int i = 1; i <= N; i++){
        cout << input[i] << ' ';
    }

    return 0;
}