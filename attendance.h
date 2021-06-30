#include <bits/stdc++.h>
using namespace std;

class Attendance
{
public:
    map<tuple<int, int, int>, bool> attendance; // tuple in the form of <yyyy, mm, dd> || 0 for absent, 1 for present
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
        char attended;
        cin >> attended;
        if (attended == 'P' || attended == 'p') //Marking as present
        {
            attendance[make_tuple(year, month, day)] = 1;
        }
        else
        {
            attendance[make_tuple(year, month, day)] = 0;
        }
    }
};
