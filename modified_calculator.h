#ifndef __MODIFIED_CALCULATOR
#define __MODIFIED_CALCULATOR

#include<bits/stdc++.h>
using namespace std;

#include "calculator.h"

//#include"common.h"
 
class modified_calculator: public calculator{
    public:
        int power(int x,int n);
        int check_prime(int num);
        int gcd(int x,int y);
        int lcm(int x,int y);
        int fac(int num);

};


#endif

