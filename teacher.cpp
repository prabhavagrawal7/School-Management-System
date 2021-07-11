#include<bits/stdc++.h>
using namespace std;

#include "teacher.h"

// #include"common.h"
 

void teacher:: display(){
    
    cout<<"Displaying teacher"<<endl;
    cout<<"--------------------------------"<<endl;

    cout<<"Name: "<<get_name()<<"                     Username: "<<get_username()<<endl;
    cout<<"Roll Number: "<<get_staff_id()<<endl;
    cout<<"Email ID: "<<get_email()<<endl;
    cout<<"Phone No: "<<get_phone_no()<<endl;
    cout<<"Date of Birth: "<<get_date_of_birth()<<endl;
    // cout<<"Standard: "<<get_standard()<<endl;
    cout<<"Salary: "<<get_salary()<<endl;
    cout<<"Payment done(1) or not(0) "<<get_payment_done()<<endl;



}



void teacher:: use_calculator(){
    
    calculator * ptr;
    modified_calculator obj;
    ptr=&obj;

    cout<<"Welcome "<<endl;
    cout<<"--------------------"<<endl;
    cout<<"Menu"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"Press 1 to add"<<endl;
    cout<<"Press 2 to subtract"<<endl;
    cout<<"Press 3 to multiply"<<endl;
    cout<<"Press 4 to divide"<<endl;
    cout<<"Press 5 to find power (x^n)"<<endl;
    cout<<"Press 6 to check if a number is prime or not "<<endl;
    cout<<"Press 7 to find gcd of two numbers"<<endl;
    cout<<"Press 8 to find lcm of two numbers"<<endl;
    // cout<<"Press 9 to solve expression"<<endl; 
    cout<<"Press 9 to find the factorial of a number"<<endl;
    cout<<"Press 10 to exit "<<endl; 

    int choice;
    cout<<"Enter your choice"<<endl;
    cin>>choice;

    if (choice==1) {
        int x,y;
        cout<<"Enter two numbers"<<endl;
        cin>>x>>y;
        int ans=ptr->add(x,y);
        cout<<ans<<endl;
    }
    else if (choice==2) {
        int x,y;
        cout<<"Enter two numbers"<<endl;
        cin>>x>>y;
        int ans=ptr->sub(x,y);
        cout<<ans<<endl;
    }
    else if (choice==3) {
        int x,y;
        cout<<"Enter two numbers"<<endl;
        cin>>x>>y;
        int ans=ptr->mul(x,y);
        cout<<ans<<endl;
    }
    else if (choice==4) {
        int x,y;
        cout<<"Enter two numbers"<<endl;
        cin>>x>>y;
        int ans=ptr->div(x,y);
        cout<<ans<<endl;
    }
    else if (choice==5) {
        int x,n;
        cout<<"Enter two numbers"<<endl;
        cin>>x>>n;
        int ans=ptr->power(x,n);
        cout<<ans<<endl;
    }
    else if (choice==6) {
        int x;
        cout<<"Enter a number"<<endl;
        cin>>x;
        int ans=ptr->check_prime(x);
        cout<<ans<<endl;
    }
    else if (choice==7){
        int x,y;
        cout<<"Enter two numbers"<<endl;
        cin>>x>>y;
        int ans=ptr->gcd(x,y);
        cout<<ans<<endl;
    }
    else if (choice==8){
        int x,y;
        cout<<"Enter two numbers"<<endl;
        cin>>x>>y;
        int ans=ptr->lcm(x,y);
        cout<<ans<<endl;
    }

    // this cannot be access using base pointer because it is not in derived
    // but actually it can be 
    // making a virtual function there
    else if (choice==9) {
        int num;
        cout<<"Enter the number ";
        cin>>num;
        int ans=ptr->fac(num);
        cout<<ans<<endl;
    }

    // else if (choice==9){
    //     string exp;
    //     cout<<"Enter a valid expression"<<endl;
    //     cin>>exp;
    //     int ans=ptr->solving_expression(exp);

    // }
    else if (choice==10) {
        return;
    }


    cout<<"Do you want to perform more functions < y/Y for yes > < n/N for no >";
    char ch;
    cin>>ch;

    if (ch=='y' || ch=='Y')  {
        use_calculator();
    }
    else {
        return;
    }



}




void teacher:: add_subject(int batch_no, string subject_name){
    subject.push_back({batch_no,subject_name});
}

void teacher:: conduct_exam(){
    cout<<" START EXAM ";
}

void teacher:: get_subject(){
    for(auto x: subject){
        cout<<x.first<<" "<<x.second<<endl;
    }

}



