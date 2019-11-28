#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int sumAA = 0;
    int sumAB = 0;
    int sumBB = 0;

    sumAA += a;
    sumAA += a - 1;

    sumAB += a;
    sumAB += b;

    sumBB += b;
    sumBB += b - 1;

    int max = sumAA;
    if(sumAA < sumAB) max = sumAB;
    if(sumAA < sumBB) max = sumBB;

    cout << max << endl;
    
    return 0;
}
