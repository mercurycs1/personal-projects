#include <iostream>
#include <cmath>

using namespace std;
//ask for radius, print area.
//pi * r * r
int main(){
    cout << "Enter Radius:";
    double Radius;
    cin >> Radius;
    const double pi = 3.14;
    double Area = pi * pow(Radius, 2);
    cout << Area;

    return 0;
}
