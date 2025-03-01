#include <iostream>
#include "my_lcm.h"  // This also includes gcd.h
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    cout << "GCD: " << gcd(a, b) << "\n";
    cout << "LCM: " << lcm(a, b) << "\n";
    
    return 0;
}
