#include<bits/stdc++.h>
using namespace std;

#include "library.h"

//#include"common.h"


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



void Library::display(){
    cout<<"Student store "<<endl;
    cout<<"---------------------------"<<endl;
    for(auto x: student_store){
        cout<<x.book_id<<"   "<<x.name<<"   "<<x.check<<endl;
    }
 
    cout<<"Teacher store "<<endl;
    cout<<"---------------------------"<<endl;
    for(auto x: teacher_store){
        cout<<x.book_id<<"   "<<x.name<<"   "<<x.check<<endl;
    }


    cout<<"Student record"<<endl;
    cout<<"---------------------------"<<endl;

    for(auto x: student_record ){
        cout<<x.first<<"  -->   ";
        for(auto y: x.second){
            cout<<y.book_id<<" "<<y.name<<" "<<y.issue_date<< " "<<y.return_date<<endl;
        }
    
    }


    cout<<"Teacher record"<<endl;
    cout<<"---------------------------"<<endl;

    for(auto x: teacher_record ){
        cout<<x.first<<"  -->   ";
        for(auto y: x.second){
            cout<<y.book_id<<" "<<y.name<<" "<<y.issue_date<< " "<<y.return_date<<endl;
        }
    
    }



}



int Library :: student_book_id=1000;

int Library :: teacher_book_id=1000;



void Library::add_book(string s, int flag)
{

    if (flag==1)
        add_to_students_store(s);
    else
        add_to_teachers_store(s);
    
}

void Library::add_to_students_store(string name11)
{
    student_book_id++;

    struct book_detail obj1;
    obj1.name = name11;
    obj1.book_id=student_book_id;
    obj1.check=0;

    student_store.push_back(obj1);

    cout << "Book successfully added to students's store...." << endl;
    return;
}

void Library::add_to_teachers_store(string name11)
{
    teacher_book_id++;

    
    struct book_detail obj1;
    obj1.name = name11;
    obj1.book_id=teacher_book_id;
    obj1.check=0;

    teacher_store.push_back(obj1);

    cout << "Book successfully added to teacher's store...." << endl;
    return;
}





int Library::get_id_student(string name_of_the_book)
{
    for(auto x: student_store){
        // cout<<x.first.first<<"   "<<x.first.second<<"   "<<x.second<<endl;
        if (x.name==name_of_the_book) {
            
            return x.book_id;
        }
    }
    return -1;
}

int Library::get_id_teacher(string name_of_the_book)
{
    for(auto x: teacher_store){
        // cout<<x.first.first<<"   "<<x.first.second<<"   "<<x.second<<endl;
        if (x.name==name_of_the_book) {
            return x.book_id;
        }
    }
    return -1;
}



void Library :: issue_student(string name , string date, int id ) {
    int checker=0;

    for(auto &x: student_store){
        // cout<<x.first.first<<"   "<<x.first.second<<"   "<<x.second<<endl;
        if (x.name==name) {
            
            checker=1;

            // return x.first.first;
            if (x.check==0) {
                x.check=1;
                
                struct entry_detail obj1;
                obj1.book_id=get_id_student(name);
                obj1.name=name;
                obj1.issue_date=date;
                obj1.return_date="-";

                student_record[id].push_back(obj1);

                cout<<"Book added sussessfully "<<endl;

            }
            else {
                cout<<"Book already taken "<<endl;
            }

        }
    }


    if (checker==0) {
        cout<<"Book is not present "<<endl;
    }


}

void Library:: submit_student(int id,string name,string return_date) {
    int check1=0;
    int check2=0;

    for(auto& x:student_record) {
        
        if (x.first==id){
            check1=0;
            check2=1;
            for (auto &y : x.second)  {

                if (y.name==name) {
                    check1=1;
                    if (y.return_date=="-") {
                        y.return_date=return_date;

                        for(auto &z:student_store){
                            if (z.name==name){
                                z.check=0;
                            }
                        }


                        cout<<"Returned successfully !!"<<endl;
                    }
                    else {
                        cout<<"Already returned !!" <<endl;
                    }
                }

            }
            if (check1==0) {
                cout<<"Student exist but no such book exist "<<endl;
            }
        }



    }

    if (check2==0) {
        cout<<"No such student exist !!"<<endl;
    }

}




void Library :: issue_teacher(string name , string date, int id ) {

    int checker=0;

    for(auto &x: teacher_store){
        // cout<<x.first.first<<"   "<<x.first.second<<"   "<<x.second<<endl;
        if (x.name==name) {
            
            checker=1;

            // return x.first.first;
            if (x.check==0) {
                x.check=1;
                
                struct entry_detail obj1;
                obj1.book_id=get_id_teacher(name);
                obj1.name=name;
                obj1.issue_date=date;
                obj1.return_date="-";

                teacher_record[id].push_back(obj1);

                cout<<"Book added sussessfully "<<endl;

            }
            else {
                cout<<"Book already taken "<<endl;
            }

        }
    }


    if (checker==0) {
        cout<<"Book is not present "<<endl;
    }


}

void Library:: submit_teacher(int id,string name,string return_date) {
    int check1=0;
    int check2=0;

    for(auto& x:teacher_record) {
        
        if (x.first==id){
            check1=0;
            check2=1;
            for (auto &y : x.second)  {

                if (y.name==name) {
                    check1=1;
                    if (y.return_date=="-") {
                        y.return_date=return_date;

                        for(auto &z:student_store){
                            if (z.name==name){
                                z.check=0;
                            }
                        }

                        cout<<"Returned successfully !!"<<endl;
                    }
                    else {
                        cout<<"Already returned !!" <<endl;
                    }
                }

            }
            if (check1==0) {
                cout<<"Teacher exist but no such book exist "<<endl;
            }
        }



    }

    if (check2==0) {
        cout<<"No such student exist !!"<<endl;
    }

}


