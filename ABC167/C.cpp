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
    ll N, M, X, ans = INT_MAX;
    cin >> N >> M >> X;
    VL C(N);
    VVL A(N, VL(M));
    rep(i, 0, N){
        cin >> C[i];
        rep(j, 0, M) cin >> A[i][j];
    }

    rep(j, 0, M){
        ll u = 0;
        rep(i, 0, N){
            u += A[i][j];
        }
        if(u < X){
            cout << -1 << endl;
            return 0;
        }
    }

    for(ll bit = 0; bit < (1 << N); ++bit){
        vector<ll> S;
        for(ll i = 0; i < N; ++i){
            if(bit & (1 << i)){
                S.pb(i);
            }
        }
        ll flag = true;
        ll coin = 0;
        for(ll i : S){
           coin += C[i];
        }
        rep(j, 0, M){
            ll u = 0;
            for(ll i : S){
                u += A[i][j];
            }
            if(u < X) flag = false;
        }
        if(flag) ans = min(ans, coin);
    }

    cout << ans << endl;


    return 0;
}
