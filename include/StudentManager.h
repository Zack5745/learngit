#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include <vector>
#include "Student.h"

class StudentManager {
private:
    std::vector<Student> students;

public:
    void addStudent();
    void showAllStudents() const;
    void searchById() const;
    void showAverageOfAll() const;
};

#endif
