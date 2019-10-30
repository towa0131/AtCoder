#include <iostream>

using namespace std;

typedef long long ll;

int main(){
    ll n, d;

    cin >> n >> d;

    ll i = 0;
    ll total = 0;
    bool flag = true;
    while(flag){
        total += d * 2 + 1; // 5 10
        i++;
        if (total >= n){
            flag = false;
        }
    }

    cout << i << endl;

    return 0;
}
