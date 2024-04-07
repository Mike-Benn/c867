#include <string>
#include <array>
#include <iostream>
#include "student.h"
#include "student.cpp"
#include "degree.h"
#include "roster.h"
#include "roster.cpp"

int main() {

    std::cout << "Scripting and Programming - Applications // C++ // 605798 // Michael Bennett" << std::end1;
    
    int oneDays[] = {30 , 35 , 40};
    int twoDays[] = {50 , 30 , 40};
    int threeDays[] = {20 , 40 , 33};
    int fourDays[] = {50 , 58 , 40};
    int fiveDays[] = {15 , 30 , 45};

    Student studentOne("A1" , "John" , "Smith" , "John1989@gm ail.com" , 20 , oneDays , DegreeProgram::SECURITY);
    Student studentTwo("A2" , "Suzan" , "Erickson" , "Erickson_1990@gmailcom" , 19 , twoDays , DegreeProgram::NETWORK);
    Student studentThree("A3" , "Jack" , "Napoli" , "The_lawyer99@yahoo.com" , 19 , threeDays , DegreeProgram::SOFTWARE);
    Student studentFour("A4" , "Erin" , "Black" , "Erin.black@comcast.net" , 22 , fourDays , DegreeProgram::SECURITY);
    Student studentFive("A5" , "Mike" , "Bennett" , "mbenn49@wgu.edu" , 30 , fiveDays , DegreeProgram::SOFTWARE);

    Roster classRoster;
    classRoster.add(studentOne , 1);
    classRoster.add(studentTwo , 2);
    classRoster.add(studentThree , 3);
    classRoster.add(studentFour , 4);
    classRoster.add(studentFive , 5);

    classRoster.printAll();
    classRoster.printInvalidEmails();
    for(size_t i = 0; i < 5; i++) {
        classRoster[i].printAverageDaysInCourse();
    }
    classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);
    classRoster.remove("A3");
    classRoster.printAll();
    classRoster.remove("A3");

    return 0;
}