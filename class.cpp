#include <bits/stdc++.h>
using namespace std;

class Staff
{
public:
    static int counter;
    string staff_id;
    string designation;
    string name;
    string dob;
    string address;
    string email;
    string mobile_no;
    int salary;
    void add_credentials(string staff_id, string designation, string name, string dob = "NA", string address = "NA",
                         string email = "NA", string mobile_no = "NA", int salary = -1)
    {
        this->staff_id = staff_id;
        this->designation = designation;
        this->name = name;
        this->dob = dob;
        this->address = address;
        this->email = email;
        this->mobile_no = mobile_no;
        this->salary = salary;
        counter++;
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
    string subject;         // subject taught by the Teacher
    vector<string> batches; //batches hold by the corresponding Teacher
    string post;
    void add_credentials(string subject, string staff_id, string designation, string name, string dob = "NA", string address = "NA",
                         string email = "NA", string mobile_no = "NA", int salary = -1)
    {
        this->subject = subject;
        Staff::add_credentials(staff_id, designation, name, dob, address, email, mobile_no, salary);
    }
};

int main()
{
}
