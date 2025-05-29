#include "student.h"
#include <iostream>
using namespace std;

Student:: Student(const string& name, int age, int grade, double gpa) :
 name_(name), age_(age), grade_(grade), gpa_(gpa)
{}

void Student:: learnForSomeTime(int amountOfDays) 
{
    if (gpa_ < 4.0) 
    {
    gpa_ += amountOfDays * 0.01;
    }
    age_ += (double)amountOfDays / 365;
    if (amountOfDays / 365 >= 1) 
    {
        grade_ += amountOfDays / 365;
    }
}

void Student:: goToNextGrade() 
{
    if (grade_ == 11) 
    {
        return; 
    }
    grade_++; 
    age_++;
    gpa_ = 0.0;
}

void Student:: showInfo() const
{
    cout << "Student's name is " << name_ << endl;
    cout << "Student's age is " << age_ << endl;  
    cout << "Student's gpa is " << gpa_ << endl; 
    cout << "Student's grade is " << grade_ << endl; 
}