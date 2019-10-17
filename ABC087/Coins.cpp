#include <iostream>

using namespace std;

int main(){
    int y_500, y_100, y_50, total;
    cin >> y_500 >> y_100 >> y_50 >> total;

    int method = 0;

    for (int i = 0; i <= y_50; i++){
        for (int j = 0; j <= y_100; j++){
            for (int k = 0; k <= y_500; k++){
                int sum = 500 * k + 100 * j + 50 * i;
                if(sum == total){
                    method++;
                }
            }
        }
    }

    cout << method << endl;

    return 0;
}
