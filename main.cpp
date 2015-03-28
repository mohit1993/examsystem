#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
using namespace std;

/*the lines below help to detect whether the system is linux or windows and
 * hence define a variable CLEAR accordingly for clear function.
 * On windows clear screen is done using system("cls")
 * and on linux it is done using system("clear")
 * so i made a common variable CLEAR...system(CLEAR) to take "cls" if its
 * windows else take "clear if its linux */

#ifdef __WIN32 /* if system is windows then __WIN32 would already be define so ifdef __WIN32 will be true */
#define CLEAR "cls"
#endif

#ifdef linux /* if system is linux then linux would be defined so ifdef linux would be true */
#define CLEAR "clear"
#endif


class StudentRegistration
{
    public:
        void fillForm();
        void showDetails();
    private:
        string studentName,fatherName,motherName;
        int dobDate,dobMonth,dobYear;
        string contactNumber,emailID,rollNumber;
};

void StudentRegistration::fillForm()
{
    cout<<"\nEnter Roll no: ";
    getline(cin,rollNumber); // getline function can take string input with spaces included...so user can enter full name
    cout<<"\nEnter Students Name: ";
    getline(cin,studentName);
    cout<<"\nEnter Fathers Name: ";
    getline(cin,fatherName);
    cout<<"\nEnter Mothers Name: ";
    getline(cin,motherName);
    cout<<"\nEnter DOB: ";
    cout<<"\nDate: ";
    cin>>dobDate;
    cout<<"\nMonth: ";
    cin>>dobMonth;
    cout<<"\nYear: ";
    cin>>dobYear;
    cout<<"\nEnter contact number: ";
    cin>>contactNumber;
    cout<<"\nEnter email ID: ";
    cin>>emailID;
}

void StudentRegistration::showDetails()
{
    cout<<"\nRoll Number: "<<rollNumber;
    cout<<"\nStudents Name: "<<studentName;
    cout<<"\nFathers Name: "<<fatherName;
    cout<<"\nMothers Name: "<<motherName;
    cout<<"\nContact Number: "<<contactNumber;
    cout<<"\nDate of Birth: "<<dobDate<<"/"<<dobMonth<<"/"<<dobYear;
    cout<<"\nEmail ID: "<<emailID;
}

int main()
{
    StudentRegistration data;
    data.fillForm();
    cout<<"\nForm Submitted SuccessFully";
    getchar();
    system(CLEAR);
    data.showDetails();
    getchar();
    return 0;
}
