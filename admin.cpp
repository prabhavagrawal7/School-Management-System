#include<bits/stdc++.h>
using namespace std;
 
#include "admin.h"

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


void admin:: lib_add_book(){

    string book_name;
    cout<<"Enter the name of the book "<<endl;
    cin>>book_name;

    int choice;
    cout<<"1 for student book"<<endl;
    cout<<"2 for teacher book"<<endl;
    cin>>choice;

    obj_library.add_book(book_name,choice);
    
}

void admin:: get_id_book() {
    string book_name;
    cout<<"Enter the name of the book "<<endl;
    cin>>book_name;

    int choice;
    cout<<"1 for student book"<<endl;
    cout<<"2 for teacher book"<<endl;
    cin>>choice;

    if (choice==1) {
        int ans=obj_library.get_id_student(book_name);
    }
    else if (choice==2) {
        int ans=obj_library.get_id_teacher(book_name);
    }
}


// void admin:: default_call() {
    
// }


// void admin:: set_school_balance(){
//     obj_bank.set_school_balance(1000000);
// }

int admin:: get_school_balance(){
    int balance=obj_bank.get_school_balance();
    return balance;
}



int admin:: student_id=1000;
int admin:: staff_id=2000;

//  int admin:: batch_id=3000; // later 


void admin:: admin_functions(){

    // cout<<"Please first set school account details";
    // // take it bydefault 

    // set_school_balance(); // first set the school amount 


    cout<<"Welcome Admin here!! How can I help you  "<<endl;
    cout<<"MENU"<<endl;
    cout<<"-----------------------"<<endl;
    int choice;

    cout <<"Press 1 to add student "<<endl;
    cout <<"Press 2 to add teacher "<<endl;
    cout <<"Press 3 to add staff "<<endl;
    cout <<"Press 4 to remove student "<<endl;
    cout <<"Press 5 to remove teacher "<<endl;
    cout <<"Press 6 to remove staff "<<endl;

    cout <<"Press 7 to add class monitor (student) "<<endl;
    cout <<"Press 8 to add class teacher (teacher) "<<endl;
    cout <<"Press 9 to add leader (student) "<<endl;

    cout <<"Press 10 to remove class monitor (student) "<<endl;
    cout <<"Press 11 to remove class teacher (teacher) "<<endl;
    cout <<"Press 12 to remove leader (student) "<<endl;

    // new with bank 
    cout<<"Press 13 to pay the staff"<<endl;

// new to check school balance   

    cout<<"Press 14 to get the school balance"<<endl;


    // cout<<"Press 15 to exit"<<endl;


// lib 
    cout<<"Press 15 to add book"<<endl;

    cout<<"Press 16 to check id of book"<<endl;


    cout<<"Press 17 to display student list "<<endl;
    cout<<"Press 18 to display class monitor list "<<endl;
    cout<<"Press 19 to display leader list"<<endl;
    cout<<"Press 20 to display staff list "<<endl;
    cout<<"Press 21 to display teacher list "<<endl;
    cout<<"Press 22 to display class teacher list "<<endl;
    cout<<"Press 23 to display library contents "<<endl;


    cout<<"Press 24 to exit"<<endl;

    
    cout<<"Enter your choice "<<endl;
    cin>>choice;

    if (choice==1) {
        add_student();
    }
    else if (choice==2){
        add_teacher();
    }
    else if (choice==3){
        add_staff();
    }
    else if (choice==4){
        remove_student();
    }
    else if (choice==5){
        remove_teacher();
    }
    else if (choice==6){
        remove_staff();
    }
    else if (choice==7){
        add_class_monitor();
    }
    else if (choice==8){
        add_class_teacher();
    }
    else if (choice==9){
        add_leader();
    }
    else if (choice==10){
        remove_class_monitor();
    }
    else if (choice==11){
        remove_class_teacher();
    }
    else if (choice==12){
        remove_leader();
    }
    else if (choice==13) {
        pay_staff();
    }
    else if (choice==14) {
        int x=obj_bank.get_school_balance();
        cout<<x<<endl;
    }
    else if (choice==15 ) {
        lib_add_book();
    }

    // else if (choice==15){
    //     return;
    // }


    else if (choice==16) {
        get_id_book();
    }

    else if (choice==17) {
        int size=student_list.size();

        // if (size==0) {
        //     cout<<"List is empty!"<<endl;
        // }
        
        cout<<"List size :- "<<size<<endl;
        
        for(int i=0;i<size;i++){
            cout<<"Student number "<<i+1<<endl;
            student_list[i].display();           
        }


    }

    else if (choice==18) {
        int size=class_monitor_list.size();

        // if (size==0) {
        //     cout<<"List is empty!"<<endl;
        // }
        
        cout<<"List size :- "<<size<<endl;
        
        for(int i=0;i<size;i++){
            cout<<"Class monitor number "<<i+1<<endl;
            class_monitor_list[i].display();           
        }


    }


    else if (choice==19) {
        int size=leader_list.size();

        // if (size==0) {
        //     cout<<"List is empty!"<<endl;
        // }
        
        cout<<"List size :- "<<size<<endl;
        
        for(int i=0;i<size;i++){
            cout<<"Leader number "<<i+1<<endl;
            leader_list[i].display();           
        }


    }
    
    else if (choice==20) {
        int size=staff_list.size();

        // if (size==0) {
        //     cout<<"List is empty!"<<endl;
        // }
        
        cout<<"List size :- "<<size<<endl;
        
        for(int i=0;i<size;i++){
            cout<<"Staff number "<<i+1<<endl;
            staff_list[i].display();           
        }


    }
    else if (choice==21) {
        int size=teacher_list.size();

        // if (size==0) {
        //     cout<<"List is empty!"<<endl;
        // }
        
        cout<<"List size :- "<<size<<endl;
        
        for(int i=0;i<size;i++){
            cout<<"teacher number "<<i+1<<endl;
            teacher_list[i].display();           
        }


    }
    else if (choice==22) {
        int size=class_teacher_list.size();

        // if (size==0) {
        //     cout<<"List is empty!"<<endl;
        // }
        
        cout<<"List size :- "<<size<<endl;
        
        for(int i=0;i<size;i++){
            cout<<"class_teacher number "<<i+1<<endl;
            class_teacher_list[i].display();           
        }


    }
    else if (choice==23) {
        obj_library.display();
    }
    else if (choice==24) {
        return;
    }



    cout<<"Do you want to perform more functions < y/Y for yes > < n/N for no >";
    char ch;
    cin>>ch;

    if (ch=='y' || ch=='Y')  {
        admin_functions();
    }
    else {
        return;
    }

    



}


void admin:: pay_staff(){
    
    int id;
    cout<<"Enter the id of the staff(staff/teacher/class-teacher) you want to make the payment"<<endl;
    cin>>id;

    int check1=0; // staff
    int check2=0; // teacher
    int check3=0; // class-teacher


    int size=staff_list.size();

    auto it=staff_list.begin();

    staff *ptr;

    for(int i=0;i<size;i++){
        if (staff_list[i].get_staff_id()==id) {
            // staff_list.erase(it);
            ptr=&staff_list[i];
            check1=1;
            break;
        }
        it++;
    }





    int size2=teacher_list.size();

    auto it2=teacher_list.begin();

    teacher *ptr2;

    for(int i=0;i<size2;i++){
        if (teacher_list[i].get_staff_id()==id) {
            // staff_list.erase(it);
            ptr2=&teacher_list[i];
            check2=1;
            break;
        }
        it2++;
    }



    int size3=class_teacher_list.size();

    auto it3=class_teacher_list.begin();

    class_teacher *ptr3;

    for(int i=0;i<size3;i++){
        if (class_teacher_list[i].get_staff_id()==id) {
            // staff_list.erase(it);
            ptr3=&class_teacher_list[i];
            check3=1;
            break;
        }
        it3++;
    }






    if (check1==1){
    
        // cout<<"The staff with id "<<id<<" has been delted successfully "<<endl;
        int amount=ptr->get_salary();
        
        // if already paid then do not pay 
        if (ptr->get_payment_done()==1) {
            cout<<"Payment is already done!!"<<endl; 
        }

        else {

        obj_bank.pay_payment_staff(id,amount);
        ptr->set_payment_done(1);

        }
    
    }
    else if (check2==1) {
        
        int amount=ptr2->get_salary();

        // if already paid then do not pay 
        if (ptr2->get_payment_done()==1) {
            cout<<"Payment is already done!!"<<endl; 
        }

        else {

        obj_bank.pay_payment_staff(id,amount);
        ptr2->set_payment_done(1);

        }

    }
    else if (check3==1) {

        int amount=ptr3->get_salary();

        // if already paid then do not pay 
        if (ptr3->get_payment_done()==1) {
            cout<<"Payment is already done!!"<<endl; 
        }

        else {

        obj_bank.pay_payment_staff(id,amount);
        ptr3->set_payment_done(1);

        }

    }
    else {
        cout <<"No such staff exist "<<endl;
    }

    
}

