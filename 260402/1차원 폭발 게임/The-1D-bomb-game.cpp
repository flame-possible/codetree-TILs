#include <iostream>
#include <vector>
using namespace std;

int N, M;
int input;
vector<int> arr;

void Print(vector<int> input){
    cout << input.size() << '\n';

    for(int i = 0; i < input.size(); i++){
        cout << input[i] << '\n';
    }
    cout << '\n';
}

int answer(){
    vector<int> temp;

    int cnt = 1;

    int result = 0;

    for(int i = 1; i < arr.size(); i++){
        if(arr[i] == arr[i-cnt]){
            cnt++;
        }
        else{
            if(cnt < M){
                for(int k = i - cnt; k < i; k++){
                    temp.push_back(arr[k]);
                }
                // Print(temp);
            }
            else{
                result = 1;
            }
            
            cnt = 1;
        }
    }

    if(cnt < M){
        for(int k = arr.size() - cnt; k < arr.size(); k++){
            temp.push_back(arr[k]);
        }
    }
    else{
        result = 1;
    }
    // Print(temp);
    // cout << result << '\n';


    arr.clear();

    for(int i = 0; i < temp.size(); i++){
        arr.push_back(temp[i]);
    }

    return result;
}

int main() {
    // Please write your code here.

    cin >> N >> M;

    for(int i = 0; i < N; i++){
        cin >> input;

        arr.push_back(input);
    }

    while(answer() && arr.size() > 0){

    }

    Print(arr);


    return 0;
}