#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef long long ll;

int main(){
    ll n, d;
    vector<vector<ll>> vec;

    cin >> n >> d;

    for (ll i = 0; i < n; i++){
        vector<ll> tmp(d);
        for (ll j = 0; j < d; j++)
        {
            cin >> tmp[j];
        }
        vec.push_back(tmp);
    }

    int total = 0;
    for (ll a = 0; a < n; a++)
    {
        for (ll b = a + 1; b < n; b++){
            float sum = 0;
            for (ll c = 0; c < d; c++){
                sum += pow(abs(vec.at(a)[c] - vec.at(b)[c]), 2.0);
            }
            float dist = sqrt(sum);
            if (dist == floor(dist))
                total++;
        }
    }

    cout << total << endl;

    return 0;
}
