#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> h(n);

    for (int i = 0; i < n; i++)
        cin >> h[i];

    int ans = 0;
    int max = 0;
    for (int j = 0; j < n; j++)
    {
        if (j == 0)
        {
            ans++;
            max = h[j];
        }
        else if (h[j] >= h[j - 1] && h[j] >= max)
        {
            ans++;
            max = h[j];
        }
    }

    cout << ans << endl;

    return 0;
}