void admin:: add_class_monitor(){

    class_monitor obj1;

    obj1.set_fee_paid(0);

    string str;
    cout << "Enter Student name :- ";
    cin >> str;
    obj1.set_name(str);

    string username;
    cout << "Enter Username :- ";
    cin >> username;
    obj1.set_username(username); // used to set as well as upadte // therefore took sperately all

// roll number or id we will give you this 
    // int roll_no;
    // cout << "Enter Roll no :- ";
    // cin >> roll_no;
    student_id++;
    obj1.set_roll_no(student_id);

    string email;
    cout << "Enter Email :-";
    cin >> email;
    obj1.set_email(email);

    string phone_no;
    cout << "Enter Phone No :-";
    cin >> phone_no;
    obj1.set_phone_no(phone_no);

    string date_of_birth;
    cout << "Enter Date Of Birth :-";
    cin >> date_of_birth;
    obj1.set_date_of_birth(date_of_birth);

    int standard;
    cout << "Enter Standard :-";
    cin >> standard;
    obj1.set_standard(standard);

    // int status;
    // cout << "Enter Status :-";
    // cin >> status;
    // obj1.update_standard(status); // 1 for pass   0 for fail

    // string date; int present;
    // cout << "Enter date :-";
    // cin >> date;
    // cout << "Enter Present :-";
    // cin >> present;
    // obj1.add_date_for_attandence(date, present); // date, 1 or 0    1 for present 0 for absent


    // unique here 

    // int x;
    // cout<<"Enter the standard you are monitor of "<<endl;
    // cin>>x;
    // obj1.set_standard(x);

    class_monitor_list.push_back(obj1);

}



void admin :: add_leader(){
    leader obj1;

    obj1.set_fee_paid(0);


    string str;
    cout << "Enter Student name :- ";
    cin >> str;
    obj1.set_name(str);

    string username;
    cout << "Enter Username :- ";
    cin >> username;
    obj1.set_username(username); // used to set as well as upadte // therefore took sperately all

// roll number or id we will give you this 
    // int roll_no;
    // cout << "Enter Roll no :- ";
    // cin >> roll_no;
    student_id++;
    obj1.set_roll_no(student_id);

    string email;
    cout << "Enter Email :-";
    cin >> email;
    obj1.set_email(email);

    string phone_no;
    cout << "Enter Phone No :-";
    cin >> phone_no;
    obj1.set_phone_no(phone_no);

    string date_of_birth;
    cout << "Enter Date Of Birth :-";
    cin >> date_of_birth;
    obj1.set_date_of_birth(date_of_birth);

    int standard;
    cout << "Enter Standard :-";
    cin >> standard;
    obj1.set_standard(standard);

    // int status;
    // cout << "Enter Status :-";
    // cin >> status;
    // obj1.update_standard(status); // 1 for pass   0 for fail

    // string date; int present;
    // cout << "Enter date :-";
    // cin >> date;
    // cout << "Enter Present :-";
    // cin >> present;
    // obj1.add_date_for_attandence(date, present); // date, 1 or 0    1 for present 0 for absent


    // unique  // high school leader or middle school leader
    // can add this if you want 

    leader_list.push_back(obj1);

}


void admin:: add_class_teacher() {

    class_teacher obj1;

    
    obj1.set_payment_done(0); // as soon as the object is created --> set the payment done to 0


    string str;
    cout << "Enter name :- ";
    cin >> str;
    obj1.set_name(str);

    string username;
    cout << "Enter Username :- ";
    cin >> username;
    obj1.set_username(username); // used to set as well as upadte // therefore took sperately all

    staff_id++;
    obj1.set_staff_id(staff_id);

    // string designation;
    // cout<<"Enter designation "<<endl;
    // cin>>designation;
    // we have a teacher here
    obj1.set_designation("Class Teacher");


    string email;
    cout << "Enter Email :-";
    cin >> email;
    obj1.set_email(email);

    string phone_no;
    cout << "Enter Phone No :-";
    cin >> phone_no;
    obj1.set_phone_no(phone_no);

    string address;
    cout << "Enter address :-";
    cin >> address;
    obj1.set_address(address);


    string date_of_birth;
    cout << "Enter Date Of Birth :-";
    cin >> date_of_birth;
    obj1.set_date_of_birth(date_of_birth);

    int salary;
    cout << "Enter salary :-";
    cin >> salary;
    obj1.set_salary(salary);

    // unique s
    int x;
    cout<<"Enter the standard you are the class teacher of "<<endl;
    cin>>x;
    obj1.set_batch_no(x);

    class_teacher_list.push_back(obj1);
}



// no menu required here 
// you want to have these things 
// like they are mandatory 

void admin:: add_student(){
    student obj1;

    // obj1.set_percentage(0); // done via setting name only 

    obj1.set_fee_paid(0); // initalization


    string str;
    cout << "Enter Student name :- ";
    cin >> str;
    obj1.set_name(str);

    string username;
    cout << "Enter Username :- ";
    cin >> username;
    obj1.set_username(username); // used to set as well as upadte // therefore took sperately all

// roll number or id we will give you this 
    // int roll_no;
    // cout << "Enter Roll no :- ";
    // cin >> roll_no;
    student_id++;
    obj1.set_roll_no(student_id);

    string email;
    cout << "Enter Email :-";
    cin >> email;
    obj1.set_email(email);

    string phone_no;
    cout << "Enter Phone No :-";
    cin >> phone_no;
    obj1.set_phone_no(phone_no);

    string date_of_birth;
    cout << "Enter Date Of Birth :-";
    cin >> date_of_birth;
    obj1.set_date_of_birth(date_of_birth);

    int standard;
    cout << "Enter Standard :-";
    cin >> standard;
    obj1.set_standard(standard);

    // int status;
    // cout << "Enter Status :-";
    // cin >> status;
    // obj1.update_standard(status); // 1 for pass   0 for fail

    // string date; int present;
    // cout << "Enter date :-";
    // cin >> date;
    // cout << "Enter Present :-";
    // cin >> present;
    // obj1.add_date_for_attandence(date, present); // date, 1 or 0    1 for present 0 for absent

    student_list.push_back(obj1);

    cout<<"Student has been added successfully!" <<endl;

}



void admin:: add_staff(){

    staff obj1;

    obj1.set_payment_done(0); // as soon as the object is created --> set the payment done to 0

    string str;
    cout << "Enter name :- ";
    cin >> str;
    obj1.set_name(str);

    string username;
    cout << "Enter Username :- ";
    cin >> username;
    obj1.set_username(username); // used to set as well as upadte // therefore took sperately all

    staff_id++;
    obj1.set_staff_id(staff_id);

    string designation;
    cout<<"Enter designation "<<endl;
    cin>>designation;
    obj1.set_designation(designation);

    string email;
    cout << "Enter Email :-";
    cin >> email;
    obj1.set_email(email);

    string phone_no;
    cout << "Enter Phone No :-";
    cin >> phone_no;
    obj1.set_phone_no(phone_no);

    string address;
    cout << "Enter address :-";
    cin >> address;
    obj1.set_address(address);


    string date_of_birth;
    cout << "Enter Date Of Birth :-";
    cin >> date_of_birth;
    obj1.set_date_of_birth(date_of_birth);

    int salary;
    cout << "Enter salary :-";
    cin >> salary;
    obj1.set_salary(salary);

    staff_list.push_back(obj1);

}




void admin:: add_teacher(){

    teacher obj1;
    
    obj1.set_payment_done(0); // as soon as the object is created --> set the payment done to 0


    string str;
    cout << "Enter name :- ";
    cin >> str;
    obj1.set_name(str);

    string username;
    cout << "Enter Username :- ";
    cin >> username;
    obj1.set_username(username); // used to set as well as upadte // therefore took sperately all

    staff_id++;
    obj1.set_staff_id(staff_id);

    // string designation;
    // cout<<"Enter designation "<<endl;
    // cin>>designation;
    // we have a teacher here
    obj1.set_designation("Teacher");


    string email;
    cout << "Enter Email :-";
    cin >> email;
    obj1.set_email(email);

    string phone_no;
    cout << "Enter Phone No :-";
    cin >> phone_no;
    obj1.set_phone_no(phone_no);

    string address;
    cout << "Enter address :-";
    cin >> address;
    obj1.set_address(address);


    string date_of_birth;
    cout << "Enter Date Of Birth :-";
    cin >> date_of_birth;
    obj1.set_date_of_birth(date_of_birth);

    int salary;
    cout << "Enter salary :-";
    cin >> salary;
    obj1.set_salary(salary);

    teacher_list.push_back(obj1);

}


