#include<bits/stdc++.h>
using namespace std;

#include "bank.h" 

// #include"common.h"

int bank :: transition_id=1000;


int bank ::school_balance=100000;

// void bank::set_school_balance(int value){
//     this->school_balance = value;
// }

int bank::get_school_balance(){
    return this->school_balance;
}

void bank:: perform_student_transaction(int student_id,int amount){
    pair <int ,int > temp={student_id,amount};
    student_transaction.push_back(temp);
    credit(amount);
    transition_id++;
    generate_reciept_student(transition_id,student_id,amount);
}

void bank:: pay_payment_staff(int staff_id,int amount){
    pair <int ,int > temp={staff_id,amount};
    staff_transaction.push_back(temp);
    debit(amount);
    transition_id++;
    generate_reciept_staff(transition_id,staff_id,amount);
}

void bank:: credit(int value){
    this->school_balance=this->school_balance+value;
}

void bank:: debit(int value){
    this->school_balance=this->school_balance-value;
}

void bank::generate_reciept_student(int transition_id,int id,int amount){
    
    cout<<" BANK XYZ "<<endl<<endl;
    cout<<"--------------------------"<<endl;
    cout<<" YOUR FEES HAS BEEN SUSSESSFULLY PAID "<<endl;
    cout<<" TRANSITION ID "<<transition_id<<endl;
    cout<<" STUDENT ID "<<id<<endl;
    cout<<" Amount "<<amount<<endl;
    

}


void bank::generate_reciept_staff(int transition_id,int id,int amount){
    
    cout<<" BANK XYZ "<<endl<<endl;
    cout<<"--------------------------"<<endl;
    cout<<" YOUR PAYMENT HAS BEEN SUSSESSFULLY MADE "<<endl;
    cout<<" TRANSITION ID "<<transition_id<<endl;
    cout<<" STAFF ID "<<id<<endl;
    cout<<" Amount "<<amount<<endl;
    

}
