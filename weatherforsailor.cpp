#include <iostream>
using namespace std;

int main () {

    double wind_speed;
    cout << "Enter Wind speed: ";
    cin >> wind_speed;

    double wave_length;
    cout << "Enter Wave length: ";
    cin >> wave_length;
    
    if(wind_speed >= 34) {
        cout << "STATUS: GALE WARNING! EXTREME HAZARD, DO NOT SAIL!";
    }
    else if (wind_speed >= 20 && wave_length >= 7.0) {
        cout << "STATUS: SMALL CRAFT ADVISORY! HAZARDOUS FOR SMALL BOATS";
    }
    else {
        cout << "STATUS: SAFE. condition are favorable for sailing";
    }

    return 0;
}