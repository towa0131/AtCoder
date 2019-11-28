#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int digit(ll num){
    return to_string(num).length();
}

int main(){
    ll A, B, X, ans;
    cin >> A >> B >> X;

    ans = 0;

    ll left = 0, right = 1000000001;
    while(right - left > 1){
        ll N = (left + right) / 2;
        ll expression = A * N + B * digit(N);
        // cout << left << " " << right << " " << N << " " << endl;

        if (expression > X){
            right = N;
        }else if(expression < X){
            left = N;
        }else{
            cout << N << endl;
            return 0;
        }
    }
    ans = left;
    if(A + B > X) ans = 0;

    cout << ans << endl;

    return 0;
}
