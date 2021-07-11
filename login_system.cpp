#include<bits/stdc++.h>
using namespace std;

#include "login_system.h"

//#include"common.h"


void sleep(float seconds)
{
    clock_t startClock = clock();
    float secondsAhead = seconds * CLOCKS_PER_SEC;
    // do nothing until the elapsed time has passed.
    while (clock() < startClock + secondsAhead);
    return;
}




void LoginSystem :: login() {
        static int login_attempts;

        accessgranted =0;

        login_attempts++;

        string username_attempted;
        cout << "Enter Your Username:- ";
        cin >> username_attempted;
        cout << "Enter Your Password:- ";
        cin >> password_attempted;

for(int i=0;i<7;i++) {

        if (username[i] == username_attempted && password[i] == password_attempted)
        {
            
            accessgranted=1;

            cout << "Account Logged In!\n";
            cout << "ACCESS LEVEL :- " << access_rights[i] << '\n';
            if (access_rights[i] == "ADMIN")
            {
                //GIVING ACCESS TO ALL FUNCTIONS
                // admin class 
                admin1.admin_functions();
            }
            else if (access_rights[i] == "STUDENT")
            {
                //GIVING ACCESS TO STUDENT
                // student class
                admin1.student_functions();
            }
            else if (access_rights[i] == "TEACHER")
            {
                //GIVING ACCESS TO TEACHER FUNCTIONS
                // teacher class
                admin1.teacher_functions();
            }
            else if (access_rights[i] == "STAFF")
            {
                //GIVING ACCESS TO STAFF FUNCTIONS
                // staff class
                admin1.staff_functions();
            }

            else if (access_rights[i] == "CLASS_TEACHER"){
                admin1.class_teacher_functions();
            }
            
            else if (access_rights[i] == "CLASS_MONITOR"){
                admin1.class_monitor_functions();
            }

            else if (access_rights[i] == "LEADER") {
                admin1.leader_functions();
            }


            cout << "Wish to log out or leave\n"
                 << "Press and enter (LO) for log out or (L) for leave\n";
            string ending;
            cin >> ending;
            if (ending == "LO" || ending == "lo")
                login();
            else
                exit(0);
        }


}    

        // else
        // {

        if (accessgranted==0) {

            if (login_attempts == 5)
            {
                cout << "Too Many Login Attempts!\n"
                     << "Wait for 30 seconds\n";
                sleep(30.0);
            }

            cout << "Invalid Username Attempted!!!\nPlease Try Again!\n";
            
            sleep(5.0);
            // system("clear"); // check 
            login();

        }

        // }


    }
