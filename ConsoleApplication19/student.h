#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std; 

class Student 
{
private: 
    string name_; 
    double gpa_; 
    int age_; 
    int grade_;
public: 
    Student(const string& name, int age, int grade, double gpa);
    void goToNextGrade();
    void learnForSomeTime(int amountOfDays);
    void showInfo() const;
};

#endif 