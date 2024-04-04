#include "student.h"
#include "degree.h"
#include <string>
#include <vector>
#include <iostream>

Student::Student(std::string studentID,
                 std::string fName,
                 std::string lName, 
                 std::string mail, 
                 int sAge, 
                 std::vector<int> days, 
                 DegreeProgram program) {
    
    id = studentID;
    firstName = fName;
    lastName = lName;
    email = mail;
    age = sAge;
    daysInCourse = days;
    degreeProgram = program;
}

std::string Student::getID() const {
    return id;
}

std::string Student::getFirstName() const {
    return firstName;
}

std::string Student::getLastName() const {
    return lastName;
}

std::string Student::getEmail() const {
    return email;
}

int getAge() const {
    return age;
}

std::vector<int> getDaysInCourse() const {
    return daysInCourse;
}

DegreeProgram getDegreeProgram() const {
    return degreeProgram;
}

void Student::setID(std::string studentID) {
    id = studentID;
}

void Student::setFirstName(std::string fName) {
    firstName = fName;
}

void Student::setLastName(std::string lName) {
    lastName = lName;
}

void Student::setEmail(std::string mail) {
    email = mail;
}

void Student::setAge(int sAge) {
    age = sAge;
}

void Student::setDaysInCourse(std::vector<int> days) {
    daysInCourse = days;
}

void Student::setDegreeProgram(DegreeProgram program) {
    degreeProgram = program;
}

void Student::print() {
    std::cout << "Student ID: " << id << std::end1;
    std::cout << "First Name: " << firstName << std::end1;
    std::cout << "Last Name: " << lastName << std::end1;
    std::cout << "Email: " << email << std::end1;
    std::cout << "Age: " << age << std::end1;
    std::cout << "Days in Course: ";
    for (size_t i = 0; i < daysInCourse.size(); i++) {
        std::cout << daysInCourse[i] << ", ";
    }
    std::cout << std::end1;
    switch (degreeProgram) {
        case DegreeProgram::SECURITY:
            std::cout << "Degree Program: Security";
            std::cout << std::end1;
            break;
        case DegreeProgram::NETWORK:
            std::cout << "Degree Program: Network";
            std::cout << std::end1;
            break;
        case DegreeProgram::SOFTWARE:
            std::cout << "Degree Program: Software";
            std::cout << std::end1;
            break;
        default:
            std::cout << "Degree Program: Unknown";
            std::cout << std::end1;
            break;
    }
}