void admin:: remove_student(){
    int id;
    cout<<"Enter the roll number (student id) to be removed ";
    cin>>id;

    int check=0;

    int size=student_list.size();

    auto it=student_list.begin();
    for(int i=0;i<size;i++){
        if (student_list[i].get_roll_no()==id) {
            student_list.erase(it);
            check=1;
            break;
        }
        it++;
    }

    if (check){
        cout<<"The student with id "<<id<<" has been delted successfully "<<endl;
    }
    else {
        cout <<"No such student exist "<<endl;
    }

}



void admin:: remove_staff(){
    int id;
    cout<<"Enter the staff id to be removed ";
    cin>>id;

    int check=0;

    int size=staff_list.size();

    auto it=staff_list.begin();
    for(int i=0;i<size;i++){
        if (staff_list[i].get_staff_id()==id) {
            staff_list.erase(it);
            check=1;
            break;
        }
        it++;
    }

    if (check){
        cout<<"The staff with id "<<id<<" has been delted successfully "<<endl;
    }
    else {
        cout <<"No such staff exist "<<endl;
    }

}






void admin:: remove_teacher(){
    int id;
    cout<<"Enter the teacher id to be removed "; // staff id 
    cin>>id;

    int check=0;

    int size=teacher_list.size();

    auto it=teacher_list.begin();
    for(int i=0;i<size;i++){
        if (teacher_list[i].get_staff_id()==id) {
            teacher_list.erase(it);
            check=1;
            break;
        }
        it++;
    }

    if (check){
        cout<<"The teacher with id "<<id<<" has been delted successfully "<<endl;
    }
    else {
        cout <<"No such teacher exist "<<endl;
    }

}





void admin:: remove_class_teacher(){
    int id;
    cout<<"Enter the class teacher id to be removed "; // staff id 
    cin>>id;

    int check=0;

    int size=class_teacher_list.size();

    auto it=class_teacher_list.begin();
    for(int i=0;i<size;i++){
        if (class_teacher_list[i].get_staff_id()==id) {
            class_teacher_list.erase(it);
            check=1;
            break;
        }
        it++;
    }

    if (check){
        cout<<"The class teacher with id "<<id<<" has been delted successfully "<<endl;
    }
    else {
        cout <<"No such class teacher exist "<<endl;
    }
}

void admin:: remove_class_monitor(){
    int id;
    cout<<"Enter the roll number (student id  monitor ) to be removed ";
    cin>>id;

    int check=0;

    int size=class_monitor_list.size();

    auto it=class_monitor_list.begin();
    for(int i=0;i<size;i++){
        if (class_monitor_list[i].get_roll_no()==id) {
            class_monitor_list.erase(it);
            check=1;
            break;
        }
        it++;
    }

    if (check){
        cout<<"The class monitor student with id "<<id<<" has been delted successfully "<<endl;
    }
    else {
        cout <<"No such student exist "<<endl;
    }

}



void admin:: remove_leader(){
    int id;
    cout<<"Enter the roll number ( leade ) to be removed ";
    cin>>id;

    int check=0;

    int size=leader_list.size();

    auto it=leader_list.begin();
    for(int i=0;i<size;i++){
        if (leader_list[i].get_roll_no()==id) {
            leader_list.erase(it);
            check=1;
            break;
        }
        it++;
    }

    if (check){
        cout<<"The leader student with id "<<id<<" has been delted successfully "<<endl;
    }
    else {
        cout <<"No such student exist "<<endl;
    }

}



void admin:: staff_functions(){
    int id;
    cout<<"Enter your staff id ";
    cin>>id;

    int check=0;

    int size=staff_list.size();

    staff *ptr;  


    auto it=staff_list.begin();
    for(int i=0;i<size;i++){
        if (staff_list[i].get_staff_id()==id) {
            ptr=&staff_list[i];
            check=1;
            break;
        }
        it++;
    }

    if (check==0) {
        cout<<"The staff with this id do not exist "<<endl;
    }
    else {

// designation change 
// address change
// salary change

while(1){

        cout<<"The staff with this "<<id<<" here "<<endl;
        cout<<"MENU "<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"Press 1 for change username "<<endl;
        cout<<"Press 2 for change name "<<endl;
        cout<<"Press 3 for change email "<<endl;
        cout<<"Press 4 for change phone_no "<<endl;
        cout<<"Press 5 for change date_of_birth "<<endl;
        
        cout<<"Press 6 for change designation "<<endl;

        cout<<"Press 7 for get username "<<endl;
        cout<<"Press 8 for get name "<<endl;
        cout<<"Press 9 for get email "<<endl;
        cout<<"Press 10 for get phone_no "<<endl;
        cout<<"Press 11 for get date_of_birth "<<endl;

        cout<<"Press 12 for get designation "<<endl;

        cout<<"Press 13 for get staff id "<<endl;

        cout<<"Press 14 for add date for attendance "<<endl;
        cout<<"Press 15 for marking todays attendance "<<endl;

        cout<<"Press 16 to set address"<<endl; 
        cout<<"Press 17 to get address"<<endl;         

        cout<<"Press 18 to set salary"<<endl; 
        cout<<"Press 19 to get salary "<<endl;

        cout<<"Press 20 to get the attendance list "<<endl;
        // cout<<"Press 19 to get the report-card "<<endl;

        // new

        cout<<"Press 21 to check payment is done or not "<<endl;

        cout<<"Press 22 to display "<<endl;

        cout<<"Press 23 to exit "<<endl;

        
        int choice;
        cout<<"Enter your choice "<<endl;
        cin>>choice;

        if (choice==1) {
            string username;
            cout << "Enter Username :- ";
            cin >> username;
            ptr->set_username(username); 
        }
        else if (choice==2) {
            string str;
            cout << "Enter Staff name :- ";
            cin >> str;
            ptr->set_name(str);
        }
        else if (choice==3) {
            string email;
            cout << "Enter Email :-";
            cin >> email;
            ptr->set_email(email);
        }
        else if (choice==4) {
            string phone_no;
            cout << "Enter Phone No :-";
            cin >> phone_no;
            ptr->set_phone_no(phone_no);
        }
        else if (choice==5){
            string date_of_birth;
            cout << "Enter Date Of Birth :-";
            cin >> date_of_birth;
            ptr->set_date_of_birth(date_of_birth);
        }
        else if (choice==6) {
            string designation;
            cout << "Enter designation :-";
            cin >> designation;
            ptr->set_designation(designation);
        }

        else if (choice==7){
            string str=ptr->get_username();
            cout<<"Username -"<<str<<endl;
        }
        else if (choice==8){
            string str=ptr->get_name();
            cout<<"Name -"<<str<<endl;
        }
        else if (choice==9){
            string str=ptr->get_email();
            cout<<"Email -"<<str<<endl;
        }
        else if (choice==10){
            string str=ptr->get_phone_no();
            cout<<"Phone number -"<<str<<endl;
        }
        else if (choice==11){
            string str=ptr->get_date_of_birth();
            cout<<"Date of birth -"<<str<<endl;
        }
        else if (choice==12){
            string str=ptr->get_designation();
            cout<<"Designation -"<<str<<endl; 
        }
        else if (choice==13){
            int x=ptr->get_staff_id();
            cout<<"Staff id -"<<x<<endl;
        }

        else if (choice==14){
            string str;
            int x;
            cout<<"Enter the date "<<endl;
            cin>>str;
            cout<<"Enter <1,0> ( 1 for present and 0 for absent ) "<<endl;
            cin>>x;
            ptr->add_date_for_attandence(str,x);
        }
        // else if (choice==15){
        //     ptr->mark_todays_attandence();
        // }
        else if (choice==16){
            string str;
            cout<<"Enter Address "<<endl;
            cin>>str;
            ptr->set_address(str);
        }
        else if (choice==17){
            string str =ptr->get_address();
            cout<<str<<endl;

        }
        else if (choice==18){
            int x;
            cout<<"Enter salary"<<endl;
            cin>>x;
            ptr->set_salary(x);
        }
        else if (choice==19){
            int x=ptr->get_salary();
            cout<<"salary  "<<x<<endl;
        }
        else if (choice==20){
            vector <pair <string ,int >> v;
            v=ptr->get_attendance_list();

            cout<<"Date"<<"        "<<"Status"<<endl;
            for(auto x: v){
                cout<<x.first<<"  "<<x.second<<endl;
            }
        
        }
        // else if (choice==19) {
        //     ptr->show_report();
        // }

        else if (choice==21) {
            int x=ptr->get_payment_done();
            cout<<x<<endl;
        }

        else if (choice==22) {
            ptr->display();
        }

        else if (choice==23) {
            return;
        }

        cout<<"Do you want to perform more functions < y/Y for yes > < n/N for no >";
        char ch;
        cin>>ch;

        if (ch=='y' || ch=='Y')  {
            // teacher_functions();
            continue;
        }
        else {
            // return;
            break; 
        }

} // while loop

 
} // else condition 


   
        
  
} // complete function 




