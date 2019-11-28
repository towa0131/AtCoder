#include <iostream>
#include <vector>

using namespace std;

int main(){
    int x, y, ans;
    cin >> x >> y;

    vector<int> win = {300000, 200000, 100000};
    ans = 0;

    if(x < 4) ans += win[x - 1];
    if(y < 4) ans += win[y - 1];

    if(x == 1 && y == 1) ans += 400000;

    cout << ans << endl;

    return 0;
}
