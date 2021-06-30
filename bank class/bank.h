#include <bits/stdc++.h>
#ifndef __bank
#define __bank

using namespace std;

class bank
{
private:
    vector<string> books;
    int tuitionFee = 0;
    vector<string> labs;
    int sports_Fee = 0;
    int hygieneFee = 0;
    map<string, int> books_price;
    map<string, int> labs_fee;
    vector<string> courses_opted;
    map<string, vector<string>> details;
    void set();

public:
    void apply();
    void showBooksPrice();
    void showTuitionFee();
    void labsFee();
    void sportsFee();
    void extraFee();
    void showReceipt(string name,string roll_number);
    bool checkStudent(string name);
};

#endif