void admin:: teacher_functions(){
    int id;
    cout<<"Enter your staff id ";
    cin>>id;

    int check=0;

    int size=teacher_list.size();

   teacher *ptr;


    auto it=teacher_list.begin();
    for(int i=0;i<size;i++){
        if (teacher_list[i].get_staff_id()==id) {
            ptr=&teacher_list[i];
            check=1;
            break;
        }
        it++;
    }

    if (check==0) {
        cout<<"The staff with this id do not exist "<<endl;
    }
    else {

// designation change 
// address change
// salary change


while(1){


        cout<<"The teacher with this id "<<id<<" here !!"<<endl;
        cout<<"MENU "<<endl;
    
        cout<<"---------------------------------"<<endl;
        cout<<"Press 1 for change username "<<endl;
        cout<<"Press 2 for change name "<<endl;
        cout<<"Press 3 for change email "<<endl;
        cout<<"Press 4 for change phone_no "<<endl;
        cout<<"Press 5 for change date_of_birth "<<endl;
        
        cout<<"Press 6 for change designation "<<endl;

        cout<<"Press 7 for get username "<<endl;
        cout<<"Press 8 for get name "<<endl;
        cout<<"Press 9 for get email "<<endl;
        cout<<"Press 10 for get phone_no "<<endl;
        cout<<"Press 11 for get date_of_birth "<<endl;

        cout<<"Press 12 for get designation "<<endl;

        cout<<"Press 13 for get staff id "<<endl;

        cout<<"Press 14 for add date for attendance "<<endl;
        cout<<"Press 15 for marking todays attendance "<<endl;

        cout<<"Press 16 to set address"<<endl; 
        cout<<"Press 17 to get address"<<endl;         

        cout<<"Press 18 to set salary"<<endl; 
        cout<<"Press 19 to get salary "<<endl;

        cout<<"Press 20 to get the attendance list "<<endl;
        // cout<<"Press 19 to get the report-card "<<endl;


        // unique

        cout<<"Press 21 to add subject "<<endl;

        cout<<"Press 22 to get the subject list"<<endl;

        cout<<"Press 23 to conduct exam "<<endl; 

        
        cout<<"Press 24 to check payment is done or not "<<endl;
        

        cout<<"Press 25 to display "<<endl;

        cout<<"Press 26 to exit "<<endl;

       

        

        // // giving marks to student 
        // cout<<"Press 25 to give marks to student "<<endl;



        int choice;
        cout<<"Enter your choice "<<endl;
        cin>>choice;

        if (choice==1) {
            string username;
            cout << "Enter Username :- ";
            cin >> username;
            ptr->set_username(username); 
        }
        else if (choice==2) {
            string str;
            cout << "Enter Staff name :- ";
            cin >> str;
            ptr->set_name(str);
        }
        else if (choice==3) {
            string email;
            cout << "Enter Email :-";
            cin >> email;
            ptr->set_email(email);
        }
        else if (choice==4) {
            string phone_no;
            cout << "Enter Phone No :-";
            cin >> phone_no;
            ptr->set_phone_no(phone_no);
        }
        else if (choice==5){
            string date_of_birth;
            cout << "Enter Date Of Birth :-";
            cin >> date_of_birth;
            ptr->set_date_of_birth(date_of_birth);
        }
        else if (choice==6) {
            string designation;
            cout << "Enter designation :-";
            cin >> designation;
            ptr->set_designation(designation);
        }

        else if (choice==7){
            string str=ptr->get_username();
            cout<<"Username -"<<str<<endl;
        }
        else if (choice==8){
            string str=ptr->get_name();
            cout<<"Name -"<<str<<endl;
        }
        else if (choice==9){
            string str=ptr->get_email();
            cout<<"Email -"<<str<<endl;
        }
        else if (choice==10){
            string str=ptr->get_phone_no();
            cout<<"Phone number -"<<str<<endl;
        }
        else if (choice==11){
            string str=ptr->get_date_of_birth();
            cout<<"Date of birth -"<<str<<endl;
        }
        else if (choice==12){
            string str=ptr->get_designation();
            cout<<"Designation -"<<str<<endl; 
        }
        else if (choice==13){
            int x=ptr->get_staff_id();
            cout<<"Staff id -"<<x<<endl;
        }

        else if (choice==14){
            string str;
            int x;
            cout<<"Enter the date "<<endl;
            cin>>str;
            cout<<"Enter <1,0> ( 1 for present and 0 for absent ) "<<endl;
            cin>>x;
            ptr->add_date_for_attandence(str,x);
        }
        // else if (choice==15){
        //     ptr->mark_todays_attandence();
        // }
        else if (choice==16){
            string str;
            cout<<"Enter Address "<<endl;
            cin>>str;
            ptr->set_address(str);
        }
        else if (choice==17){
            string str =ptr->get_address();
            cout<<str<<endl;

        }
        else if (choice==18){
            int x;
            cout<<"Enter salary"<<endl;
            cin>>x;
            ptr->set_salary(x);
        }
        else if (choice==19){
            int x=ptr->get_salary();
            cout<<"salary  "<<x<<endl;
        }
        else if (choice==20){
            vector <pair <string ,int >> v;
            v=ptr->get_attendance_list();

            cout<<"Date"<<"        "<<"Status"<<endl;
            for(auto x: v){
                cout<<x.first<<"  "<<x.second<<endl;
            }
        
        }
        else if (choice==21) {
            int x;
            string str;
            cout<<"Enter the subject ";
            cin>>str;

            cout<<"Enter the batch ";
            cin>>x;
            ptr->add_subject(x,str);
        }

        else if (choice==22) {
            cout<<"Subject list is as follows " <<endl;
            ptr->get_subject();
        }
        
        else if (choice==23) {
            ptr->conduct_exam();

        }


        // else if (choice==19) {
        //     ptr->show_report();
        // }

        else if (choice==24) {
            int x=ptr->get_payment_done();
            cout<<x<<endl;
        }

        else if (choice==25) {
            ptr->display();
        }

        else if (choice==26) {
            return;
        }


        cout<<"Do you want to perform more functions < y/Y for yes > < n/N for no >";
        char ch;
        cin>>ch;

        if (ch=='y' || ch=='Y')  {
            // teacher_functions();
            continue;
        }
        else {
            // return;
            break; 
        }

} // while loop

 
} // else condition 


   
        
  
} // complete function 




