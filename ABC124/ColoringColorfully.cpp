#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    string s;

    cin >> s;
    n = s.length();
    //vector<char> vec(n);

    /*for(int i = 0; i < n; i++){
        vec[i] = s[i];
    }*/

    int ans = 0;
    for(int i = 1; i < n; i++){
        char c = s[i];
        if(s[i] == s[i - 1]){
            if(s[i] == '0') s[i] = '1';
            else if(s[i] == '1') s[i] = '0';
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
