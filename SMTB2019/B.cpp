#include <iostream>
#include <cmath>

typedef long long ll;

using namespace std;

int main(){
    int n;
    cin >> n;

    for (int x = 1; x <= 50000; x++){
        if((int)floor(x * 1.08) == n){
            cout << x << endl;
            return 0;
        }
    }

    cout << ":(" << endl;

    return 0;
}
