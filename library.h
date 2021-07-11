#ifndef __LIBRARY
#define __LIBRARY

#include<bits/stdc++.h>
using namespace std;

//#include"common.h"

#include"entry_detail.h"

// struct entry_detail {
//     int book_id;
//     string name;
//     string issue_date;
//     string return_date;
// };

// struct book_detail {
//     int book_id;
//     string name;
//     int check;
// };



class Library
{
private:

 
    static int student_book_id;
    static int teacher_book_id;
 
    // map <int,string > student_books; // for fast getting the student and id from
    // map <int,string > teacher_books; 

    vector <book_detail> student_store;
    vector <book_detail> teacher_store;

   
    map <int ,vector < entry_detail >  > student_record;
    map <int ,vector < entry_detail >  > teacher_record;


public:
           void add_book(string, int); // parameter (name of the book, 1 --> stdent/  2 --> teacher))

        //    void distributer(string, bool);

           void add_to_students_store(string);
           void add_to_teachers_store(string);


           int get_id_student(string);  // returns the id of the book with given name from students store
           int get_id_teacher(string);  // returns the id of the book with given name from teachers store

        
        void issue_student(string,string,int);          // name of book, date of issue of book,roll no of the student
        // bool check_due_book(int);                 // check wehether a student has submitted all the previously issued books or not...............parameters(roll no of the student)



        //   void test_func();

        //   void submit_student(int,int,string);   // roll_no, id_of_book , date of submission , 
        void submit_student(int ,string ,string); // roll_no , book name , date of submission
        //   bool check_due_book(int);                 // check wehether a student has submitted all the previously issued books or not...............parameters(roll no of the student)
          
         
        void issue_teacher(string,string,int);
          
        //   void submit_teacher(int,int,string);
        void submit_teacher(int , string, string); // staff id , book name , date of submission 

        void display();

};


#endif
