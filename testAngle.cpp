
#include <iostream>
#include <iomanip>
#include <cmath>
#include "Angle.h"

using namespace std;

int main() {
    double lat, lon;
    Angle latA, lonA;
    cout << "\n\tEnter GPS-style coordinates:"
         << "\n\t\tLatitude: (+/- 0-90.00): ";
    cin >> lat;
    cout << "\t\tLongitude: (+/- 0-180.00): ";
    cin >> lon;
    
    latA = convertGPS(lat, 0);
    lonA = convertGPS(lon, 1);

    cout << "\tDMS: ("; 
    latA.print(); 
    cout << ", ";
    lonA.print();
    cout << ")\n";
    
    // using GPS to DMS constructor
    cout << "\n\tEnter GPS-style coordinates:"
         << "\n\t\tLatitude: (+/- 0-90.00): ";
    cin >> lat;
   
    Angle latC(lat, 0);
    
    cout << "\t\tLongitude: (+/- 0-180.00): ";
    cin >> lon;
    
    Angle lonC(lon, 1);
    
    cout << "\tDMS: ("; 
    latC.print(); 
    cout << ", ";
    lonC.print();
    cout << ")\n";
    
    return 0;
}
