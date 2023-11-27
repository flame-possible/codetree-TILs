#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct Info{
    string day;
    string week;
    string weather;
};

int cmp(Info &a, Info &b){

    if(a.weather == "Rain" || b.weather == "Rain"){
        if(a.weather == "Rain" && b.weather == "Rain"){
            return a.day < b.day;
        }
        
        if(a.weather == "Rain"){
            return 1;
        }

        return 0;
    }

    return a.day < b.day;
}

int main() {
    Info info[101];

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> info[i].day >> info[i].week >> info[i].weather;
    }

    sort(info, info+n, cmp);

    cout << info[0].day << ' ' << info[0].week << ' ' << info[0].weather;


    return 0;
}