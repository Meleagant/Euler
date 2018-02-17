#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int chainLength(long n){
    int res(0);
    // cout << n;
    while(n != 1){
        if(n%2 != 0){
            n = 3*n+1;
        }
        else{
            n = n/2;
        }
        res++;
    }
    return res;
}

int main(int argc, char const *argv[]) {
    int res(0), max(0);
    for(long i = 2; i < 1000000; i++){
        int len = chainLength(i);
        if(len > max){
            max = len;
            res = i;
        }
    }

    cout << "The answer is " << res << endl;
    return 0;
}
