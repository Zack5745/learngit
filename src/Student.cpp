#include "Student.h"
#include <iostream>

Student::Student() : id(0), age(0), score1(0), score2(0), score3(0) {}

Student::Student(int id, const std::string &name, int age,
                 int score1, int score2, int score3)
    : id(id), name(name), age(age),
      score1(score1), score2(score2), score3(score3) {}

int Student::getId() const { return id; }
std::string Student::getName() const { return name; }
int Student::getAge() const { return age; }

int Student::getScore1() const { return score1; }
int Student::getScore2() const { return score2; }
int Student::getScore3() const { return score3; }

double Student::getAverage() const {
    return (score1 + score2 + score3) / 3.0;
}

void Student::print() const {
    std::cout << "学号: " << id
              << ", 姓名: " << name
              << ", 年龄: " << age
              << ", 课程成绩: " << score1 << ", " << score2 << ", " << score3
              << ", 平均分: " << getAverage()
              << std::endl;
}
