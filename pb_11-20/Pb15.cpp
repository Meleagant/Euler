#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

long coeffBinomial(int n, int k){
    long res[n+1][n+1];
    for(int i = 0; i <= n; i++){
        res[i][0] = 1;
        res[i][i] = 1;
    }
    for(int i = 2; i <= n; i++){
        for(int j = 1; j < i; j++){
            res[i][j] = res[i-1][j] + res[i-1][j-1];
        }
    }
    return res[n][k];
}

int main(int argc, char const *argv[]) {
    cout << "The answer is " << coeffBinomial(40, 20) << endl;
    return 0;

}
