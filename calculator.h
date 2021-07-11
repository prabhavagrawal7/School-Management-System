#ifndef __CALCULATOR
#define __CALCULATOR

#include<bits/stdc++.h>
using namespace std;

//#include"common.h" 

class calculator {
    public:
        int add(int x,int y);
        int sub(int x,int y);
        int mul(int x,int y);
        int div(int x,int y);

        virtual int power(int x,int n);
        virtual int check_prime(int num); // 1 if prime   0 if not 
        virtual int gcd(int x,int y);
        virtual int lcm(int x,int y);
        
        virtual int fac(int num)=0;
        // virtual int solving_expression(string)=0; // pure virtual function // making this abstract 

};


#endif