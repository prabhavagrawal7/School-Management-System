#ifndef __STAFF
#define __STAFF

#include<bits/stdc++.h>
using namespace std;

// //#include"common.h"

// #include"function_mark_attentance.h" 

class staff {
    private:

        string username;    
        int staff_id; // unique for all students --> so used as this to identify it 
        string designation;
        string name;
        string email;
        string address;
        string phone_no; 
        string date_of_birth;
        int salary;

        vector <pair <string ,int > > attandence;


        int payment_done; // 1 if payment is done , 0 otherwise not done 


    public:

        
        void set_username(string username); // used to set as well as upadte // therefore took sperately all
        void set_staff_id(int user_id);
        void set_designation(string designation);
        void set_name(string name);
        void set_email(string email);
        void set_phone_no(string phone_no);
        void set_date_of_birth(string date_of_birth);

        void set_salary(int salary);

        void set_address(string address);

        string get_address();

        void add_date_for_attandence(string data, int present); // date, 1 or 0    1 for present 0 for absent 

      //  void mark_todays_attandence();

        string get_username();
        int get_staff_id();
        string get_designation();
        string get_name();
        string get_email();
        string get_phone_no();
        string get_date_of_birth();
        int get_salary();
   
        vector <pair<string,int>> get_attendance_list();


        // void show_report(); // report card of staff member 


        void set_payment_done(int check); // 1 if done // 0 if not done 
        int get_payment_done();

        void display();

};


#endif

