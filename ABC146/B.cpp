#include <iostream>

using namespace std;

int main(){
    string s;
    int n;
    cin >> n >> s;

    char str[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    string ans = "";
    for(char c : s){
        for (int i = 0; i < 27; i++){
            char ch = str[i];
            if(c == ch){
                ans += str[(i + n) % 26];
            }
        }
    }

    cout << ans << endl;

    return 0;
}
