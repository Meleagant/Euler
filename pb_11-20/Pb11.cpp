#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

/**
 * [readFile description]
 * @return [description]
 */
void readFile(int source[][20]){
    char c;
    int dizaine;
    ifstream file("Pb11.txt", ios::in);
    if(file){
        for(int i = 0; i < 20; i++){
            for(int j = 0; j < 20; j++){
                file.get(c);
                dizaine = int(c)-48;
                file.get(c);
                source[i][j] = dizaine*10 + int(c) - 48;
                file.get(c);
                if(c != '\n' and c != ' '){
                    cout << "/!\\ -> " << c;
                }
            }
        }

        file.close();
    }
    else{
        cout << "Cannot open file\n";
    }
    // for(int i = 0; i < 20; i++){
    //     for(int j = 0; j < 20; j++){
    //         cout << source[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}

/**
 * [main description]
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, char const *argv[]) {
    long max(0), current;
    int source[20][20];
    readFile(source);
    // Search the optimum value
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            // Vertical
            if(i < 17){
                current = 1;
                for(int k = 0; k < 4; k++){
                    current *= source[i+k][j];
                }
                if(current > max){
                    max = current;
                }
            }
            // Horizontal
            if(j < 17){
                current = 1;
                for(int k = 0; k < 4; k++){
                    current *= source[i][j+k];
                }
                if(current > max){
                    max = current;
                }
            }
            // Diagonally 1
            if(i < 17 and j < 17){
                current = 1;
                for(int k = 0; k < 4; k++){
                    current *= source[i+k][j+k];
                }
                if(current > max){
                    max = current;
                }
            }
            // Diagonally 2
            if(i < 17 and j >= 3){
                current = 1;
                for(int k = 0; k < 4; k++){
                    current *= source[i+k][j-k];
                }
                if(current > max){
                    max = current;
                }
            }
        }
    }
    cout << "The Answer is " << max << endl;

    return 0;
}
