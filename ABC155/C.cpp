#include <bits/stdc++.h>
#define MOD 1000000007
#define PI 3.141592653589793238
#define pb push_back
#define ALL(V) (V).begin(), (V).end()
#define rep(i, a, b) for(int i = (a); i < (b); ++i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long long int lint;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef vector<int> VI;
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;
inline ll gcd(ll a, ll b) { return (a % b == 0 ? b : gcd(b, a % b)); }
inline ll lcm(ll a, ll b) { return a * b / gcd(a, b); }
inline ll char_to_ll(char c) { return (int)(c - '0'); }
inline ll string_to_ll(string s) { return atoi(s.c_str()); }
inline bool is_prime(ll x){ if(x <= 1) return false; for(ll i = 2; sqrt(i) <= x; i++) if(x % i == 0) return false; return true; }

int main(){
    ll N;
    cin >> N;
    vector<string> S(N);
    rep(i, 0, N) cin >> S[i];
    map<string, ll> mp;
    rep(i, 0, N) mp[S[i]]++;
    ll mx = -1;
    for(pair<string, ll> P : mp){
        mx = max(mx, P.second);
    }
    vector<string> ans;
    for(pair<string, ll> P : mp){
        if(P.second == mx) ans.pb(P.first);
    }
    sort(ALL(ans));
    for(string s: ans){
        cout << s << endl;
    }

    return 0;
}
