#include <iostream>
using namespace std;

int N;

void MergeSort(int input[], int low, int mid, int high){
    int i = low, j = mid + 1;

    int k = low;

    int arr[N+1];

    while(i <= mid && j <= high){
        if(input[i] <= input[j]){
            arr[k++] = input[i++];
        }
        else{
            arr[k++] = input[j++];
        }
    }

    while(i <= mid){
        arr[k++] = input[i++];
    }

    while(j <= high){
        arr[k++] = input[j++];
    }

    for(k = low; k <= high; k++){
        input[k] = arr[k];
        // cout << k << " : " << input[k] << ' ';
    }
    // cout << '\n';
}

void Merge(int input[], int low, int high){
    if(low < high){
        int mid = (low + high) / 2;

        Merge(input, low, mid);
        Merge(input, mid+1, high);
        MergeSort(input, low, mid, high);

    }
}

int main() {
    // Please write your code here.

    cin >> N;

    int input[N+1];

    for(int i = 1; i <= N; i++){
        cin >> input[i];
    }

    Merge(input, 1, N);

    for(int i = 1; i <= N; i++){
        cout << input[i] << ' ';
    }

    return 0;
}