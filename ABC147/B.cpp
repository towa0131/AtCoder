#include <iostream>

using namespace std;

typedef long long ll;

int main(){
    string S;
    int ans = 0;
    cin >> S;

    int left = 0;
    int right = S.length() - 1;
    for (int i = 0; i < S.length() / 2; i++){
        if(S[left] != S[right]) ans++;
        left++;
        right--;
    }

    cout << ans << endl;

    return 0;
}
