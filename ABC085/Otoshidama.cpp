#include <iostream>

using namespace std;

int main()
{
    int n, y;
    cin >> n >> y;

    for (int x10 = 0; x10 <= n; x10++){
        for (int x5 = 0; x5 <= n; x5++){
            // n = x10 + x5 + x1
            int x1 = n - x10 - x5;
            if (x1 >= 0 && x1 + x5 + x10 == n){
                if (x10 * 10000 + x5 * 5000 + x1 * 1000 == y){
                    cout << x10 << " " << x5 << " " << x1 << endl;
                    return 0;
                }
            }
        }
    }

    cout << "-1 "
         << "-1 "
         << "-1" << endl;

    return 0;
}