void admin:: class_teacher_functions(){

    int id;
    cout<<"Enter your staff id ";
    cin>>id;

    int check=0;

    int size=class_teacher_list.size();

    class_teacher *ptr;


    auto it=class_teacher_list.begin();
    for(int i=0;i<size;i++){
        if (class_teacher_list[i].get_staff_id()==id) {
            ptr=&class_teacher_list[i];
            check=1;
            break;
        }
        it++;
    }

    if (check==0) {
        cout<<"The staff with this id do not exist "<<endl;
        return; 
    }
    else {

// designation change 
// address change
// salary change

while (1){


        cout<<"MENU "<<endl;
        cout<<"class Teacher here id -> "<<id<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"Press 1 for change username "<<endl;
        cout<<"Press 2 for change name "<<endl;
        cout<<"Press 3 for change email "<<endl;
        cout<<"Press 4 for change phone_no "<<endl;
        cout<<"Press 5 for change date_of_birth "<<endl;
        
        cout<<"Press 6 for change designation "<<endl;

        cout<<"Press 7 for get username "<<endl;
        cout<<"Press 8 for get name "<<endl;
        cout<<"Press 9 for get email "<<endl;
        cout<<"Press 10 for get phone_no "<<endl;
        cout<<"Press 11 for get date_of_birth "<<endl;

        cout<<"Press 12 for get designation "<<endl;

        cout<<"Press 13 for get staff id "<<endl;

        cout<<"Press 14 for add date for attendance "<<endl;
        cout<<"Press 15 for marking todays attendance "<<endl;

        cout<<"Press 16 to set address"<<endl; 
        cout<<"Press 17 to get address"<<endl;         

        cout<<"Press 18 to set salary"<<endl; 
        cout<<"Press 19 to get salary "<<endl;

        cout<<"Press 20 to get the attendance list "<<endl;
        // cout<<"Press 19 to get the report-card "<<endl;


        // unique

        cout<<"Press 21 to add subject "<<endl;

        cout<<"Press 22 to get the subject list"<<endl;

        cout<<"Press 23 to conduct exam "<<endl; 


        cout<<"Press 24 to change the branch "<<endl;
        cout<<"Press 25 to get the branch "<<endl;

        
        cout<<"Press 26 to check payment is done or not "<<endl;
        
 // new // lib
        // check if you like want the lib infro in student class as well or not 
        cout<<"Press 27 to issue a book " <<endl;

        cout<<"Press 28 to submit a book"<<endl;



        // giving marks to student  --> check later 
        cout<<"Press 29 to give marks to student "<<endl;
        // all the teachers gives the marks to the class teacher and class teacher gives them to student 

        cout<<"Press 30 to change student entries "<<endl; // being the class teacher --> it can 

        cout<<"Press 31 to display "<<endl;

        cout<<"Press 32 to exit "<<endl;



        int choice;
        cout<<"Enter your choice "<<endl;
        cin>>choice;

        if (choice==1) {
            string username;
            cout << "Enter Username :- ";
            cin >> username;
            ptr->set_username(username); 
        }
        else if (choice==2) {
            string str;
            cout << "Enter Staff name :- ";
            cin >> str;
            ptr->set_name(str);
        }
        else if (choice==3) {
            string email;
            cout << "Enter Email :-";
            cin >> email;
            ptr->set_email(email);
        }
        else if (choice==4) {
            string phone_no;
            cout << "Enter Phone No :-";
            cin >> phone_no;
            ptr->set_phone_no(phone_no);
        }
        else if (choice==5){
            string date_of_birth;
            cout << "Enter Date Of Birth :-";
            cin >> date_of_birth;
            ptr->set_date_of_birth(date_of_birth);
        }
        else if (choice==6) {
            string designation;
            cout << "Enter designation :-";
            cin >> designation;
            ptr->set_designation(designation);
        }

        else if (choice==7){
            string str=ptr->get_username();
            cout<<"Username -"<<str<<endl;
        }
        else if (choice==8){
            string str=ptr->get_name();
            cout<<"Name -"<<str<<endl;
        }
        else if (choice==9){
            string str=ptr->get_email();
            cout<<"Email -"<<str<<endl;
        }
        else if (choice==10){
            string str=ptr->get_phone_no();
            cout<<"Phone number -"<<str<<endl;
        }
        else if (choice==11){
            string str=ptr->get_date_of_birth();
            cout<<"Date of birth -"<<str<<endl;
        }
        else if (choice==12){
            string str=ptr->get_designation();
            cout<<"Designation -"<<str<<endl; 
        }
        else if (choice==13){
            int x=ptr->get_staff_id();
            cout<<"Staff id -"<<x<<endl;
        }

        else if (choice==14){
            string str;
            int x;
            cout<<"Enter the date "<<endl;
            cin>>str;
            cout<<"Enter <1,0> ( 1 for present and 0 for absent ) "<<endl;
            cin>>x;
            ptr->add_date_for_attandence(str,x);
        }
        // else if (choice==15){
        //     ptr->mark_todays_attandence();
        // }
        else if (choice==16){
            string str;
            cout<<"Enter Address "<<endl;
            cin>>str;
            ptr->set_address(str);
        }
        else if (choice==17){
            string str =ptr->get_address();
            cout<<str<<endl;

        }
        else if (choice==18){
            int x;
            cout<<"Enter salary"<<endl;
            cin>>x;
            ptr->set_salary(x);
        }
        else if (choice==19){
            int x=ptr->get_salary();
            cout<<"salary  "<<x<<endl;
        }
        else if (choice==20){
            vector <pair <string ,int >> v;
            v=ptr->get_attendance_list();

            cout<<"Date"<<"        "<<"Status"<<endl;
            for(auto x: v){
                cout<<x.first<<"  "<<x.second<<endl;
            }
        
        }
        else if (choice==21) {
            int x;
            string str;
            cout<<"Enter the subject ";
            cin>>str;

            cout<<"Enter the batch ";
            cin>>x;
            ptr->add_subject(x,str);
        }

        else if (choice==22) {
            cout<<"Subject list is as follows " <<endl;
            ptr->get_subject();
        }
        
        else if (choice==23) {
            ptr->conduct_exam();

        }
        else if (choice==24) {
            int x;
            cout<<"Enter the branch ";
            cin>>x;
            ptr->set_batch_no(x);
        }
        else if (choice==25) {
            int x=ptr->get_batch_no();
            cout<<"Branch "<<x<<endl;
        }

        // else if (choice==19) {
        //     ptr->show_report();
        // }

        else if (choice==26) {
            int x=ptr->get_payment_done();
            cout<<x<<endl;
        }
        else if (choice==27) {
            string book;
            cout<<"Enter book name you want "<<endl;
            cin>>book;
            string date;
            // input or use prabhav function to fetch todays date 
            // now we are inputing 
            cout<<"Enter the todays date "<<endl;
            cin>>date;
            obj_library.issue_teacher(book,date,id);
        }

        else if (choice==28) {
            string book;
            cout<<"Enter book name you want to return "<<endl;
            cin>>book;
            string date;
            // input or use prabhav function to fetch todays date 
            // now we are inputing 
            cout<<"Enter the todays date ( return date ) "<<endl;
            cin>>date;
            obj_library.submit_teacher(id,book,date);            
        }



        
        else if (choice==29) {
            int id;
            cout<<"Enter the roll no of the student you want "<<endl;
            cin>>id;

            int check=0;

                int size=student_list.size();

                student *pointer;


                auto it=student_list.begin();
                for(int i=0;i<size;i++){
                    if (student_list[i].get_roll_no()==id) {
                        pointer=&student_list[i];
                        check=1;
                        break;
                    }
                    it++;
                }

                if (check==0) {
                    cout<<"The student with this id do not exist "<<endl;
                }

                else {

                    exam_marks m=ptr->give_marks();

                    // pointer->exam.push_back(m); // direct cannot give the marks
                    // so make a function in student 

                    pointer->add_exam_marks(m);

                }
                
        }

        else if (choice==31) {
            ptr->display();
        }
        else if (choice==32) {
            return;
        }


        else if (choice==30) {
            

                        int id;
                        cout<<"Enter your student id ";
                        cin>>id;

                        


                        int check=0;


                        int size=student_list.size();

                        student *pointer;


                        auto it=student_list.begin();
                        for(int i=0;i<size;i++){
                            if (student_list[i].get_roll_no()==id) {
                                pointer=&student_list[i];
                                check=1;
                                break;
                            }
                            it++;
                        }

                        if (check==0) {
                            cout<<"The student with this id do not exist "<<endl;
                        }
                        // check if the class teacher and student are of the same batch 
                        else if (pointer->get_standard()!=ptr->get_batch_no()) {
                            cout<<"You are not the class teacher of this batch (student belongs) --> so you cannot .... "<<endl;
                        }
                        else if (pointer->get_standard()==ptr->get_batch_no()) {

                            // can change    

                            while(1) {

                            cout<<"MENU "<<endl;
                            cout<<"---------------------------------"<<endl;
                            cout<<"Press 1 for change username "<<endl;
                            cout<<"Press 2 for change name "<<endl;
                            cout<<"Press 3 for change email "<<endl;
                            cout<<"Press 4 for change phone_no "<<endl;
                            cout<<"Press 5 for change date_of_birth "<<endl;
                            // cout<<"Press 6 for change standard "<<endl; --> check you can update the standard from here 
                            cout<<"Press 6 for get username "<<endl;
                            cout<<"Press 7 for get name "<<endl;
                            cout<<"Press 8 for get email "<<endl;
                            cout<<"Press 9 for get phone_no "<<endl;
                            cout<<"Press 10 for get date_of_birth "<<endl;
                            cout<<"Press 11 for get standard "<<endl;
                            cout<<"Press 12 for get roll no "<<endl;
                            // cout<<"Press 14 for add date for attendance "<<endl;
                            // cout<<"Press 15 for marking todays attendance "<<endl;
                            // cout<<"Press 16 to give exam"<<endl; 
                            cout<<"Press 13 to get the percentage "<<endl;
                            cout<<"Press 14 to get the attendance list "<<endl;
                            cout<<"Press 15 to get the report-card "<<endl;
                            
                            // new // bank  
                            // cout<<"Press 20 to pay the fees"<<endl;
                            // cout<<"Press 21 to get fee paid or not"<<endl;

                            // new // lib
                            // check if you like want the lib infro in student class as well or not 
                            // cout<<"Press 22 to issue a book " <<endl;
                            // cout<<"Press 23 to submit a book"<<endl;





                            
                            int choice1;
                            cout<<"Enter your choice "<<endl;
                            cin>>choice1;

                            if (choice1==1) {
                                string username;
                                cout << "Enter Username :- ";
                                cin >> username;
                                pointer->set_username(username); 
                            }
                            else if (choice1==2) {
                                string str;
                                cout << "Enter Student name :- ";
                                cin >> str;
                                pointer->set_name(str);
                            }
                            else if (choice1==3) {
                                string email;
                                cout << "Enter Email :-";
                                cin >> email;
                                pointer->set_email(email);
                            }
                            else if (choice1==4) {
                                string phone_no;
                                cout << "Enter Phone No :-";
                                cin >> phone_no;
                                pointer->set_phone_no(phone_no);
                            }
                            else if (choice1==5){
                                string date_of_birth;
                                cout << "Enter Date Of Birth :-";
                                cin >> date_of_birth;
                                pointer->set_date_of_birth(date_of_birth);
                            }
                            // else if (choice==6) {
                            //     int standard;
                            //     cout << "Enter Standard :-";
                            //     cin >> standard;
                            //     ptr->set_standard(standard);
                            // }

                            else if (choice1==6){
                                string str=pointer->get_username();
                                cout<<"Username -"<<str<<endl;
                            }
                            else if (choice1==7){
                                string str=pointer->get_name();
                                cout<<"Name -"<<str<<endl;
                            }
                            else if (choice1==8){
                                string str=pointer->get_email();
                                cout<<"Email -"<<str<<endl;
                            }
                            else if (choice1==9){
                                string str=pointer->get_phone_no();
                                cout<<"Phone number -"<<str<<endl;
                            }
                            else if (choice1==10){
                                string str=pointer->get_date_of_birth();
                                cout<<"Date of birth -"<<str<<endl;
                            }
                            else if (choice1==11){
                                int str=pointer->get_standard();
                                cout<<"Standard -"<<str<<endl;
                            }
                            else if (choice1==12){
                                int str=pointer->get_roll_no();
                                cout<<"Roll no -"<<str<<endl; 
                            }
                            // else if (choice==13){
                            //     string str;
                            //     int x;
                            //     cout<<"Enter the date "<<endl;
                            //     cin>>str;
                            //     cout<<"Enter <1,0> ( 1 for present and 0 for absent ) "<<endl;
                            //     cin>>x;
                            //     ptr->add_date_for_attandence(str,x);
                            // }
                            // else if (choice==15){
                            //     ptr->mark_todays_attandence();
                            // }
                            // else if (choice==16){
                            //     ptr->give_exam();
                            // }
                            else if (choice1==13){
                                float x=pointer->get_percentage();
                                cout<<"Percentage - "<<x<<endl;

                            }
                            else if (choice1==14){
                                vector <pair <string ,int >> v;
                                v=pointer->get_attendance_list();

                                cout<<"Date"<<"        "<<"Status"<<endl;
                                for(auto x: v){
                                    cout<<x.first<<"  "<<x.second<<endl;
                                }
                            
                            }
                            else if (choice1==15) {
                                pointer->show_report();
                            }


                            // else if (choice==20) {
                            //     // fix this fees somehow say 1000 store it somewhere
                            //     obj_bank.perform_student_transaction(ptr->get_roll_no(),1000);
                            //     ptr->set_fee_paid(1);
                            // }
                            
                            // else if (choice==21) {
                            //     int x=ptr->get_fee_paid();
                            //     cout<<x<<endl;
                            // }

                            //     else if (choice==22) {
                            //     string book;
                            //     cout<<"Enter book name you want "<<endl;
                            //     cin>>book;
                            //     string date;
                            //     // input or use prabhav function to fetch todays date 
                            //     // now we are inputing 
                            //     cout<<"Enter the todays date "<<endl;
                            //     cin>>date;
                            //     obj_library.issue_student(book,date,id);
                            // }

                            // else if (choice==23) {
                            //     string book;
                            //     cout<<"Enter book name you want to return "<<endl;
                            //     cin>>book;
                            //     string date;
                            //     // input or use prabhav function to fetch todays date 
                            //     // now we are inputing 
                            //     cout<<"Enter the todays date ( return date ) "<<endl;
                            //     cin>>date;
                            //     obj_library.issue_student(book,date,id);
                                
                            // /pointer
                            

                                    cout<<"Do you want to perform more functions < y/Y for yes > < n/N for no >";
                                    char ch;
                                    cin>>ch;

                                    if (ch=='y' || ch=='Y')  {
                                        // teacher_functions();
                                        continue;
                                    }
                                    else {
                                        // return;
                                        break; 
                                    }

                            } // while loop
                            

                        }






        }


        cout<<"Do you want to perform more functions < y/Y for yes > < n/N for no >";
        char ch;
        cin>>ch;

        if (ch=='y' || ch=='Y')  {
            // teacher_functions();
            continue;
        }
        else {
            // return;
            break; 
        }

} // while loop

 
} // else condition 


   
        
  
} // complete function 





