#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

/*
one         : 3
two         : 3
three       : 5
four        : 4
five        : 4
six         : 3
seven       : 5
eight       : 5
nine        : 4
ten         : 3
eleven      : 6
twelve      : 6
thirteen    : 8
fourteen    : 8
fifteen     : 7
sixteen     : 7
seventeen   : 9
eighteen    : 8
nineteen    : 8
twenty      : 6
thirty      : 6
forty       : 5
fifty       : 5
sixty       : 5
seventy     : 7
eighty      : 6
ninety      : 6
hundred     : 7
thousand    : 8
 */
int length(int n){
    if(n == 1000){
        return 11; // one thousand
    }
    else{
        int n1 = n % 10;
        int n10 = (n /10) % 10;
        int n100 = n / 100;
        int l1, l10, l100;
        switch (n100){
            case 1: l100 = 7+3; break;
            case 2: l100 = 7+3; break;
            case 3: l100 = 7+5; break;
            case 4: l100 = 7+4; break;
            case 5: l100 = 7+4; break;
            case 6: l100 = 7+3; break;
            case 7: l100 = 7+5; break;
            case 8: l100 = 7+5; break;
            case 9: l100 = 7+4; break;
            case 0: l100 = 0; break;
        }
        // handling "and"
        if(l100 != 0 and n1 + n10 != 0){
            l100 += 3;
        }
        switch (n1){
            case 1: l1 = 3; break;
            case 2: l1 = 3; break;
            case 3: l1 = 5; break;
            case 4: l1 = 4; break;
            case 5: l1 = 4; break;
            case 6: l1 = 3; break;
            case 7: l1 = 5; break;
            case 8: l1 = 5; break;
            case 9: l1 = 4; break;
            case 0: l1 = 0; break;
        }
        // cout << "l1 = "<< l1;
        switch (n10){
            case 1:
                // cout << "Truc";
                l1 = 0;
                switch (n1){
                    case 0: l10 = 3; break;
                    case 1: l10 = 6; break;
                    case 2: l10 = 6; break;
                    case 3: l10 = 8; break;
                    case 4: l10 = 8; break;
                    case 5: l10 = 7; break;
                    case 6: l10 = 7; break;
                    case 7: l10 = 9; break;
                    case 8: l10 = 8; break;
                    case 9: l10 = 8; break;
                }
                 break;

            case 2: l10 = 6; break;
            case 3: l10 = 6; break;
            case 4: l10 = 5; break;
            case 5: l10 = 5; break;
            case 6: l10 = 5; break;
            case 7: l10 = 7; break;
            case 8: l10 = 6; break;
            case 9: l10 = 6; break;
            case 0: l10 = 0; break;
        }
        return l1 + l10 + l100;
    }
}

int main(int argc, char const *argv[]) {
    long res(0);
    for(int i = 1; i <= 1000; i++){
        res += length(i);
    }
    cout << "The answer is " << res << endl;
    return 0;
}
