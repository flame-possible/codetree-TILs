#include <iostream>
#include <algorithm>

struct Agent{

    char name;
    int score;

};

int comp(Agent &a, Agent &b){
    return a.score < b.score;
}

using namespace std;

int main() {
    
    Agent agent[5];

    for(int i = 0; i < 5; i++){
        cin >> agent[i].name >> agent[i].score;
    }

    sort(agent, agent+5, comp);

    cout << agent[0].name << ' ' << agent[0].score;

    return 0;
}