// update status // check where to add --> while assigning percentage 
// teacher will assign marks --> then set percentage --> if percentage is greater than sth then 
// update status 

// choice 16 
// give exam --> check 
// change to go via the teacher

// int number_of_exams; --> use this 

void admin::  student_functions(){

    int id;
    cout<<"Enter your student id ";
    cin>>id;

    int check=0;

    int size=student_list.size();

    student *ptr;


    auto it=student_list.begin();
    for(int i=0;i<size;i++){
        if (student_list[i].get_roll_no()==id) {
            ptr=&student_list[i];
            check=1;
            break;
        }
        it++;
    }

    if (check==0) {
        cout<<"The student with this id do not exist "<<endl;
    }
    else {

while(1){

        cout<<"Student with this id "<<id<<" here !!"<<endl;
        cout<<"MENU "<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"Press 1 for change username "<<endl;
        cout<<"Press 2 for change name "<<endl;
        cout<<"Press 3 for change email "<<endl;
        cout<<"Press 4 for change phone_no "<<endl;
        cout<<"Press 5 for change date_of_birth "<<endl;
        cout<<"Press 6 for change standard "<<endl;
        cout<<"Press 7 for get username "<<endl;
        cout<<"Press 8 for get name "<<endl;
        cout<<"Press 9 for get email "<<endl;
        cout<<"Press 10 for get phone_no "<<endl;
        cout<<"Press 11 for get date_of_birth "<<endl;
        cout<<"Press 12 for get standard "<<endl;
        cout<<"Press 13 for get roll no "<<endl;
        cout<<"Press 14 for add date for attendance "<<endl;
        cout<<"Press 15 for marking todays attendance "<<endl;
        cout<<"Press 16 to give exam"<<endl; 
        cout<<"Press 17 to get the percentage "<<endl;
        cout<<"Press 18 to get the attendance list "<<endl;
        cout<<"Press 19 to get the report-card "<<endl;
        
        // new // bank  
        cout<<"Press 20 to pay the fees"<<endl;
        cout<<"Press 21 to get fee paid or not"<<endl;

        // new // lib
        // check if you like want the lib infro in student class as well or not 
        cout<<"Press 22 to issue a book " <<endl;
        cout<<"Press 23 to submit a book"<<endl;

        cout<<"Press 24 to display"<<endl;
        cout<<"Press 25 to give maths exam"<<endl; 

        cout<<"Press 26 to exit"<<endl;





        
        int choice;
        cout<<"Enter your choice "<<endl;
        cin>>choice;

        if (choice==1) {
            string username;
            cout << "Enter Username :- ";
            cin >> username;
            ptr->set_username(username); 
        }
        else if (choice==2) {
            string str;
            cout << "Enter Student name :- ";
            cin >> str;
            ptr->set_name(str);
        }
        else if (choice==3) {
            string email;
            cout << "Enter Email :-";
            cin >> email;
            ptr->set_email(email);
        }
        else if (choice==4) {
            string phone_no;
            cout << "Enter Phone No :-";
            cin >> phone_no;
            ptr->set_phone_no(phone_no);
        }
        else if (choice==5){
            string date_of_birth;
            cout << "Enter Date Of Birth :-";
            cin >> date_of_birth;
            ptr->set_date_of_birth(date_of_birth);
        }
        else if (choice==6) {
            int standard;
            cout << "Enter Standard :-";
            cin >> standard;
            ptr->set_standard(standard);
        }

        else if (choice==7){
            string str=ptr->get_username();
            cout<<"Username -"<<str<<endl;
        }
        else if (choice==8){
            string str=ptr->get_name();
            cout<<"Name -"<<str<<endl;
        }
        else if (choice==9){
            string str=ptr->get_email();
            cout<<"Email -"<<str<<endl;
        }
        else if (choice==10){
            string str=ptr->get_phone_no();
            cout<<"Phone number -"<<str<<endl;
        }
        else if (choice==11){
            string str=ptr->get_date_of_birth();
            cout<<"Date of birth -"<<str<<endl;
        }
        else if (choice==12){
            int str=ptr->get_standard();
            cout<<"Standard -"<<str<<endl;
        }
        else if (choice==13){
            int str=ptr->get_roll_no();
            cout<<"Roll no -"<<str<<endl; 
        }
        else if (choice==14){
            string str;
            int x;
            cout<<"Enter the date "<<endl;
            cin>>str;
            cout<<"Enter <1,0> ( 1 for present and 0 for absent ) "<<endl;
            cin>>x;
            ptr->add_date_for_attandence(str,x);
        }
        // else if (choice==15){
        //     ptr->mark_todays_attandence();
        // }
        else if (choice==16){
            ptr->give_exam();
        }
        else if (choice==17){
            float x=ptr->get_percentage();
            cout<<"Percentage - "<<x<<endl;

        }
        else if (choice==18){
            vector <pair <string ,int >> v;
            v=ptr->get_attendance_list();

            cout<<"Date"<<"        "<<"Status"<<endl;
            for(auto x: v){
                cout<<x.first<<"  "<<x.second<<endl;
            }
        
        }
        else if (choice==19) {
            ptr->show_report();
        }


        else if (choice==20) {
            // fix this fees somehow say 1000 store it somewhere
            obj_bank.perform_student_transaction(ptr->get_roll_no(),1000);
            ptr->set_fee_paid(1);
        }
        
        else if (choice==21) {
            int x=ptr->get_fee_paid();
            cout<<x<<endl;
        }

        else if (choice==22) {
            string book;
            cout<<"Enter book name you want "<<endl;
            cin>>book;
            string date;
            // input or use prabhav function to fetch todays date 
            // now we are inputing 
            cout<<"Enter the todays date "<<endl;
            cin>>date;
            obj_library.issue_student(book,date,id);
        }

        else if (choice==23) {
            string book;
            cout<<"Enter book name you want to return "<<endl;
            cin>>book;
            string date;
            // input or use prabhav function to fetch todays date 
            // now we are inputing 
            cout<<"Enter the todays date ( return date ) "<<endl;
            cin>>date;
            obj_library.submit_student(id,book,date);
            
        }


        else if (choice==24) {
            ptr->display();
        }
        else if (choice==25){
            ptr->give_maths_exam();
        }
        else if (choice==26) {
            return ;
        }


        cout<<"Do you want to perform more functions < y/Y for yes > < n/N for no >";
        char ch;
        cin>>ch;

        if (ch=='y' || ch=='Y')  {
            // teacher_functions();
            continue;
        }
        else {
            // return;
            break; 
        }

} // while loop

 
} // else condition 


   
        
  
} // complete function 




