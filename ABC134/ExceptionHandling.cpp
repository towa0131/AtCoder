#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

ll getMax(ll num, vector<ll> sorted){
    ll size = sorted.size();
    ll left = 0;
    ll right = size - 1;
    ll max = sorted.at(size - 1);
    ll mid, ans;

    while (right >= left){
        mid = left + (right - left) / 2;
        if (sorted.at(mid) == num){
            break;
        }else if (sorted.at(mid) > num){
            right = mid - 1;
        }else if (sorted.at(mid) < num){
            left = mid + 1;
        }
    }

    if(mid == size - 1){
        ans = sorted.at(mid - 1);
    }else if(mid < size){
        ans = max;
    }

    return ans;
}

int main(){
    ll n;

    cin >> n;

    vector<ll> a(n), ans(n);

    for (ll i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<ll> b(n);
    copy(a.begin(), a.end(), b.begin());
    sort(b.begin(), b.end());

    for (ll x = 0; x < n; x++){
        ans[x] = getMax(a.at(x), b);
    }

    for(ll answer : ans){
        cout << answer << endl;
    }
    return 0;
}
