#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int product = a * b;

    cout << ((product % 2) == 0 ? "Even" : "Odd") << endl;

    return 0;
}
