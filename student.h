#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <array>
#include "degree.h"

class Student {

public:

    
    
    Student();
    Student(std::string studentID, std::string fName, std::string lName, std::string mail, int sAge, std::array<int, 3> days, DegreeProgram program);

    std::string getID() const;
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getEmail() const;
    int getAge() const;
    std::array<int, 3> getDaysInCourse() const;
    DegreeProgram getDegreeProgram() const;

    void setID(std::string studentID);
    void setFirstName(std::string fName);
    void setLastName(std::string lName);
    void setEmail(std::string mail);
    void setAge(int sAge);
    void setDaysInCourse(std::array<int, 3> days);
    void setDegreeProgram(DegreeProgram program);

    void print();
    void printAverageDaysInCourse();

private:

    std::string id;
    std::string firstName;
    std::string lastName;
    std::string email;
    int age;
    std::array<int, 3> daysInCourse;
    DegreeProgram degreeProgram;

};

#endif