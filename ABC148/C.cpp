#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll A, B, ans;
    cin >> A >> B;

    ans = A * B;
    if(A < B){
        ll tmp = A;
        A = B;
        B = tmp;
    }

    ll R = A % B;
    while(R != 0){
      A = B;
      B = R;
      R = A % B;
    }

  cout << ans / B << endl;

  return 0;
}
