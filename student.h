#ifndef __STUDENT
#define __STUDENT

#include<bits/stdc++.h>
using namespace std;

//#include"common.h"
#include"modified_calculator.h"

// #include"function_mark_attentance.h"
 
#include "exam_marks.h"

class student{
    private:

        string username;    
        int roll_no; // unique for all students --> so used as this to identify it 
        string name;
        string email;
        string phone_no;
        // int admission_no; 
        string date_of_birth;
        int standard;

        int number_of_exams;
        vector <pair <string ,int > > attandence;

        vector <exam_marks > exam;

        int percentage;
 
        int fee_paid; // 1 if paid // 0 if not paid


    public:
        void set_username(string username); // used to set as well as upadte // therefore took sperately all
        void set_roll_no(int roll_no);
        void set_name(string name);
        void set_email(string email);
        void set_phone_no(string phone_no);
        void set_date_of_birth(string date_of_birth);
        
        void set_standard(int standard);
        void update_standard(int status); // 1 for pass   0 for fail

        void add_date_for_attandence(string data, int present); // date, 1 or 0    1 for present 0 for absent 

        // void mark_todays_attandence();

        string get_username();
        int get_roll_no();
        string get_name();
        string get_email();
        string get_phone_no();
        string get_date_of_birth();
        int get_standard();


        // void give_exam(); // set exam_marks and insert it in vector exam
        
        void give_exam();  // just write exam 

        void give_maths_exam(); // calculator use 



        // void set_exam_marks(exam_marks x);
        // void set_exam_attendance(exam_attendance y);
        
        vector <pair<string,int>> get_attendance_list();


        void show_report(); // report card 


        // average and percentage find 
        void set_percentage();

        float get_percentage();


        // fee paid 
        void set_fee_paid(int check); // 1 if paid // 0 if not paid 
        int get_fee_paid();


        void add_exam_marks(exam_marks m);

        void display();

};



#endif


