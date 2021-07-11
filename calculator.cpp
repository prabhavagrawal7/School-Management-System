#include<bits/stdc++.h>
using namespace std;

#include "calculator.h"

// #include"common.h"

int calculator:: add(int x,int y){
    int ans=x+y;
    return ans;
}

int calculator:: sub(int x,int y){
    int ans=x-y;
    return ans;
}

int calculator:: mul(int x,int y){
    int ans=x*y;
    return ans;
}

int calculator:: div(int x,int y){
    int ans=x/y;
    return ans; 
}

int calculator:: power(int x,int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*x;
    }
    return ans;
}

int calculator:: check_prime(int num){
    for (int i=2;i<num;i++){
        if (num%i==0) {
            return 0;
        }
    }
    return 1;

}

int calculator:: gcd(int x,int y){
    if (x>y) {
        swap(x,y);
    }

    int ans=1;
    for(int i=1;i<=x;i++){
        if (x%i==0 && x%i==0) {
            ans=i;
        }
    }
    return ans;

}

int calculator:: lcm(int x,int y){
    int res=gcd(x,y);
    int ans=(x*y)/res;

    return ans;

}
