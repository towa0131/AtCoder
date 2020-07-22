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

struct UnionFind{
    VL p;

    UnionFind(ll N) : p(N){
        rep(i, 0, N) p[i] = i;
    }

    int root(ll N){
        if(N == p[N]) return N;
        else return p[N] = root(p[N]);
    }

    bool unite(ll A, ll B){
        ll a = root(A);
        ll b = root(B);
        if(a == b) return false;
        p[a] = b;
        return true;
    }

    bool same(ll A, ll B){
        return root(A) == root(B);
    }
};

int main(){
    ll N, M, ans = 0;
    cin >> N >> M;
    UnionFind f(N + 1);
    rep(i, 0, M){
        ll a, b;
        cin >> a >> b;
        f.unite(a, b);
    }

    rep(i, 2, N + 1){
        if(!f.same(i, i - 1)){
            f.unite(i, i - 1);
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
