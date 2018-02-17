#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

/**
 * [readFile description]
 * @return [description]
 */
void readFile(int* source){
    char c;
    ifstream file("Pb8.txt", ios::in);
    if(file){
        for( int i = 0; file.get(c) and c != EOF; i++){
            if(c != '\n'){
                source[i] = int(c)-48;
            }
            else{
                i--; // small hack for non digit character.
            }
        }
        file.close();
    }
    else{
        cout << "Cannot open file\n";
    }
}

/**
 * [main description]
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, char const *argv[]) {
    long max(0), current;
    int source[1000];
    readFile(source);
    // Search the optimum value
    for(int i = 0; i < 1000-13; i++){
        current = 1;
        for(int j = 0; j < 13; j++){
            current *= source[i+j];
        }
        if(current > max){
            max = current;
        }
    }
    cout << "The Answer is " << max << endl;

    return 0;
}
