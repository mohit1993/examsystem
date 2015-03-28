#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
using namespace std;

class StudentRegistration
{
    public:
        void inputName(string &name);
        void fillForm();
        void showDetails();
    private:
        string studentName,fatherName,motherName;
        int dobDate,dobMonth,dobYear;
        string contactNumber,emailID,rollNumber;
};

void StudentRegistration::inputName(string &name)
{
    string first,middle,last;
    cout<<"\nFirst Name: ";
    cin>>first;
    cout<<"\nMiddle Name: ";
    cin>>middle;
    cout<<"\nLast Name: ";
    cin>>last;
    name = first + " " + middle + " " + last;
}

void StudentRegistration::fillForm()
{
    cout<<"\nEnter Roll no: ";
    cin>>rollNumber;
    cout<<"\nEnter Students Name: ";
    inputName(studentName);
    cout<<"\nEnter Fathers Name: ";
    inputName(fatherName);
    cout<<"\nEnter Mothers Name: ";
    inputName(motherName);
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
    system("clear");
    data.showDetails();
    getchar();
    return 0;
}
