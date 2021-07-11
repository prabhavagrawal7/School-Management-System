#ifndef __ADMIN
#define __ADMIN
 
#include<bits/stdc++.h>
using namespace std;

// #include"common.h"
#include"bank.h"
#include"library.h"
#include"leader.h"
#include"class_teacher.h"

#include "exam_marks.h"


class admin{
    private:

    static int student_id;
    static int staff_id;

    // static int batch_id; // later 


    // these are there --> just use this
    bank obj_bank;
    Library obj_library; 


        vector <student > student_list;
        vector <teacher > teacher_list;
        vector <staff > staff_list;
        vector <class_monitor> class_monitor_list;
        vector <class_teacher> class_teacher_list;
        vector <leader> leader_list;

        // vector <batch> batch_list; // later 
        

    public:

        // void default_call();

        // void set_school_balance();

        int get_school_balance();


        void admin_functions();
        void student_functions();
        void teacher_functions();
        void staff_functions();

        void class_monitor_functions();
        void class_teacher_functions();
        void leader_functions();



        void add_student();
        void remove_student();

        void add_class_monitor();
        void remove_class_monitor();

        void add_leader();
        void remove_leader(); 

        void pay_staff();


        
        void add_teacher();
        void remove_teacher();

        void add_class_teacher();
        void remove_class_teacher();

        
        void add_staff();
        void remove_staff();


    // bank b;
    // b.apply();
    // cout<<"------------------"<<endl;
    // b.showReceipt("aditya","A12");

    void lib_add_book();
    void get_id_book();


};


#endif

