#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

/**
 * [readFile description]
 * @return [description]
 */
void readFile(int source[][15]){
    char c;
    int dizaine;
    ifstream file("Pb18.txt", ios::in);
    if(file){
        for(int i = 0; i < 15; i++){
            for(int j = 0; j <= i; j++){
                // cout << " i, j = " << i <<", " << j;
                file.get(c);
                dizaine = int(c)-48;
                file.get(c);
                source[i][j] = dizaine*10 + int(c) - 48;
                // cout << " -> " << dizaine*10 + int(c) - 48 << endl;
                file.get(c);
                if(c != '\n' and c != ' '){
                    cout << "/!\\ -> " << c;
                }
            }
        }
        // for(int i = 0; i < 15; i++){
        //     for(int j = 0; j <= i; j++){
        //         cout << source[i][j] << " ";
        //     }
        //     cout << endl;
        // }
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
    int source[15][15];
    readFile(source);
    // Search the optimum value
    for(int i = 13; i >= 0; i--){
        for(int j = 0; j <= i; j++){
            if(source[i+1][j] > source[i+1][j+1]){
                source[i][j] += source[i+1][j];
            }
            else{
                source[i][j] += source[i+1][j+1];
            }
        }
    }
    cout << "The Answer is " << source[0][0] << endl;

    return 0;
}
