#ifndef ROSTER_H
#define ROSTER_H

#include <string>
#include "degree.h"
#include "student.h"


class Roster {
public:

    Roster();
    ~Roster();
    std::array<Student, 5> getRoster() const;

    void add(Student student, int position);
    void remove(std::string studentID);
    void printAll();
    void printAverageDaysInCourse(std::string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram program);


private:

    std::array<Student, 5> classRosterArray;
};



#endif