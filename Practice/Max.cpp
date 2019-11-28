#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> dp(n);
    dp[0] = 0;

    for (int j = 0; j < n; j++){
        dp[j + 1] = max(dp[j], dp[j] + a[j]);
    }

    cout << dp[n] << endl;
    
    return 0;
}
