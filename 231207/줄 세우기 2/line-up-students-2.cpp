#include <iostream>
#include <algorithm>

using namespace std;

struct Student{
    int h, w, n;
};

int cmp(Student &a, Student &b){

    if(a.h == b.h){
        return a.w > b.w;
    }

    return a.h < b.h;
}

int main() {
    
    Student student[1001];

    int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
        student[i].n = i;

        cin >> student[i].h >> student[i].w;
    }

    sort(student+1, student+1+n, cmp);

    for(int i = 1; i <= n; i++){
        cout << student[i].h << ' ' << student[i].w << ' ' << student[i].n << '\n';
    }

    return 0;
}