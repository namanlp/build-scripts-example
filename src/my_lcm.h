#ifndef MY_LCM_H
#define MY_LCM_H

#include "my_gcd.h"

// Compute the LCM of two integers using the relation:
// lcm(a, b) = (a / gcd(a, b)) * b
// If either number is zero, the LCM is defined to be 0.
int lcm(int a, int b) {
    if (a == 0 || b == 0)
        return 0;
    return (a / gcd(a, b)) * b;
}

#endif
