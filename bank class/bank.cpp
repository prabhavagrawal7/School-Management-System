#include <bits/stdc++.h>
#include "bank.h"

using namespace std;

void bank::set()
{
    tuitionFee += 100000;
    hygieneFee += 1000;
    sports_Fee += 500;
    books_price["maths"] = 500;
    books_price["physics"] = 450;
    books_price["chemistry"] = 300;
    books_price["biology"] = 350;
    books_price["hindi"] = 200;
    books_price["english"] = 600;
    books_price["english language"] = 500;
    books_price["history"] = 300;
    books_price["civics"] = 300;
    books_price["geography"] = 300;
    books_price["economics"] = 300;
    for (auto i : books_price)
    {
        books.push_back(i.first);
    }
    labs_fee["physics"] = 1200;
    labs_fee["chemistry"] = 1300;
    labs_fee["biology"] = 1400;
    labs_fee["computer"] = 2000;
}

void bank::apply()
{
    bank::set();
    int no_of_courses;
    cout << "Enter the number of courses student will take: ";
    while (no_of_courses > 11 or no_of_courses < 1)
    {
        cin >> no_of_courses;
        if (no_of_courses > 11 or no_of_courses < 1)
            cout << "Please enter a valid number of courses between 1 to 11" << endl;
    }
    cout << "Courses Available in the institution: " << endl;
    int k = 1;
    for (auto i : books_price)
    {
        cout << k << ": " << i.first << endl;
        k++;
    }
    int total_bookfee = 0, total_labfee = 0;
    for (int i = 1; i <= no_of_courses; i++)
    {
        cout << "Enter your " << i << "th course: ";
        string course;
        cin >> course;
        for (int j = 0; j <= course.size(); j++)
        {
            course[i] = tolower(course[i]);
        }
        courses_opted.push_back(course);
        total_bookfee += books_price[course];
        for (auto j : labs_fee)
        {
            if (j.first == course)
                total_labfee += j.second;
        }
    }
    cout << "You have opted for " << no_of_courses << " courses for the student!" << endl;
    cout << "So that total costs you: Rs." << total_bookfee + total_labfee + tuitionFee + sports_Fee + hygieneFee << " along with tuition and other amenities of the courses" << endl;
    cout << "------------------------------------------------------------------" << endl;
    cout << "Proceeding to payment..." << endl;
    cout << "Enter your Name: ";
    string name;
    cin >> name;
    cout << endl;
    cout << "Enter Credit Card Number: ";
    string credit_no;
    cin >> credit_no;
    cout << endl;
    cout << "Enter CVV: ";
    int cvv;
    cin >> cvv;
    cout << endl;
    cout << "Enter Expiry date of card: ";
    string date_of_expire;
    cin >> date_of_expire;
    cout << endl;
    cout << "Processing......" << endl;
    for (int i = 1; i <= 1000000000; i++)
    {
    }
    cout << "Transaction Complete!" << endl;
    for (auto i : courses_opted)
    {
        details[name].push_back(i);
    }
    courses_opted.clear();
}
void bank::showReceipt(string name, string roll_number)
{
    bool f = false;
    for (auto i : details)
    {
        if (i.first == name)
        {
            f = true;
            break;
        }
    }
    if (!f)
    {
        cout << "Student hasn't been registered at the institution yet!" << endl;
    }
    else
    {
        bank::set();
        int totalFee=0;
        for(int i=0;i<name.size();i++)
        {
            name[i]=toupper(name[i]);
        }
        cout << "Name: " << name << endl;
        cout << "Admission Number: " << roll_number << endl;
        cout << "Courses opted by the student" << endl;
        vector<string> labs;
        for (auto i : details[name])
        {
            cout << i << "            " << "Rs." << books_price[i] << endl;
            for (auto j : labs_fee)
            {
                if (j.first == i)
                    labs.push_back(i);
            }
            totalFee+=books_price[i];
        }
        if (labs.size() != 0)
        {
            for (auto i : labs)
            {
                cout << i << " lab" << "       " << "Rs." << labs_fee[i] << endl;
                totalFee+=labs_fee[i];
            }
        }
        totalFee+=sports_Fee+tuitionFee+hygieneFee;
        cout<<"Tuition Fee:       Rs."<<tuitionFee<<endl;
        cout<<"Hygiene Fee:       Rs."<<hygieneFee<<endl;
        cout<<"Sports Fee:        Rs."<<sports_Fee<<endl;
        cout<<"________________________________________"<<endl;
        cout<<"Total:             Rs."<<totalFee<<endl;
    }
}
