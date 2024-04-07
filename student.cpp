#include <string>
#include <array>
#include <iostream>
#include "student.h"
#include "degree.h"



Student::Student() 
    : id("0"),
        firstName("EMPTY"),
        lastName("EMPTY"),
        email("EMPTY"),
        age(0),
        daysInCourse({0 , 0 , 0}),
        degreeProgram(DegreeProgram::EMPTY)
{}



Student::Student(std::string studentID,
    std::string fName,
    std::string lName,
    std::string mail,
    int sAge,
    std::array<int, 3> days,
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

int Student::getAge() const {
    return age;
}

std::array<int, 3> Student::getDaysInCourse() const {
    return daysInCourse;
}

DegreeProgram Student::getDegreeProgram() const {
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

void Student::setDaysInCourse(std::array<int, 3> days) {
    daysInCourse = days;
}

void Student::setDegreeProgram(DegreeProgram program) {
    degreeProgram = program;
}

void Student::print() {
    if (id != "0") {
        std::cout << "Student ID: " << id << "   ";
        std::cout << "First Name: " << firstName << "   ";
        std::cout << "Last Name: " << lastName << "   ";
        std::cout << "Email: " << email << "   ";
        std::cout << "Age: " << age << "   ";
        std::cout << "Days in Course: ";
        for (size_t i = 0; i < 3; i++) {
            std::cout << daysInCourse[i] << ", ";
        }
        std::cout << "   ";
        switch (degreeProgram) {
        case DegreeProgram::SECURITY:
            std::cout << "Degree Program: Security" << std::endl;
            break;
        case DegreeProgram::NETWORK:
            std::cout << "Degree Program: Network" << std::endl;
            break;
        case DegreeProgram::SOFTWARE:
            std::cout << "Degree Program: Software" << std::endl;
            break;
        default:
            std::cout << "Degree Program: Unknown" << std::endl;
            break;
        }
    }
}

void Student::printAverageDaysInCourse() {
    int average = (daysInCourse[0] + daysInCourse[1] + daysInCourse[2]) / 3;
    std::cout << firstName << "'s Average Days In Course: " << average << std::endl;
}