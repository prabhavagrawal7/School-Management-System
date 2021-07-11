#ifndef __CLASS_TEACHER
#define __CLASS_TEACHER

#include<bits/stdc++.h>
using namespace std;

//#include"common.h"
#include"teacher.h"

#include "exam_marks.h"

 
class class_teacher : public teacher {
    private :
        int batch_no;

    public:
        void set_batch_no(int batch_no);
        int get_batch_no();

        exam_marks give_marks(); 
        // all the teachers will give the teacher the marks and the 
        // class teacher will then assign the marks to the student 

        void display();

};



#endif

