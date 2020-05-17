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
ll gcd(ll a, ll b) { return (a % b == 0 ? b : gcd(b, a % b)); }
ll lcm(ll a, ll b) { return a * b / gcd(a, b); }
ll char_to_ll(char c) { return (int)(c - '0'); }
ll string_to_ll(string s) { return char_to_ll(atoi(s.c_str())); }
bool is_prime(ll x){ if(x <= 1) return false; for(ll i = 2; sqrt(i) <= x; i++) if(x % i == 0) return false; return true; }

int main(){
    ll A, B, M;
    cin >> A >> B >> M;
    VL a(A), b(B);
    vector<tuple<ll, ll, ll>> ticket(M);
    rep(i, 0, A) cin >> a[i];
    rep(i, 0, B) cin >> b[i];
    rep(i, 0, M){
        ll x, y, c;
        cin >> x >> y >> c;
        ticket[i] = make_tuple(x - 1, y - 1, c);
    }

    ll mn = INT32_MAX;

    for(tuple<ll, ll, ll> t : ticket){
        mn = min(mn, a[get<0>(t)] + b[get<1>(t)] - get<2>(t));
    }

    sort(ALL(a));
    sort(ALL(b));

    mn = min(mn, a[0] + b[0]);

    cout << mn << endl;

    return 0;
}