void admin:: class_monitor_functions(){

    int id;
    cout<<"Enter your student id ";
    cin>>id;

    int check=0;

    int size=class_monitor_list.size();

    class_monitor *ptr;


    auto it=class_monitor_list.begin();
    for(int i=0;i<size;i++){
        if (class_monitor_list[i].get_roll_no()==id) {
            ptr=&class_monitor_list[i];
            check=1;
            break;
        }
        it++;
    }

    if (check==0) {
        cout<<"The student with this id do not exist "<<endl;
    }
    else {


while(1){

        cout<<"The class monitor (student) with this id"<<id<< " here"<<endl;
        cout<<"MENU "<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"Press 1 for change username "<<endl;
        cout<<"Press 2 for change name "<<endl;
        cout<<"Press 3 for change email "<<endl;
        cout<<"Press 4 for change phone_no "<<endl;
        cout<<"Press 5 for change date_of_birth "<<endl;
        cout<<"Press 6 for change standard "<<endl;
        cout<<"Press 7 for get username "<<endl;
        cout<<"Press 8 for get name "<<endl;
        cout<<"Press 9 for get email "<<endl;
        cout<<"Press 10 for get phone_no "<<endl;
        cout<<"Press 11 for get date_of_birth "<<endl;
        cout<<"Press 12 for get standard "<<endl;
        cout<<"Press 13 for get roll no "<<endl;
        cout<<"Press 14 for add date for attendance "<<endl;
        cout<<"Press 15 for marking todays attendance "<<endl;
        cout<<"Press 16 to give exam"<<endl; 
        cout<<"Press 17 to get the percentage "<<endl;
        cout<<"Press 18 to get the attendance list "<<endl;
        cout<<"Press 19 to get the report-card "<<endl;
        
        // unique here 
        // cout<<"Press 20 to change standard you are monitoring"<<endl;
        // cout<<"Press 21 to get the standard you are monitoring"<<endl;
        cout<<"Press 22 to maintain the class"<<endl;
// new 
        cout<<"Press 23 to pay the fees"<<endl;
        cout<<"Press 24 to get fee paid or not"<<endl;
        
        // new // lib
        // check if you like want the lib infro in student class as well or not 
        cout<<"Press 25 to issue a book " <<endl;
        cout<<"Press 26 to submit a book"<<endl;


        cout<<"Press 27 to display"<<endl;
        cout<<"Press 28 to exit"<<endl;        
        
        int choice;
        cout<<"Enter your choice "<<endl;
        cin>>choice;

        if (choice==1) {
            string username;
            cout << "Enter Username :- ";
            cin >> username;
            ptr->set_username(username); 
        }
        else if (choice==2) {
            string str;
            cout << "Enter Student name :- ";
            cin >> str;
            ptr->set_name(str);
        }
        else if (choice==3) {
            string email;
            cout << "Enter Email :-";
            cin >> email;
            ptr->set_email(email);
        }
        else if (choice==4) {
            string phone_no;
            cout << "Enter Phone No :-";
            cin >> phone_no;
            ptr->set_phone_no(phone_no);
        }
        else if (choice==5){
            string date_of_birth;
            cout << "Enter Date Of Birth :-";
            cin >> date_of_birth;
            ptr->set_date_of_birth(date_of_birth);
        }
        else if (choice==6) {
            int standard;
            cout << "Enter Standard :-";
            cin >> standard;
            ptr->set_standard(standard);
        }

        else if (choice==7){
            string str=ptr->get_username();
            cout<<"Username -"<<str<<endl;
        }
        else if (choice==8){
            string str=ptr->get_name();
            cout<<"Name -"<<str<<endl;
        }
        else if (choice==9){
            string str=ptr->get_email();
            cout<<"Email -"<<str<<endl;
        }
        else if (choice==10){
            string str=ptr->get_phone_no();
            cout<<"Phone number -"<<str<<endl;
        }
        else if (choice==11){
            string str=ptr->get_date_of_birth();
            cout<<"Date of birth -"<<str<<endl;
        }
        else if (choice==12){
            int str=ptr->get_standard();
            cout<<"Standard -"<<str<<endl;
        }
        else if (choice==13){
            int str=ptr->get_roll_no();
            cout<<"Roll no -"<<str<<endl; 
        }
        else if (choice==14){
            string str;
            int x;
            cout<<"Enter the date "<<endl;
            cin>>str;
            cout<<"Enter <1,0> ( 1 for present and 0 for absent ) "<<endl;
            cin>>x;
            ptr->add_date_for_attandence(str,x);
        }
        // else if (choice==15){
        //     ptr->mark_todays_attandence();
        // }
        else if (choice==16){
            ptr->give_exam();
        }
        else if (choice==17){
            float x=ptr->get_percentage();
            cout<<"Percentage - "<<x<<endl;

        }
        else if (choice==18){
            vector <pair <string ,int >> v;
            v=ptr->get_attendance_list();

            cout<<"Date"<<"        "<<"Status"<<endl;
            for(auto x: v){
                cout<<x.first<<"  "<<x.second<<endl;
            }
        
        }
        else if (choice==19) {
            ptr->show_report();
        }
        // else if (choice==20) {
        //     int x;
        //     cout<<"Enter the standard you are monitoring"<<endl;
        //     cin>>x;
        //     ptr->set_standard(x);
        // }
        // else if (choice==21) {
        //     int x=ptr->get_standard();
        //     cout<<"Standard you are monitoring "<<x<<endl;
        // }
        else if (choice==22) {
            ptr->maintain_the_class();
        }

        else if (choice==23) {
            // fix this fees somehow say 1000 store it somewhere
            obj_bank.perform_student_transaction(ptr->get_roll_no(),1000);
            ptr->set_fee_paid(1);
        }

        
        else if (choice==24) {
            int x=ptr->get_fee_paid();
            cout<<x<<endl;
        }

         else if (choice==25) {
            string book;
            cout<<"Enter book name you want "<<endl;
            cin>>book;
            string date;
            // input or use prabhav function to fetch todays date 
            // now we are inputing 
            cout<<"Enter the todays date "<<endl;
            cin>>date;
            obj_library.issue_student(book,date,id);
        }

        else if (choice==26) {
            string book;
            cout<<"Enter book name you want to return "<<endl;
            cin>>book;
            string date;
            // input or use prabhav function to fetch todays date 
            // now we are inputing 
            cout<<"Enter the todays date ( return date ) "<<endl;
            cin>>date;
            obj_library.issue_student(book,date,id);
            
        }

        else if (choice==27) {
            ptr->display();
        }
        else if (choice==28) {
            return ;
        }

        
        cout<<"Do you want to perform more functions < y/Y for yes > < n/N for no >";
        char ch;
        cin>>ch;

        if (ch=='y' || ch=='Y')  {
            // teacher_functions();
            continue;
        }
        else {
            // return;
            break; 
        }

} // while loop

 
} // else condition 


   
        
  
} // complete function 






