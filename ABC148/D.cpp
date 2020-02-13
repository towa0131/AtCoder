#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    ll latest = 1;
    ll broke = 0;
    bool match = false;
    for (ll a : A) {
        if(a == latest) latest++;
        else broke++;
        if(!match && a == 1) match = true;
    }

    if(match) cout << broke << endl;
    else cout << "-1" << endl;

    return 0;
}
