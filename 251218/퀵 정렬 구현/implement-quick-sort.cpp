#include <iostream>
using namespace std;

int Partition(int input[], int low, int high){
    
    int i = low - 1;

    for(int j = low; j < high; j++){
        if(input[j] < input[high]){
            i++;
            int temp = input[j];
            input[j] = input[i];
            input[i] = temp;
        }
    }

    int temp = input[high];
    input[high] = input[i+1];
    input[i+1] = temp;

    return i + 1;
}

void QuickSort(int input[], int low, int high){
    if(low < high){
        int pivot = Partition(input, low, high);
        QuickSort(input, low, pivot-1);
        QuickSort(input, pivot+1, high);
    }
}

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    int input[N];

    for(int i = 0; i < N; i++){
        cin >> input[i];
    }

    QuickSort(input, 0, N-1);

    for(int i = 0; i < N; i++){
        cout << input[i] << ' ';
    }

    return 0;
}