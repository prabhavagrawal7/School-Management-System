
#include<bits/stdc++.h>
using namespace std;

#include "modified_calculator.h"

//#include"common.h"
 
int modified_calculator:: fac(int num){
    int ans=1;
    for (int i=1;i<=num;i++){
        ans=ans*i;
    }
    return ans; 
}

int modified_calculator::power(int x,int n){
    int res = 1;
    while (n > 0) {
        if (n & 1)
            res = res * x;
        x = x * x;
        n >>= 1;
    }
    return res;
}

int modified_calculator::check_prime(int num){
    for(int i=2;i<=sqrtl(num);i++){
        if (num%i==0){
            return 0;
        }
    }
    return 1;
}


int modified_calculator::gcd(int x ,int y){
    
        if (y == 0)
            return x;
        return gcd(y, x % y);
    
}


int modified_calculator::lcm(int x,int y){
    int res=gcd(x,y);
    int ans=(x*y)/res;
    return ans;
}

