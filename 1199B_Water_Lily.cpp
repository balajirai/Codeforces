#include <bits/stdc++.h>
#define ll long long
using namespace std;

// std::fixed, This manipulator ensures that floating-point numbers are printed in fixed-point notation rather than scientific notation
// std::setprecision, This manipulator sets the precision (i.e., the number of digits after the decimal point) for floating-point numbers.

int main(){
    double h, l;
    cin>> h >> l;

    // pythagoras theorem : (d+h)^2 = l^2 + d^2
    double depth = ((l*l - h*h)/(2*h));

    cout << fixed << setprecision(13) << depth <<endl;
    
    return 0;
}