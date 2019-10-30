#include <iostream>

using namespace std;

typedef long long ll;

int main(){
    ll a, b;
    cin >> a >> b;

    if(a <= 9 && b <= 9){
        cout << a * b << endl;
    }else{
        cout << "-1" << endl;
    }

    return 0;
}
