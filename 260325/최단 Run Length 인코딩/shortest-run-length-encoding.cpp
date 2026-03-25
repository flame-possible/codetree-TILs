#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

string input;
vector<pair<int, int>> list;

bool compare(pair<int, int> &a, pair<int, int> &b){
    return a.second < b.second;
}

void shift(){
    char temp = input[input.length() - 1];

    for(int i = input.length()-1; i > 0; i--){
        input[i] = input[i-1];
    }

    input[0] = temp;
}

int count(){
    char cur = input[0];
    string result = "";
    int cnt = 1;

    for(int i = 1; i < 10; i++){
        if(cur == input[i]){
            cnt++;
        }
        else{
            result += cur;
            result += '0' + cnt;

            cur = input[i];
            cnt = 1;
        }
    }


    result += cur;

    if(cnt == 10){
        result += "10";
    }
    else{
        result += '0' + cnt;
    }
    

    // cout << result << '\n';

    return result.length();
}

void answer(){

    for(int i = 0; i < 10; i++){
        list.push_back({i, count()});

        // cout << list[i].first << ' ' << list[i].second << '\n';
        shift();
    }

    sort(list.begin(), list.end(), compare);

}

int main() {
    // Please write your code here.


    cin >> input;

    answer();

    cout << list[0].second;

    return 0;
}