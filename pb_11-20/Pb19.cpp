#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

enum month {
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};


struct monthYear{
    int year;
    month mois;
};

monthYear nextMonth(monthYear current){
    switch (current.mois){
        case January: return {current.year, February}; break;
        case February: return {current.year, March};
        case March: return {current.year, April};
        case April: return {current.year, May};
        case May: return {current.year, June};
        case June: return {current.year, July};
        case July: return {current.year, August};
        case August: return {current.year, September};
        case September: return {current.year, October};
        case October: return {current.year, November};
        case November: return {current.year, December};
        case December: return {current.year+1, January};
    }
}

bool isLeapYear(int year){
    if( year % 4 != 0 ){
        return false;
    }
    else if (year % 100 == 0){
        return year % 400 == 0;
    }
    else{
        return true;
    }
}

void printMonth(monthYear current){
    switch(current.mois){
        case January: cout << "January"; break;
        case February: cout << "February"; break;
        case March: cout << "March"; break;
        case April: cout << "April"; break;
        case May: cout << "May"; break;
        case June: cout << "June"; break;
        case July: cout << "July"; break;
        case August: cout << "August"; break;
        case September: cout << "September"; break;
        case October: cout << "October"; break;
        case November: cout << "November"; break;
        case December: cout << "December"; break;
    }
    cout << " " << current.year << endl;
}

int nbOfDay(monthYear current){
    int res = 0;
    switch (current.mois){
        case January: res = 31; break;
        case February:
            res = (isLeapYear(current.year)) ? 29 : 28;
            break;
        case March: res = 31; break;
        case April: res = 30; break;
        case May: res = 31; break;
        case June: res = 30; break;
        case July: res = 31; break;
        case August: res = 31; break;
        case September: res = 30; break;
        case October: res = 31; break;
        case November: res = 30; break;
        case December: res = 31; break;
    }
    return res;
}


int main(int argc, char const *argv[]) {
    int day = 2;
    int res = 0;
    monthYear current = {1901, January};
    monthYear end = {2000, December};
    while(current.year != end.year or current.mois != end.mois){
        day = (day + nbOfDay(current)) % 7;
        current = nextMonth(current);
        if(day == 0){
            res ++;
        }
    }
    cout << "The answer is " << res  << endl;
    return 0;
}
