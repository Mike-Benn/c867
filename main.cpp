#include <string>
#include <array>
#include <iostream>
#include "student.h"
#include "degree.h"
#include "roster.h"

int main() {

    std::cout << "Scripting and Programming - Applications // C++ // 605798 // Michael Bennett" << std::endl;

    Student studentOne("A1", "John", "Smith", "John1989@gm ail.com", 20, {30 , 35 , 40 }, DegreeProgram::SECURITY);
    Student studentTwo("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, {50 , 30 , 40}, DegreeProgram::NETWORK);
    Student studentThree("A3", "Jack", "Napoli", "The_lawyer99@yahoo.com", 19, {20 , 40 , 33}, DegreeProgram::SOFTWARE);
    Student studentFour("A4", "Erin", "Black", "Erin.black@comcast.net", 22, {50 , 58 , 40}, DegreeProgram::SECURITY);
    Student studentFive("A5", "Mike", "Bennett", "mbenn49@wgu.edu", 30, {15 , 30 , 45}, DegreeProgram::SOFTWARE);

    Roster classRoster;
    classRoster.add(studentOne, 0);
    classRoster.add(studentTwo, 1);
    classRoster.add(studentThree, 2);
    classRoster.add(studentFour, 3);
    classRoster.add(studentFive, 4);

    classRoster.printAll();
    classRoster.printInvalidEmails();
    for (size_t i = 0; i < 5; i++) {
        classRoster.getRoster()[i].printAverageDaysInCourse();
    }
    classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);
    classRoster.remove("A3");
    classRoster.printAll();
    classRoster.remove("A3");

    return 0;
}