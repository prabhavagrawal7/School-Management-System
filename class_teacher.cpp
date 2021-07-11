#include<bits/stdc++.h>
using namespace std;

#include "class_teacher.h"

//#include"common.h"

//#include "exam_marks.h"

// struct exam_marks{
//     int maths_marks;
//     int english_marks;
//     int hindi_marks;
//     int science_marks;
//     int social_marks;
//     int computer_marks;
// };

exam_marks class_teacher:: give_marks(){
     
    struct exam_marks exam1;

    cout<<"Maths marks "<<endl;
    cin>>exam1.maths_marks;

    cout<<"English marks "<<endl;
    cin>>exam1.english_marks;
    
    cout<<"Hindi marks "<<endl;
    cin>>exam1.hindi_marks;

    cout<<"Science marks "<<endl;
    cin>>exam1.science_marks;

    cout<<"Social marks "<<endl;
    cin>>exam1.social_marks;

    cout<<"Computer marks "<<endl;
    cin>>exam1.computer_marks;

    return exam1;

}



void class_teacher::display(){
    
    cout<<"Displaying class teacher"<<endl;
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

void class_teacher::set_batch_no(int batch_no){
    this->batch_no = batch_no;
}

int class_teacher::get_batch_no(){
    return this->batch_no;
}
