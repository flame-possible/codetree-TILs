#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    string a, b;

    cin >> a >> b;

    int cnt = 0;
    int result = 0;


    while(1){
        if(a.find(b, cnt) != string::npos){
            cnt = a.find(b, cnt) + 1;
            result++;
        }
        else{
            break;
        }
    }

    cout << result;

    return 0;
}

// #include <iostream>
// #include <string>

// using namespace std;

// string input_str;
// string target_str;

// int main() {
//     cin >> input_str;
//     cin >> target_str;

//     // Please write your code here.

//     if(input_str.find(target_str) != string::npos){
//         cout << input_str.find(target_str);
//     }
//     else{
//         cout << "-1";
//     }

//     return 0;
// }
