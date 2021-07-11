#ifndef __LOGIN_SYSTEM
#define __LOGIN_SYSTEM

#include<bits/stdc++.h>
using namespace std;
 
//#include"common.h"
#include"admin.h"


#include "exam_marks.h"

class LoginSystem
{
private:
    // here all the email id and passwords are being stored along with the access rights
    // string password = "1234#$abc";
    // string username = "Prabhav";
    // string access_rights = "ADMIN";

    // map<tuple<string, string>, string> credentials;

    // string password[7]={"12#$abc","34#$abc","56#$abc","78#$abc","a","b","c"};


    string password[7]={"12","34","56","78","a","b","c"};
    string username[7]={"Prabhav","Akshay","Ankit","Aditya","A","B","C"};
    string access_rights[7]={"ADMIN","TEACHER","STUDENT","STAFF","CLASS_TEACHER","CLASS_MONITOR","LEADER"};
    



    string username_attempted;
    string password_attempted;
    string choice;


    bool accessgranted;

public:

    // void add_new_entry(string username, string password, string access_rights)
    // {
    //     // credentials[make_tuple(username, password)] = access_rights;
    // }

    // string username_attempted;
    // string password_attempted;
    // string choice;

    // bool accessgranted;

   
//    Library L1;
//    L1.add_book("maths",true);
//    L1.add_book("english",true);
//    L1.add_book("history",false);
//    L1.issue_student("maths","07/10/2022",23);
//    L1.submit_student(23,1,"27/10/2022");
//    L1.issue_teacher("maths","17/07/2022",12);
//    L1.issue_teacher("history","17/07/2022",1teacher

    admin admin1;


    void login();


};



#endif