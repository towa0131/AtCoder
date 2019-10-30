#include <iostream>

using namespace std;

typedef long long ll;

int main(){
    ll n;
    cin >> n;

    for (ll x = 0; x <= 9; x++){
        for (ll y = 0; y <= 9; y++){
            if(x * y == n){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;

    return 0;
}
