#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);

    for (int i = 0; i < n; i++) cin >> vec[i];

    ll right = vec[n - 1]; // 一番右
    ll left = vec[0]; // 一番左
    int roffset = 1;
    int loffset = 1;
    while(roffset + loffset < n){
        if(right > left){
            left += vec[loffset];
            loffset++;
        }else{
            right += vec[n - 1 - roffset];
            roffset++;
        }
    }

    cout << abs(right - left) << endl;

    return 0;
}
