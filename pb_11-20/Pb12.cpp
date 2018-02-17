#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

long triangular(int n){
    return n*(n+1)/2;
}

int numberDivisor(int k){
    int res = 2;
    for(int i = 2; i <= sqrt(k); i++){
        if(k % i == 0){
            if(i*i == k){
                res += 1;
            }
            else{
                res += 2;
            }
        }
    }
    return res;
}

int main(int argc, char const *argv[]) {
    int n = 1;
    while(numberDivisor(triangular(n)) < 500){
        n++;
    }
    cout << "The answer is " << triangular(n) << endl;
    return 0;
}
