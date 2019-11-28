#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;

    cin >> n;
    vector<int> vec(n + 1);

    for (int i = 1; i <= n; ++i){
        int a;
        cin >> a;
        vec[a] = i;
    }

    for (int j = 1; j <= n; ++j){
        cout << vec[j] << endl;
    }

    return 0;
}