void admin::leader_functions(){
    int id;
    cout<<"Enter your student id ";
    cin>>id;

    int check=0;

    int size=leader_list.size();

    leader *ptr;


    auto it=leader_list.begin();
    for(int i=0;i<size;i++){
        if (leader_list[i].get_roll_no()==id) {
            ptr=&leader_list[i];
            check=1;
            break;
        }
        it++;
    }

    if (check==0) {
        cout<<"The student with this id do not exist "<<endl;
    }
    else {

while(1) {

        cout<<"The leader student with this id "<<id<<" here"<<endl;
        cout<<"MENU "<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"Press 1 for change username "<<endl;
        cout<<"Press 2 for change name "<<endl;
        cout<<"Press 3 for change email "<<endl;
        cout<<"Press 4 for change phone_no "<<endl;
        cout<<"Press 5 for change date_of_birth "<<endl;
        cout<<"Press 6 for change standard "<<endl;
        cout<<"Press 7 for get username "<<endl;
        cout<<"Press 8 for get name "<<endl;
        cout<<"Press 9 for get email "<<endl;
        cout<<"Press 10 for get phone_no "<<endl;
        cout<<"Press 11 for get date_of_birth "<<endl;
        cout<<"Press 12 for get standard "<<endl;
        cout<<"Press 13 for get roll no "<<endl;
        cout<<"Press 14 for add date for attendance "<<endl;
        cout<<"Press 15 for marking todays attendance "<<endl;
        cout<<"Press 16 to give exam"<<endl; 
        cout<<"Press 17 to get the percentage "<<endl;
        cout<<"Press 18 to get the attendance list "<<endl;
        cout<<"Press 19 to get the report-card "<<endl;
        
                // unique here 
        cout<<"Press 20 to change standard you are monitoring"<<endl;
        cout<<"Press 21 to get the standard you are monitoring"<<endl;
        cout<<"Press 22 to maintain the class"<<endl;

        cout<<"Press 23 to maintain the monitors "<<endl; 

// new 
        cout<<"Press 24 to pay the fees"<<endl;
        cout<<"Press 25 to get fee paid or not"<<endl;
        
                // new // lib
        // check if you like want the lib infro in student class as well or not 
        cout<<"Press 26 to issue a book " <<endl;
        cout<<"Press 27 to submit a book"<<endl;


        cout<<"Press 28 to display"<<endl;
        cout<<"Press 29 to exit"<<endl;
        
        int choice;
        cout<<"Enter your choice "<<endl;
        cin>>choice;

        if (choice==1) {
            string username;
            cout << "Enter Username :- ";
            cin >> username;
            ptr->set_username(username); 
        }
        else if (choice==2) {
            string str;
            cout << "Enter Student name :- ";
            cin >> str;
            ptr->set_name(str);
        }
        else if (choice==3) {
            string email;
            cout << "Enter Email :-";
            cin >> email;
            ptr->set_email(email);
        }
        else if (choice==4) {
            string phone_no;
            cout << "Enter Phone No :-";
            cin >> phone_no;
            ptr->set_phone_no(phone_no);
        }
        else if (choice==5){
            string date_of_birth;
            cout << "Enter Date Of Birth :-";
            cin >> date_of_birth;
            ptr->set_date_of_birth(date_of_birth);
        }
        else if (choice==6) {
            int standard;
            cout << "Enter Standard :-";
            cin >> standard;
            ptr->set_standard(standard);
        }

        else if (choice==7){
            string str=ptr->get_username();
            cout<<"Username -"<<str<<endl;
        }
        else if (choice==8){
            string str=ptr->get_name();
            cout<<"Name -"<<str<<endl;
        }
        else if (choice==9){
            string str=ptr->get_email();
            cout<<"Email -"<<str<<endl;
        }
        else if (choice==10){
            string str=ptr->get_phone_no();
            cout<<"Phone number -"<<str<<endl;
        }
        else if (choice==11){
            string str=ptr->get_date_of_birth();
            cout<<"Date of birth -"<<str<<endl;
        }
        else if (choice==12){
            int str=ptr->get_standard();
            cout<<"Standard -"<<str<<endl;
        }
        else if (choice==13){
            int str=ptr->get_roll_no();
            cout<<"Roll no -"<<str<<endl; 
        }
        else if (choice==14){
            string str;
            int x;
            cout<<"Enter the date "<<endl;
            cin>>str;
            cout<<"Enter <1,0> ( 1 for present and 0 for absent ) "<<endl;
            cin>>x;
            ptr->add_date_for_attandence(str,x);
        }
        // else if (choice==15){
        //     ptr->mark_todays_attandence();
        // }
        else if (choice==16){
            ptr->give_exam();
        }
        else if (choice==17){
            float x=ptr->get_percentage();
            cout<<"Percentage - "<<x<<endl;

        }
        else if (choice==18){
            vector <pair <string ,int >> v;
            v=ptr->get_attendance_list();

            cout<<"Date"<<"        "<<"Status"<<endl;
            for(auto x: v){
                cout<<x.first<<"  "<<x.second<<endl;
            }
        
        }
        else if (choice==19) {
            ptr->show_report();
        }

       else if (choice==20) {
            int x;
            cout<<"Enter the standard you are monitoring"<<endl;
            cin>>x;
            ptr->set_standard(x);
        }
        else if (choice==21) {
            int x=ptr->get_standard();
            cout<<"Standard you are monitoring "<<x<<endl;
        }
        else if (choice==22) {
            ptr->maintain_the_class();
        }


        // unique
        else if (choice==23) {
            ptr->maintain_the_monitor();
        }

        else if (choice==24) {
            // fix this fees somehow say 1000 store it somewhere
            obj_bank.perform_student_transaction(ptr->get_roll_no(),1000);
            ptr->set_fee_paid(1);
        }

        

        
        else if (choice==25) {
            int x=ptr->get_fee_paid();
            cout<<x<<endl;
        }

         else if (choice==26) {
            string book;
            cout<<"Enter book name you want "<<endl;
            cin>>book;
            string date;
            // input or use prabhav function to fetch todays date 
            // now we are inputing 
            cout<<"Enter the todays date "<<endl;
            cin>>date;
            obj_library.issue_student(book,date,id);
        }

        else if (choice==27) {
            string book;
            cout<<"Enter book name you want to return "<<endl;
            cin>>book;
            string date;
            // input or use prabhav function to fetch todays date 
            // now we are inputing 
            cout<<"Enter the todays date ( return date ) "<<endl;
            cin>>date;
            obj_library.issue_student(book,date,id);
            
        }

        

        else if (choice==28) {
            ptr->display();
        }
        else if (choice==29) {
            return ;
        }
        

        cout<<"Do you want to perform more functions < y/Y for yes > < n/N for no >";
        char ch;
        cin>>ch;

        if (ch=='y' || ch=='Y')  {
            // teacher_functions();
            continue;
        }
        else {
            // return;
            break; 
        }

} // while loop

 
} // else condition 


   
        
  
} // complete function 

