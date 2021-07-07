#include<bits/stdc++.h>
using namespace std;


class primitive_calculator {

    public:
        int add(int x,int y);
        int sub(int x,int y);
        int mul(int x,int y);
        int div(int x,int y);
        int power(int x,int n);
        int check_prime(int num); // 1 if prime   0 if not 
        int gcd(int x,int y);
        int lcm(int x,int y);
};

int primitive_calculator:: add(int x,int y){
    int ans=x+y;
    return ans;
}

int primitive_calculator:: sub(int x,int y){
    int ans=x-y;
    return ans;
}

int primitive_calculator:: mul(int x,int y){
    int ans=x*y;
    return ans;
}

int primitive_calculator:: div(int x,int y){
    int ans=x/y;
    return ans; 
}

int primitive_calculator:: power(int x,int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*x;
    }
    return ans;
}

int primitive_calculator:: check_prime(int num){
    
    for (int i=2;i<num;i++){
        if (num%i==0) {
            return 0;
        }
    }
    return 1;

}

int primitive_calculator:: gcd(int x,int y){
    if (x>y) {
        swap(x,y);
    }

    int ans=1;
    for(int i=1;i<=x;i++){
        if (x%i==0 && x%i==0) {
            ans=i;
        }
    }
    return ans;

}

int primitive_calculator:: lcm(int x,int y){
    int res=gcd(x,y);
    int ans=(x*y)/res;

    return ans;

}





class advanced_calculator: public primitive_calculator{
    public:
        int power(int x,int n);
        int check_prime(int num);
        int gcd(int x,int y);
        int lcm(int x,int y);
        int solving_expression(string);
            int precedence(char ch);
            int applyOp(int a, int b, char ch);

};

int advanced_calculator::power(int x,int n){
    int res = 1;
    while (n > 0) {
        if (n & 1)
            res = res * x;
        x = x * x;
        n >>= 1;
    }
    return res;
}

int advanced_calculator::check_prime(int num){
    for(int i=2;i<=sqrtl(num);i++){
        if (num%i==0){
            return 0;
        }
    }
    return 1;
}


int advanced_calculator::gcd(int x ,int y){
    
        if (y == 0)
            return x;
        return gcd(y, x % y);
    
}


int advanced_calculator::lcm(int x,int y){
    int res=gcd(x,y);
    int ans=(x*y)/res;
    return ans;
}





// Function to find precedence of
// operators.
int advanced_calculator:: precedence(char op){
    if(op == '+'||op == '-')
    return 1;
    if(op == '*'||op == '/')
    return 2;
    return 0;
}
 
