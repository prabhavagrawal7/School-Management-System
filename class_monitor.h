#ifndef __CLASS_MONITOR
#define __CLASS_MONITOR

#include<bits/stdc++.h>
using namespace std;

//#include"common.h" 
#include"student.h"

#include "exam_marks.h"


class class_monitor : public student {
    private:
        // int standard; // who you are the class_monitor of 

    public:
        // void get_standard(int standard);

        // int get_standard();

        void maintain_the_class();

        void display();

};



#endif



