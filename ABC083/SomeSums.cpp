#include <iostream>
#include <string>

using namespace std;

int ctoi(char);

int main(){
    int n, a, b, total;
    cin >> n >> a >> b;
    total = 0;

    for (int i = 0; i <= n; i++){
        string str = to_string(i);
        int sum = 0;
        for(const char c : str){
            sum += ctoi(c);
        }
        if(sum >= a && sum <= b){
            total += i;
        }
    }

    cout << total << endl;
}

int ctoi(char c){
    if (c >= '0' && c <= '9')
    {
        return c - '0';
    }
    return -1;
}
