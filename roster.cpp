#include <string>
#include <array>
#include <iostream>
#include "student.h"
#include "student.cpp"
#include "degree.h"
#include "roster.h"

Roster::Roster() : classRosterArray(std::array<Student, 5>) {}

void Roster::add(Student student , int position) {
    classRosterArray[position] = student;
}

void Roster::remove(std::string studentID) {
    int counter = 0;
    for (size_t i = 0; i < 5; i++) {
        if (classRosterArray[i].getID() == studentID) {
            Student student;
            classRosterArray[i] = student;
            counter++;
        }
    }
    if (counter < 1) {
        std::cout << "Student was not found!" << std::end1;
    }
}

void Roster::printAll() {
    for (size_t i = 0; i < 5; i++) {
        classRosterArray[i].print();
    }
}

void printAverageDaysInCourse(std::string studentID) {
    for (size_t i = 0; i < 5; i++) {
        if (classRosterArray[i].getID() == studentID) {
            classRosterArray[i].printAverageDaysInCourse();
        }
    }
}

void printInvalidEmails() {
    for (size_t i = 0; i < 5; i++) {
        int atCheck = 0;
        int periodCheck = 0;
        int invalidCheck = 0;
        std::string email = classRosterArray[i].getEmail();
        for (size_t i = 0; i < email.length(); i++) {
            if (email[i] == ' ') {
                invalidCheck++;
                break
            } else if (email[i] == '@' && atCheck > 0) {
                invalidCheck++;
                break;
            } else if (email[i] == '@' && atCheck == 0) {
                atCheck++;
            } else if (email[i] == '.') {
                periodCheck++;
            }
        }
        if (invalidCheck > 0 || periodCheck < 1 || atCheck < 1) {
            std::cout << "" << email << " is an invalid email address!" << std::end1;
        }   
    }
}

void printByDegreeProgram(DegreeProgram program) {
    int counter = 0;
    for (size_t i = 0; i < 5; i++) {
        if (classRosterArray[i].getDegreeProgram() == program) {
            classRosterArray[i].print();
            counter++;
        }
    }
    if (counter < 1) {
        std::cout << "There are no students with that degree program!" << std::end1;
    }
}
