#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct Info{
    string name;
    int kor;
    int eng;
    int math;
};

int cmp(Info &a, Info &b){
    return a.kor + a.eng + a.math < b.kor + b.eng + b.math;
}

int main() {
    
    int n;

    cin >> n;

    Info info[11];

    for(int i = 0; i < n; i++){
        cin >> info[i].name >> info[i].kor >> info[i].eng >> info[i].math;
    }

    sort(info, info+n, cmp);

    for(int i = 0; i < n; i++){
        cout << info[i].name << ' ' << info[i].kor << ' ' << info[i].eng << ' ' << info[i].math << '\n';
    }


    return 0;
}