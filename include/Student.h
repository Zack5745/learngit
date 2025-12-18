#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    int id;
    std::string name;
    int age;
    int score1, score2, score3;

public:
    Student();
    Student(int id, const std::string &name, int age,
            int score1, int score2, int score3);

    int getId() const;
    std::string getName() const;
    int getAge() const;

    int getScore1() const;
    int getScore2() const;
    int getScore3() const;

    double getAverage() const;

    void print() const;
};

#endif
