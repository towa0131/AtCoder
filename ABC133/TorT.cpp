#include <iostream>

using namespace std;

typedef long long ll;

int main(){
    ll n, a, b;

    cin >> n >> a >> b;

    if(n * a < b){
        cout << n * a << endl;
    }else{
        cout << b << endl;
    }

    return 0;
}
