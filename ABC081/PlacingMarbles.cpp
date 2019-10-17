#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;

    cout << count(s.begin(), s.end(), '1') << endl;

    return 0;
}
