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

ll move(ll N, ll A, ll B){
    ll count = 0;
    while(A != B){
        if((B - A) % 2 == 0){
            count += (B - A) / 2;
            break;
        }else{
            if(A - 1 < N - B){
                if(A > 1){
                    B -= A - 1;
                    count += A - 1;
                    A = 1;
                }else{
                    B--;
                    count++;
                }
            }else{
                if(B < N){
                    A += N - B;
                    count += N - B;
                    B = N;
                }else{
                    A++;
                    count++;
                }
            }
        }
        //cout << A << " " << B << endl;
    }

    return count;
}

int main(){
    ll N, A, B;
    cin >> N >> A >> B;

    ll ans = move(N, A, B);

    cout << ans << endl;

    return 0;
}
