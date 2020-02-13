#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll N;
    string S, T, ans;

    cin >> N;
    cin >> S >> T;

    ans = "";

    for (ll i = 0; i < N; i++){
        ans = ans + S[i] + T[i];
    }

    cout << ans << endl;

    return 0;
}
