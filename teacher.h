#ifndef __TEACHER
#define __TEACHER

#include<bits/stdc++.h>
using namespace std;

//#include"common.h"
#include"staff.h"
#include"modified_calculator.h"

class teacher : public staff {
    private:
        vector < pair <int ,string > > subject; // batch , subject 
 

    public:
        void add_subject(int batch_no, string subject_name);
        void conduct_exam();

        void get_subject();

        void use_calculator();

        // exam_marks give_marks();

        void display();
       
};


#endif
