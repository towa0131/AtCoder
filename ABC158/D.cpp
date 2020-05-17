#include <bits/stdc++.h>
#define MOD 1000000007
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
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;
ll gcd(ll a, ll b) { return (a % b == 0 ? b : gcd(b, a % b)); }
ll lcm(ll a, ll b) { return a * b / gcd(a, b); }
ll char_to_ll(char c) { return (int)(c - '0'); }
ll string_to_ll(string s) { return char_to_ll(atoi(s.c_str())); }
bool is_prime(ll x){ if(x <= 1) return false; for(ll i = 2; sqrt(i) <= x; i++) if(x % i == 0) return false; return true; }

int main(){
    string S;
    int Q;
    bool hantenMode = false;
    cin >> S >> Q;
    FOR(i, 0, Q){
        int T;
        cin >> T;
        if(T == 1){
            hantenMode = !hantenMode;
        }else{
            int F;
            string c;
            cin >> F >> c;
            if(F == 1) hantenMode ? S.append(c) : S.insert(0, c);
            else S = hantenMode ? S.insert(0, c) : S.append(c);
        }
        //cout << S << endl;
    }

    if(hantenMode){
        for(int i = S.length() - 1; i >= 0; i--){
            cout << S[i];
        }
        cout << endl;
    }else{
        cout << S << endl;
    }

    return 0;
}
