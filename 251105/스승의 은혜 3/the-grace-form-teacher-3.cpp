#include <iostream>
#include <algorithm>
using namespace std;

struct Present{

    int p, s;
    int sum;

    bool operator<(const Present& Present1) const{
        return sum < Present1.sum;
    }

};

int main() {
    // Please write your code here.

    int N, B;
    Present presents[N];

    cin >> N >> B;

    for(int i = 0; i < N; i++){

        cin >> presents[i].p >> presents[i].s;

        presents[i].sum = presents[i].p + presents[i].s;

    }

    sort(presents, presents + N);

    int result = 0;

    for(int i = 0; i < N; i++){
        int temp_b = B;
        int temp = 0;

        for(int k = 0; k < N; k++){
            int cur = 0;

            if(i == k){
                cur = (presents[k].p / 2) + presents[k].s;
            }
            else{
                cur = presents[k].p + presents[k].s;
            }

            if(temp_b >= cur){
                temp_b -= cur;

                temp++;
            }

        }

        result = max(result, temp);
    }

    cout << result;

    return 0;
}