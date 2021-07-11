#include<bits/stdc++.h>
using namespace std;

#include "class_monitor.h"

//#include"common.h"
 
void class_monitor::display() {

    cout<<"Displaying class monitor "<<endl;
    cout<<"--------------------------------"<<endl;

    cout<<"Name: "<<get_name()<<"                     Username: "<<get_username()<<endl;
    cout<<"Roll Number: "<<get_roll_no()<<endl;
    cout<<"Email ID: "<<get_email()<<endl;
    cout<<"Phone No: "<<get_phone_no()<<endl;
    cout<<"Date of Birth: "<<get_date_of_birth()<<endl;
    cout<<"Standard: "<<get_standard()<<endl;

}

void class_monitor:: maintain_the_class(){
    cout<<"EVERYONE MAINTAIN SILENCE SIR IS COMING !! ";
}
