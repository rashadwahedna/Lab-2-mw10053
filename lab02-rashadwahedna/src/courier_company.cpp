#include <iostream>

using namespace std;
int main(void){
    int rows=3;
    int cols=3;

    int north[9] = {500, 900, 1600,  300, 600, 1100,  200, 450, 800};
    int central[9] = {550, 950, 1700,  320, 620, 1150,  220, 470, 850};
    int south[9] = {600,1000, 1800,  350, 650, 1200,  250, 500, 900};


    char service;
    int cargo;
    
    cout << "Service: ";
    cin >> service;
    cout << "Cargo: ";
    cin >> cargo;

    int row;
    if (service == 'U'){
        row = 0;
    } else if (service == 'N'){
        row = 1;
    } else if (service == 'E'){
        row = 2;
    } else{
        cout << "Invalid service" << endl;
    }
    int col = cargo - 1;
    int id = row * cols + col;
    int x1 = north[id];
    int x2 = central[id];
    int x3 = south[id];
    double average = (x1 + x2 + x3) / 3.0;

    int max = x1;
    if (max < x2){
        max = x2;
    } if (x3 > max){
        max = x3;
    }
    int min = x1;
    if (min > x2){
        min = x2;
    } if (min > x3){
        min = x3;
    }

    string serviceName;
    string cargoName;

    if (service == 'U'){
        serviceName = "Urgent";
    } else if (service == 'N'){
        serviceName = "Normal";
    } else if (service == 'E'){
        serviceName = "Economy";
    }

    if (cargo == 1){
        cargoName = "Documents";
    } else if (cargo == 2){
        cargoName = "Parcel <5kg";
    } else if (cargo == 3){
        cargoName = "Parcel >=5kg";
    }
    
    cout << "Category: " << serviceName << " Service , " << cargoName << endl;
    cout << "Prices: " << x1 << ", " << x2 << ", " << x3 << endl;

    int intPart = (int)average;
    int decimalPart = (int)((average - intPart) * 100 + 0.5); // rounding

    cout << "Average Price: " << intPart << "." 
         << (decimalPart < 10 ? "0" : "") << decimalPart << " PKR" << endl;

    cout << "Maximum Price: " << max << " PKR" << endl;
    cout << "Minimum Price: " << min << " PKR" << endl;

    return 0;

}