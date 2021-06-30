#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    static int counter;                         // Admission No.
    int roll_no;                                // Roll No
    string name;                                // Name of the Student
    int standard;                               // Class of the student
    map<tuple<int, int, int>, bool> attendance; // tuple in the form of <yy, mm, dd> || 0 for absent, 1 for present
    void credentials(string name, int roll_no, int standard = 1)
    {
        this->name = name;
        this->roll_no = roll_no;
        this->standard = standard;
    }

    void update_standard(bool pass)
    {
        if (pass)
        {
            standard++;
        }
    }
    void mark_attendance(int day = 0, int month = 0, int year = 0)
    {
        time_t now = time(0);
        tm *ltm = localtime(&now);
        if (day == 0)
        {
            day = ltm->tm_mday;
        }
        if (month == 0)
        {
            month = ltm->tm_mon + 1;
        }
        if (year == 0)
        {
            year = ltm->tm_year + 1900;
        }
        cout << "Admission no :- " << counter
             << "Student Name :- " << name
             << endl;
        char attended;
        cin >> attended;
        if (attended == 'P' || attended == 'p') //Marking as present
        {
            attendance[make_tuple(year, month, day)] = 1;
        }
        else
        {
            attendance[make_tuple(year, month, day)] = 1;
        }
    }
};

int uniqueid = 0;
class Batch
{
public:
    map<int, Student> bachhe;
    vector<vector<bool>> all_attendance;
    void add_student(string name, int roll_no)
    {
        Student a;
        a.credentials(name, roll_no);
        bachhe[uniqueid++] = a;
    }
    void update_batch_standard()
    {
        for (auto &bachha : bachhe)
        {
            bachha.second.update_standard(1);
        }
    }
    void attendance()
    {
        cout << "INPUT (P) FOR PRESENT, INPUT (A) FOR ABSENT\n";
        for (auto bachha : bachhe)
        {
            bachha.second.mark_attendance();
        }
    }
};

class Staff
{
public:
    string staff_id;
    string designation;
    string name;
    string dob;
    string address;
    string email;
    string mobile_no;
    int salary;
    Staff(string staff_id, string designation, string name, string dob = "NA", string address = "NA",
          string email = "NA", string mobile_no = "NA", int salary = 0)
    {
        this->staff_id = staff_id;
        this->designation = designation;
        this->name = name;
        this->dob = dob;
        this->address = address;
        this->email = email;
        this->mobile_no = mobile_no;
        this->salary = salary;
    }

    void change_designation(string designation)
    {
        this->designation = designation;
    }
    void change_name(string name)
    {
        this->name = name;
    }
    void change_dob(string dob)
    {
        this->dob = dob;
    }
    void change_address(string address)
    {
        this->address = address;
    }
    void change_email(string email)
    {
        this->email = email;
    }
    void change_mobile_no(string mobile_no)
    {
        this->mobile_no = mobile_no;
    }
    void change_salary(int salary)
    {
        this->salary = salary;
    }
};

class Teacher : public Staff
{
public:
    // string Teacher_id;
    vector<string> subjects; // subjects taught by Teacher
    vector<string> batches;  //batches hold by the corresponding Teacher
    vector<string> post;
    // void credentials(string staff_id, string designation, string name, string dob = "NA", string address = "NA",
    //         string email = "NA", string mobile_no = "NA", int salary = 0)
    //         : Staff(staff_id, designation, name, dob, address, email, mobile_no, salary)
    // {
        
    // }
};

int main()
{

    Batch b1;
    b1.add_student("Akshay", 2020008);
    b1.add_student("Aditya", 2020023);
    Batch b2;
    b2.add_student("Ankit Chaudhary", 2020034);
    vector<string> subjects = {"HELLO", "WORLD"}, batches = {"CC", "MC", "BC"};
    // Teacher a("hello", subjects, batches, "abc", "xyzz");
    b1.attendance();
    b2.attendance();
}





