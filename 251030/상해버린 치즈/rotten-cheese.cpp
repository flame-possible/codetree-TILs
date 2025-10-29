#include <iostream>
#include <vector>
using namespace std;

struct Input{
    vector<pair<int, int>> info;
};

int m_info[51];
int p_info[51];

int main() {
    // Please write your code here.

    int N, M, D, S;

    cin >> N >> M >> D >> S;

    Input input[101];


    for(int i = 0; i < D; i++){
        int p, m, t;

        cin >> p >> m >> t;

        input[t].info.push_back({p, m});
    }

    int infectCheese = 0;

    for(int i = 0; i < S; i++){
        int m, t;

        cin >> m >> t;

        int temp_m[M+1] = {0,};

        for(int k = 1; k < t; k++){
            for(int p = 0; p < input[k].info.size(); p++){
                if(input[k].info[p].first == m){
                    temp_m[input[k].info[p].second] = 1;
                }
            }
        }

        for(int k = 1; k <= M; k++){
            m_info[k] += temp_m[k];

            infectCheese = max(infectCheese, m_info[k]);
        }

    }

    int result = 0;

    for(int i = 1; i <= M; i++){

        int temp_p[N+1] = {0,};

        if(m_info[i] == infectCheese){
            for(int k = 1; k <= 100; k++){
                for(int p = 0; p < input[k].info.size(); p++){
                    if(input[k].info[p].second == i){
                        temp_p[input[k].info[p].first] = 1;
                    }
                }
            }
            

            int temp_result = 0;

            for(int k = 1; k <= N; k++){
                temp_result += temp_p[k];
            }

            result = max(result, temp_result);
        }
    }

    cout << result;

    return 0;
}