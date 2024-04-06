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
    if (counter > 0) {
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


