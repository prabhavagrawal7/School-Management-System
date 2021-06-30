#include <bits/stdc++.h>
#include "class_sleep.h"
using namespace std;

class LoginSystem
{
private:
    // here all the email id and passwords are being stored along with the access rights
    string password = "!234#$abc";
    string username = "Prabhav";
    string access_rights = "ADMIN";
    // map<tuple<string, string>, string> credentials;

public:
    void add_new_entry(string username, string password, string access_rights)
    {
        // credentials[make_tuple(username, password)] = access_rights;
    }

    string username_attempted;
    string password_attempted;
    string choice;

    bool accessgranted;
    void login()
    {
        static int login_attempts;
        string username_attempted;
        cout << "Enter Your Username:- ";
        cin >> username_attempted;
        cout << "Enter Your Password:- ";
        cin >> password_attempted;
        if (username == username_attempted && password == password_attempted)
        {
            cout << "Account Logged In!\n";
            cout << "ACCESS LEVEL :- " << access_rights << '\n';
            if (access_rights == "ADMIN")
            {
                //GIVING ACCESS TO ALL FUNCTIONS
            }
            else if (access_rights == "STUDENT")
            {
                //GIVING ACCESS TO STUDENT
            }
            else if (access_rights == "TEACHER")
            {
                //GIVING ACCESS TO TEACHER FUNCTIONS
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
        else
        {
            if (login_attempts == 5)
            {
                cout << "Too Many Login Attempts!\n"
                     << "Wait for 30 seconds\n";
                sleep(30.0);
            }
            cout << "Invalid Username Attempted!!!\nPlease Try Again!\n";
            sleep(5.0);
            system("clear");
            login();
        }
    }
};

int main()
{
    cout << "Welcome Sir/Mam\n"
         << "Please login into your account\n";
    LoginSystem login;
    login.login();
    system("clear");
    return 0;
}