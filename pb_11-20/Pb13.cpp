#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

/**
 * [readFile description]
 * @return [description]
 */
void readFile(int source[][50]){
    char c;
    ifstream file("Pb13.txt", ios::in);
    if(file){
        for(int i = 0; i < 100; i++){
            for(int j = 0; j < 50; j++){
                file.get(c);
                source[i][j] = int(c) - 48;
            }
            file.get(c);
        }
    }
    else{
        cout << "Cannot open file!\n";
    }
}

/**
 * [main description]
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, char const *argv[]) {
    int sum[55];
    for(int i = 0; i < 55; i++){
        sum[i] = 0;
    }
    long begin(0), res(0);
    int currentSum(0);
    int source[100][50];
    readFile(source);

    for(int i = 49; i >= 0; i--){
        currentSum = sum[i+5];
        for(int j = 0; j < 100; j++){
            currentSum += source[j][i];
        }
        sum[i+5] = currentSum % 10;
        sum[i+4] = currentSum/10;
    }


    while(sum[begin] == 0){
        begin++;
    }
    for(int i = 0; i < 9; i++){
        res = res*10 + sum[begin+i];
    }
    cout << "The Answer is " << res << endl;

    return 0;
}