// Function to perform arithmetic operations.
int advanced_calculator:: applyOp(int a, int b, char op){
    switch(op){
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
}
 
// Function that returns value of
// expression after evaluation.
int advanced_calculator:: solving_expression(string tokens){
    int i;
     
    // stack to store integer values.
    stack <int> values;
     
    // stack to store operators.
    stack <char> ops;
     
    for(i = 0; i < tokens.length(); i++){
         
        // Current token is a whitespace,
        // skip it.
        if(tokens[i] == ' ')
            continue;
         
        // Current token is an opening
        // brace, push it to 'ops'
        else if(tokens[i] == '('){
            ops.push(tokens[i]);
        }
         
        // Current token is a number, push
        // it to stack for numbers.
        else if(isdigit(tokens[i])){
            int val = 0;
             
            // There may be more than one
            // digits in number.
            while(i < tokens.length() &&
                        isdigit(tokens[i]))
            {
                val = (val*10) + (tokens[i]-'0');
                i++;
            }
             
            values.push(val);
             
            // right now the i points to
            // the character next to the digit,
            // since the for loop also increases
            // the i, we would skip one
            //  token position; we need to
            // decrease the value of i by 1 to
            // correct the offset.
              i--;
        }
         
        // Closing brace encountered, solve
        // entire brace.
        else if(tokens[i] == ')')
        {
            while(!ops.empty() && ops.top() != '(')
            {
                int val2 = values.top();
                values.pop();
                 
                int val1 = values.top();
                values.pop();
                 
                char op = ops.top();
                ops.pop();
                 
                values.push(applyOp(val1, val2, op));
            }
             
            // pop opening brace.
            if(!ops.empty())
               ops.pop();
        }
         
        // Current token is an operator.
        else
        {
            // While top of 'ops' has same or greater
            // precedence to current token, which
            // is an operator. Apply operator on top
            // of 'ops' to top two elements in values stack.
            while(!ops.empty() && precedence(ops.top())
                                >= precedence(tokens[i])){
                int val2 = values.top();
                values.pop();
                 
                int val1 = values.top();
                values.pop();
                 
                char op = ops.top();
                ops.pop();
                 
                values.push(applyOp(val1, val2, op));
            }
             
            // Push current token to 'ops'.
            ops.push(tokens[i]);
        }
    }
     
    // Entire expression has been parsed at this
    // point, apply remaining ops to remaining
    // values.
    while(!ops.empty()){
        int val2 = values.top();
        values.pop();
                 
        int val1 = values.top();
        values.pop();
                 
        char op = ops.top();
        ops.pop();
                 
        values.push(applyOp(val1, val2, op));
    }
     
    // Top of 'values' contains result, return it.
    return values.top();
}





class bank
{
private:

    int school_balance;

    vector < pair <int ,int>  > student_transaction;  //<student_id ,amount_paid>

    vector <pair <int,int> > staff_transaction; //<staff_id ,amount_paid>

    // vector <string> books;
    // int tuitionFee = 0;
    // vector<string> labs;
    // int sports_Fee = 0;
    // int hygieneFee = 0;
    // map<string, int> books_price;
    // map<string, int> labs_fee;
    // vector<string> courses_opted;
    // map<string, vector<string>> details;
    // void set();

public:

    void set_school_balance(int value);
    int get_school_balance();

    void credit(int value);
    void debit(int value);

    void perform_student_transaction(int student_id, int amount);
    void pay_payment_staff(int staff_id, int amount);

    // show transactions --> reciept 
    // both for the student and teacher
    // DO PLEASE 



    
    // void apply();
    // void showBooksPrice();
    // void showTuitionFee();
    // void labsFee();
    // void sportsFee();
    // void extraFee();
    // void showReceipt(string name,string roll_number);
    // bool checkStudent(string name);


};



void bank::set_school_balance(int value){
    this->school_balance = value;
}

int bank::get_school_balance(){
    return this->school_balance;
}

void bank:: perform_student_transaction(int student_id,int amount){
    pair <int ,int > temp={student_id,amount};
    student_transaction.push_back(temp);
    credit(amount);
}

void bank:: pay_payment_staff(int staff_id,int amount){
    pair <int ,int > temp={staff_id,amount};
    staff_transaction.push_back(temp);
    debit(amount);
}

void bank:: credit(int value){
    this->school_balance=this->school_balance+value;
}

void bank:: credit(int value){
    this->school_balance=this->school_balance+value;
}


// void bank::set()
// {
//     tuitionFee += 100000;
//     hygieneFee += 1000;
//     sports_Fee += 500;
//     books_price["maths"] = 500;
//     books_price["physics"] = 450;
//     books_price["chemistry"] = 300;
//     books_price["biology"] = 350;
//     books_price["hindi"] = 200;
//     books_price["english"] = 600;
//     books_price["english language"] = 500;
//     books_price["history"] = 300;
//     books_price["civics"] = 300;
//     books_price["geography"] = 300;
//     books_price["economics"] = 300;
//     for (auto i : books_price)
//     {
//         books.push_back(i.first);
//     }
//     labs_fee["physics"] = 1200;
//     labs_fee["chemistry"] = 1300;
//     labs_fee["biology"] = 1400;
//     labs_fee["computer"] = 2000;
// }


// void bank::apply()
// {
//     bank::set();
//     int no_of_courses;
//     cout << "Enter the number of courses student will take: ";
//     while (no_of_courses > 11 or no_of_courses < 1)
//     {
//         cin >> no_of_courses;
//         if (no_of_courses > 11 or no_of_courses < 1)
//             cout << "Please enter a valid number of courses between 1 to 11" << endl;
//     }
//     cout << "Courses Available in the institution: " << endl;
//     int k = 1;
//     for (auto i : books_price)
//     {
//         cout << k << ": " << i.first << endl;
//         k++;
//     }
//     int total_bookfee = 0, total_labfee = 0;
//     for (int i = 1; i <= no_of_courses; i++)
//     {
//         cout << "Enter your " << i << "th course: ";
//         string course;
//         cin >> course;
//         for (int j = 0; j <= course.size(); j++)
//         {
//             course[i] = tolower(course[i]);
//         }
//         courses_opted.push_back(course);
//         total_bookfee += books_price[course];
//         for (auto j : labs_fee)
//         {
//             if (j.first == course)
//                 total_labfee += j.second;
//         }
//     }
//     cout << "You have opted for " << no_of_courses << " courses for the student!" << endl;
//     cout << "So that total costs you: Rs." << total_bookfee + total_labfee + tuitionFee + sports_Fee + hygieneFee << " along with tuition and other amenities of the courses" << endl;
//     cout << "------------------------------------------------------------------" << endl;
//     cout << "Proceeding to payment..." << endl;
//     cout << "Enter your Name: ";
//     string name;
//     cin >> name;
//     cout << endl;
//     cout << "Enter Credit Card Number: ";
//     string credit_no;
//     cin >> credit_no;
//     cout << endl;
//     cout << "Enter CVV: ";
//     int cvv;
//     cin >> cvv;
//     cout << endl;
//     cout << "Enter Expiry date of card: ";
//     string date_of_expire;
//     cin >> date_of_expire;
//     cout << endl;
//     cout << "Processing......" << endl;
//     for (int i = 1; i <= 1000000000; i++)
//     {
//     }
//     cout << "Transaction Complete!" << endl;
//     for (auto i : courses_opted)
//     {
//         details[name].push_back(i);
//     }
//     courses_opted.clear();
// }


// void bank::showReceipt(string name, string roll_number)
// {
//     bool f = false;
//     for (auto i : details)
//     {
//         if (i.first == name)
//         {
//             f = true;
//             break;
//         }
//     }
//     if (!f)
//     {
//         cout << "Student hasn't been registered at the institution yet!" << endl;
//     }
//     else
//     {
//         bank::set();
//         int totalFee=0;
//         for(int i=0;i<name.size();i++)
//         {
//             name[i]=toupper(name[i]);
//         }
//         cout << "Name: " << name << endl;
//         cout << "Admission Number: " << roll_number << endl;
//         cout << "Courses opted by the student" << endl;
//         vector<string> labs;
//         for (auto i : details[name])
//         {
//             cout << i << "            " << "Rs." << books_price[i] << endl;
//             for (auto j : labs_fee)
//             {
//                 if (j.first == i)
//                     labs.push_back(i);
//             }
//             totalFee+=books_price[i];
//         }
//         if (labs.size() != 0)
//         {
//             for (auto i : labs)
//             {
//                 cout << i << " lab" << "       " << "Rs." << labs_fee[i] << endl;
//                 totalFee+=labs_fee[i];
//             }
//         }
//         totalFee+=sports_Fee+tuitionFee+hygieneFee;
//         cout<<"Tuition Fee:       Rs."<<tuitionFee<<endl;
//         cout<<"Hygiene Fee:       Rs."<<hygieneFee<<endl;
//         cout<<"Sports Fee:        Rs."<<sports_Fee<<endl;
//         cout<<"________________________________________"<<endl;
//         cout<<"Total:             Rs."<<totalFee<<endl;
//     }
// }




class Library
{
private:
    int id_student = 0;
    int id_teacher = 0;

    map<int,int>fine_students;                                       // no of books of each type in the library
    map<int, stack<tuple<int, string, string>>> record_students; // roll no of student, <id of the book, name of the book, issue date>
    map<int, stack<tuple<int, string, string>>> record_teachers; // roll no of student, <id of the book, name of the book, issue date
    
    map<int, pair<string, bool>> students_store;                 // id, name, issued or not
    map<int, pair<string, bool>> teachers_store;

public:
           void add_book(string, bool); // parameter (name of the book, stdent/teacher))
           void distributer(string, bool);

           void add_to_students_store(string);
           void add_to_teachers_store(string);

           int get_id_student(string);  // returns the id of the book with given name from students store
           int get_id_teacher(string);  // returns the id of the book with given name from teachers store
       
          void test_func();
          void submit_student(int,int,string);   // roll_no, id_of_book , date of submission , 
          bool check_due_book(int);                 // check wehether a student has submitted all the previously issued books or not...............parameters(roll no of the student)
          
          void issue_student(string,string,int);          // name of book, date of issue of book,roll no of the student
          void issue_teacher(string,string,int);
          
          void submit_teacher(int,int,string);
   
    ~Library();
};


vector<int> date_converter(string dt)
{
    string dd = "", mm = "", yy = "";
    vector<int> dte(3);
    dd.push_back(dt[0]);
    dd.push_back(dt[1]);
    mm.push_back(dt[3]);
    mm.push_back(dt[4]);
    yy.push_back(dt[6]);
    yy.push_back(dt[7]);
    yy.push_back(dt[8]);
    yy.push_back(dt[9]);

    stringstream ss1(dd), ss2(mm), ss3(yy);
    ss1 >> dte[0];
    ss2 >> dte[1];
    ss3 >> dte[2];
    return dte;
}


//~~~~~~~~~~~~~~~~~   * Library Methods * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

void Library::add_book(string s, bool flag)
{
    distributer(s, flag);
    return;
}

void Library::distributer(string s, bool flag1)
{
    // students store -> if flag ==true
    if (flag1)
        add_to_students_store(s);
    else
        add_to_teachers_store(s);
    return;
}

void Library::add_to_students_store(string name11)
{
    students_store[++id_student] = make_pair(name11, false);
    cout << "Book successfully added to students's store...." << endl;
    return;
}

void Library::add_to_teachers_store(string name11)
{
    teachers_store[++id_teacher] = make_pair(name11, false);
    cout << "Book successfully added to teacher's store...." << endl;
    return;
}




void Library::test_func()
{
    cout << "Students store size -> " << students_store.size() << endl;
    cout << "Teachers store sixe -> " << teachers_store.size() << endl;
}

Library::~Library() {}

//~~~~~~~~~~~~~~~~~~~~~~    * Students Methods *    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

bool Library::check_due_book(int roll_no)
{
    if (record_students[roll_no].empty())
        return false;
    else
        return true;
}
int Library::get_id_student(string name_of_the_book)
{
    int id1 = -1;
    for (auto it = students_store.begin(); it != students_store.end(); ++it)
    {
        if (it->second.first == name_of_the_book and it->second.second == false)
        {
            id1 = it->first;
            break;
        }
    }
    return id1;
}
void Library::issue_student(string book_name,string todays_date, int roll_no)
{
    if (check_due_book(roll_no))
    {
        cout << "Book cannot be issued !! Please Submit all the due books " << endl;
        return;
    }
    else
    {
        int id = get_id_student(book_name);
        if (id == -1)
        {
            cout << "Sorry!! This book is currently not available :( " << endl;
        }
        else
        {
            record_students[roll_no].push(make_tuple(id, book_name, todays_date));
            students_store[id].second=true;
            cout << "Book issued successfully" << endl;
        }
    }
    return;
}

void Library::submit_student(int roll_no,int id,string submission_date){
       vector<int>issueDate=date_converter(get<2>(record_students[roll_no].top()));
       vector<int>submissionDate=date_converter(submission_date);
       int iss_days=(issueDate[2]-1)*365+(issueDate[1]-1)*30+issueDate[0];
       int sub_days=(submissionDate[2]-1)*365+(submissionDate[1]-1)*30+submissionDate[0];
       int fine=0;
       if(sub_days-iss_days<=15)fine=0;
       else if(sub_days-iss_days>15 and issueDate[2]==submissionDate[2])fine=(sub_days-iss_days-15)*5;
       else fine=(sub_days-iss_days-15)*10;
       if(sub_days-iss_days<0)cout<<"Error !! Please Enter a valid submission date."<<endl;
       else {
           cout<<"Your fine is : "<<fine<<endl;
           cout<<"Press 'y' to pay now or 'n' to pay later : ";
           char a;
           cin>>a;
           if(a=='y' or a=='Y'){
               cout<<"Book submitted successfully..."<<endl;
               cout<<"Remaining fine = Rs. 0 "<<endl;
               record_students[roll_no].pop();
               students_store[id].second=false;
                          }
           else if(a=='n' or a=='N'){
               cout<<"Book submitted successfully..."<<endl;
               record_students[roll_no].pop();
               fine_students[roll_no]+=fine;
                  cout<<"Remaining fine = Rs. "<<fine_students[roll_no]<<endl;
                  students_store[id].second=false;
           }
           else cout<<"Error !! Please provide a valid input"<<endl;
       }
}
//~~~~~~~~~~~~~~~~~~~~~~~     * Teachers methods  * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
int Library::get_id_teacher(string name_of_the_book)
{
    int id1 = -1;
    for (auto it = teachers_store.begin(); it != teachers_store.end(); ++it)
    {
        if (it->second.first == name_of_the_book and it->second.second == false)
        {
            id1 = it->first;
            break;
        }
    }
    return id1;
}
void Library::issue_teacher(string book_name,string todays_date, int roll_no){
    int id = get_id_teacher(book_name);
        if (id == -1)
        {
            cout << "Sorry!! This book is currently not available :( " << endl;
        }
        else
        {
            record_teachers[roll_no].push(make_tuple(id, book_name, todays_date));
            teachers_store[id].second=true;
            cout << "Book issued successfully" << endl;
        }
}
void Library::submit_teacher(int roll_no,int id,string submission_date){
            cout<<"Book submitted successfully..."<<endl;
               record_teachers[roll_no].pop();
               teachers_store[id].second=false;
}





struct exam_marks{
    int maths_marks;
    int english_marks;
    int hindi_marks;
    int science_marks;
    int social_marks;
    int computer_marks;
};


// struct exam_attendance{
//     int maths_att;
//     int english_att;
//     int hindi_att;
//     int science_att;
//     int social_att;
//     int computer_att;
// };


void sleep(float seconds)
{
    clock_t startClock = clock();
    float secondsAhead = seconds * CLOCKS_PER_SEC;
    // do nothing until the elapsed time has passed.
    while (clock() < startClock + secondsAhead);
    return;
}


pair < string, int > mark_attendance(int attended , int day = 0, int month = 0, int year = 0)
{
    // map<tuple<int, int, int>, bool> attendance; 
    // tuple in the form of <yyyy, mm, dd> || 0 for absent, 1 for present
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
    // char attended;
    // cin >> attended;
    if (attended == 'P' || attended == 'p') //Marking as present
    {
        // attendance[make_tuple(year, month, day)] = 1;
        string temp;
        temp=to_string(year)+'/'+to_string(month)+'/'+to_string(day);
        int y=1;
        pair <string , int > st={temp,y};
        return st;
    }
    else
    {
        string temp;
        temp=to_string(year)+'/'+to_string(month)+'/'+to_string(day);
        int y=0;
        pair <string , int > st={temp,y};
        return st;
        // attendance[make_tuple(year, month, day)] = 0;
    }
}





class student{
    private:

        string username;    
        int roll_no; // unique for all students --> so used as this to identify it 
        string name;
        string email;
        string phone_no;
        // int admission_no; 
        string date_of_birth;
        int standard;

        int number_of_exams;
        vector <pair <string ,int > > attandence;

        vector <exam_marks > exam;

        int percentage;

    // struct exam_marks{
    //     int maths_marks;
    //     int english_marks;
    //     int hindi_marks;
    //     int science_marks;
    //     int social_marks;
    //     int computer_marks;
    // };

    // struct exam_attendance{
    //     int maths_att;
    //     int english_att;
    //     int hindi_att;
    //     int science_att;
    //     int social_att;
    //     int computer_att;
    // };


    public:
        void set_username(string username); // used to set as well as upadte // therefore took sperately all
        void set_roll_no(int roll_no);
        void set_name(string name);
        void set_email(string email);
        void set_phone_no(string phone_no);
        void set_date_of_birth(string date_of_birth);
        
        void set_standard(int standard);
        void update_standard(int status); // 1 for pass   0 for fail

        void add_date_for_attandence(string data, int present); // date, 1 or 0    1 for present 0 for absent 

        void mark_todays_attandence();

        string get_username();
        int get_roll_no();
        string get_name();
        string get_email();
        string get_phone_no();
        string get_date_of_birth();
        int get_standard();


        void give_exam(); // set exam_marks and insert it in vector exam


        // void set_exam_marks(exam_marks x);
        // void set_exam_attendance(exam_attendance y);
        
        vector <pair<string,int>> get_attendance_list();


        void show_report(); // report card 

// average and percentage find 
void set_percentage();
float get_percentage();

};


void student:: set_percentage(){
    float sum=0; 
    for(auto x: exam ) {
        sum=sum+x.maths_marks+x.computer_marks+x.english_marks+x.hindi_marks+x.social_marks+x.science_marks;
    }
    float x=sum/6;
    this->percentage=x;
}

float student::get_percentage(){
    return this->percentage;
}


void student:: set_username(string username){
    this->username = username;
}

void student:: set_roll_no(int roll_no){
    this->roll_no = roll_no;
}

void student:: set_name(string name){
    this->name = name;
}

void student:: set_email(string email){
    this->email =email;
}

void student:: set_phone_no(string phone_no){
    this->phone_no = phone_no;
}

void student:: set_date_of_birth(string date_of_birth){
    this->date_of_birth = date_of_birth;
}

void student:: set_standard(int standard){
    this->standard = standard;
}

void student:: update_standard(int status) {
    if (status==1) {
        standard++;
    }
    else {
        standard=standard+0;
    }
}

void student:: add_date_for_attandence(string date, int present){
    attandence.push_back({date,present});
}

void student:: give_exam(){
    // struct exam_marks exam1;
    // string x[6]={"maths","english","hindi","science","socail","computer"};
    // int y[6];

    // for(int i=0;i<6;i++){
    //     cout<<i+1<<"   "<<x[i]<<"   ";
    //     cin>>y[i];

    // }

    struct exam_marks exam1;

    cin>>exam1.maths_marks;
    cin>>exam1.english_marks;
    cin>>exam1.hindi_marks;
    cin>>exam1.science_marks;
    cin>>exam1.social_marks;
    cin>>exam1.computer_marks;

    exam.push_back(exam1);

}





string student::get_username(){
    return this->username;
}

int student::get_roll_no(){
    return this->roll_no;
}

string student::get_name(){
    return this->name;
}

string student::get_email(){
    return this->email;
}

string student::get_phone_no(){
    return this->phone_no;
}

string student::get_date_of_birth(){
    return this->date_of_birth;
}

int student::get_standard(){
    return this->standard;
}

vector <pair <string,int>> student:: get_attendance_list(){
    return this->attandence;
}

void student::mark_todays_attandence(){
    cout<<"ENTER 1 FOR PRESENT AND 0 FOR ABSENT ";
    int x;
    cin>>x;
    pair <string , int > st=mark_attendance(x);
    add_date_for_attandence(st.first,st.second);
}


void student::show_report(){ 
    // all show and vectors call
}






class class_monitor : public student {
    public:
        void maintain_the_class();

};

void class_monitor:: maintain_the_class(){
    cout<<"EVERYONE MAINTAIN SILENCE SIR IS COMING !! ";
}



class leader: public class_monitor {
    public:
        void maintain_the_monitor();
};

void leader:: maintain_the_monitor(){
    cout<<"SHUT UP MONITORS !! ";
}


/*
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

*/


class staff {
    private:

        string username;    
        int staff_id; // unique for all students --> so used as this to identify it 
        string designation;
        string name;
        string email;
        string address;
        string phone_no; 
        string date_of_birth;
        int salary;

        vector <pair <string ,int > > attandence;


    public:
        void set_username(string username); // used to set as well as upadte // therefore took sperately all
        void set_staff_id(int user_id);
        void set_designation(string designation);
        void set_name(string name);
        void set_email(string email);
        void set_phone_no(string phone_no);
        void set_date_of_birth(string date_of_birth);
        void set_salary(int salary);

        void add_date_for_attandence(string data, int present); // date, 1 or 0    1 for present 0 for absent 

        void mark_todays_attandence();

        string get_username();
        int get_staff_id();
        string get_designation();
        string get_name();
        string get_email();
        string get_phone_no();
        string get_date_of_birth();
        int get_salary();
   
        vector <pair<string,int>> get_attendance_list();


        void show_report(); // report card of staff member 
};



void staff:: set_username(string username){
    this->username = username;
}

void staff:: set_staff_id(int staff_id){
    this->staff_id = staff_id;
}

void staff:: set_designation(string designation){
 this->designation = designation;
}

void staff:: set_name(string name){
    this->name = name;
}

void staff:: set_email(string email){
    this->email =email;
}

void staff:: set_phone_no(string phonephone_no){
    this->phone_no = phone_no;
}

void staff:: set_date_of_birth(string date_of_birth){
    this->date_of_birth = date_of_birth;
}

void staff:: set_salary (int salary){
    this->salary = salary;
}

void staff:: add_date_for_attandence(string date, int present){
    attandence.push_back({date,present});
}



string staff::get_username(){
    return this->username;
}

int staff::get_staff_id(){
    return this->staff_id;
}

string staff::get_designation(){
    return this->designation;
}

int staff::get_salary(){
    return this->salary;
}

string staff::get_name(){
    return this->name;
}

string staff::get_email(){
    return this->email;
}

string staff::get_phone_no(){
    return this->phone_no;
}

string staff::get_date_of_birth(){
    return this->date_of_birth;
}

vector <pair <string,int>> staff:: get_attendance_list(){
    return this->attandence;
}

void staff::mark_todays_attandence(){
    cout<<"ENTER 1 FOR PRESENT AND 0 FOR ABSENT ";
    int x;
    cin>>x;
    pair <string , int > st=mark_attendance(x);
    add_date_for_attandence(st.first,st.second);
}


void staff::show_report(){ 
    // all show and vectors call
}




class teacher : public staff {
    private:
        vector < pair <int ,string > > subject; // batch , subject 


    public:
        void add_subject(int batch_no, string subject_name);
        void conduct_exam();

        void get_subject();
       
};

void teacher:: add_subject(int batch_no, string subject_name){
    subject.push_back({batch_no,subject_name});
}

void teacher:: conduct_exam(){
    cout<<" START EXAM ";
}

void teacher:: get_subject(){
    for(auto x: subject){
        cout<<x.first<<" "<<x.second<<endl;
    }

}


class class_teacher : public teacher {
    private :
        int batch_no;

    public:
        void set_batch_no(int batch_no);
        int get_batch_no();

};

void class_teacher::set_batch_no(int batch_no){
    this->batch_no = batch_no;
}

int class_teacher::get_batch_no(){
    return this->batch_no;
}




/*
// int uniqueid = 0;
class Batch
{
public:
    map<int, student> bachhe;
    // vector<vector<bool>> all_attendance;
    
    void add_student(string name, int roll_no)
    {
        student a;
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
 
};

*/

class batch {
    private :

        int batch_no;
        vector <student>  bachhe;
        int batch_size;
        student topper;
        teacher class_teacher;

    public :

        void set_batch_no(int batch_no);
        int get_batch_no();

        void add_student(student x);
        void show_students();

        void set_topper();
        student get_topper();

        void set_class_teacher(teacher y);
        teacher get_class_teacher();

};

void batch:: set_batch_no(int batch_no){
    batch_size=0;
    this->batch_no = batch_no;
}

int batch:: get_batch_no(){
    return this->batch_no;
}

void batch:: add_student(student x){
    batch_size++;
    bachhe.push_back(x);
}

void batch:: show_students(){
    for (auto x:bachhe){
        cout<<x.get_roll_no()<<endl; // or any other infro of that student 
    }

}

void batch:: set_topper(){
    int mx=INT_MIN;
    
    student temp_mx; // null se initialize using constructors 
    // do 
    // or initize it with the first element 

if (batch_size>0) {

    temp_mx=bachhe[0]; // check size > 1 for this 

    for (auto x:bachhe){
        float per=x.get_percentage();
        // float per=x.percentage;// cannot access this 
        if (per>mx) {
            temp_mx=x;
        }
    }

    topper=temp_mx;

}
else {
    // dont call 
    // check before only 
}


}


student batch:: get_topper() {
    return topper;
}


void batch:: set_class_teacher(teacher x){
    this->class_teacher=x;
}

teacher batch:: get_class_teacher(){
    return class_teacher;
}






class admin{
    private:
        vector <student > student_list;
        vector <teacher > teacher_list;
        vector <staff > staff_list;
        
        

    public:
        void add_student();
        void remove_student();
        
        void add_teacher();
        void remove_teacher();
        
        void add_staff();
        void remove_staff();


    // bank b;
    // b.apply();
    // cout<<"------------------"<<endl;
    // b.showReceipt("aditya","A12");

};








class LoginSystem
{
private:
    // here all the email id and passwords are being stored along with the access rights
    // string password = "1234#$abc";
    // string username = "Prabhav";
    // string access_rights = "ADMIN";

    // map<tuple<string, string>, string> credentials;

    string password[4]={"12#$abc","34#$abc","56#$abc","78#$abc"};
    string username[4]={"Prabhav","Akshay","Ankit","Aditya"};
    string access_rights[4]={"ADMIN","TEACHER","STUDENT","STAFF"};




    string username_attempted;
    string password_attempted;
    string choice;

    bool accessgranted;

public:

    void add_new_entry(string username, string password, string access_rights)
    {
        // credentials[make_tuple(username, password)] = access_rights;
    }

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
//    L1.issue_teacher("history","17/07/2022",12);


    void login()
    {
        static int login_attempts;

        accessgranted =0;

        login_attempts++;

        string username_attempted;
        cout << "Enter Your Username:- ";
        cin >> username_attempted;
        cout << "Enter Your Password:- ";
        cin >> password_attempted;

for(int i=0;i<4;i++) {

        if (username[i] == username_attempted && password[i] == password_attempted)
        {
            
            accessgranted=1;

            cout << "Account Logged In!\n";
            cout << "ACCESS LEVEL :- " << access_rights << '\n';
            if (access_rights[i] == "ADMIN")
            {
                //GIVING ACCESS TO ALL FUNCTIONS
                // admin class 
            }
            else if (access_rights[i] == "STUDENT")
            {
                //GIVING ACCESS TO STUDENT
                // student class
            }
            else if (access_rights[i] == "TEACHER")
            {
                //GIVING ACCESS TO TEACHER FUNCTIONS
                // teacher class
            }
            else if (access_rights[i] == "STAFF")
            {
                //GIVING ACCESS TO STAFF FUNCTIONS
                // staff class
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

        if (!accessgranted) {

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

        // }


    }
};



int main(){

    cout << "Welcome Sir/Mam\n"
         << "Please login into your account\n";
             
    LoginSystem login;
    login.login();
    system("clear");    

    return 0;
}