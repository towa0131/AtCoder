#include <bits/stdc++.h>
#define MOD 1e9 + 7
#define PI 3.141592653589793238
#define pb push_back
#define ALL(V) (V).begin(), (V).end()
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long long int lint;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef vector<int> VI;
ll gcd(ll a, ll b) { return (a % b == 0 ? b : gcd(b, a % b)); }
ll lcm(ll a, ll b) { return a * b / gcd(a, b); }
ll char_to_ll(char c) { return (int)(c - '0'); }
ll string_to_ll(string s) { return char_to_ll(atoi(s.c_str())); }
bool is_prime(ll x){ if(x <= 1) return false; for(ll i = 2; sqrt(i) <= x; i++) if(x % i == 0) return false; return true; }

int main(){
    ll N, ans = 0;
    string X;
    cin >> N;
    vector<string> s(N);
    VL t(N);
    for (int i = 0; i < N; i++) cin >> s[i] >> t[i];
    cin >> X;

    bool start = false;
    for (int i = 0; i < N; i++){
        if(start) ans += t[i];
        if(s[i] == X) start = true;
    }

    cout << ans << endl;

    return 0;
}
