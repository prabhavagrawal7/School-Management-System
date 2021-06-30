#include <bits/stdc++.h>
#include "attendance.h"
using namespace std;

class Student : public Attendance
{
public:
    static int counter;                         // Admission No.
    int roll_no;                                // Roll No
    string name;                                // Name of the Student
    int standard;                               // Class of the student
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
    void mark_attendance()
    {
        Attendance::mark_attendance();
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