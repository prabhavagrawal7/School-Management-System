#ifndef __BANK
#define __BANK

#include<bits/stdc++.h>
using namespace std; 


//#include"common.h"

class bank
{
private:

    static int transition_id;

    static int school_balance;

    vector < pair <int ,int>  > student_transaction;  //<student_id ,amount_paid>

    vector <pair <int,int> > staff_transaction; //<staff_id ,amount_paid>

public:

    // void set_school_balance(int value);
    int get_school_balance();

    void credit(int value);
    void debit(int value);

    void perform_student_transaction(int student_id, int amount);
    void pay_payment_staff(int staff_id, int amount);

    void generate_reciept_student(int,int ,int);

    void generate_reciept_staff(int,int ,int);  
  

    // void use_calculator();

};




#endif

