#include "StudentManager.h"
#include <iostream>

using namespace std;

void StudentManager::addStudent() {
    int id, age, s1, s2, s3;
    string name;

    cout << "请输入学号: ";
    cin >> id;
    cout << "请输入姓名: ";
    cin >> name;
    cout << "请输入年龄: ";
    cin >> age;
    cout << "请输入三门课程成绩: ";
    cin >> s1 >> s2 >> s3;

    students.emplace_back(id, name, age, s1, s2, s3);
    cout << "学生信息已添加！" << endl;
}

void StudentManager::showAllStudents() const {
    if (students.empty()) {
        cout << "当前没有学生信息！" << endl;
        return;
    }

    for (const auto &stu : students) {
        stu.print();
    }
}

void StudentManager::searchById() const {
    int id;
    cout << "请输入要查找的学号: ";
    cin >> id;

    for (const auto &stu : students) {
        if (stu.getId() == id) {
            stu.print();
            return;
        }
    }

    cout << "未找到该学号的学生！" << endl;
}

void StudentManager::showAverageOfAll() const {
    if (students.empty()) {
        cout << "没有学生信息！" << endl;
        return;
    }

    double sum = 0;
    for (const auto &stu : students) {
        sum += stu.getAverage();
    }

    cout << "所有学生的平均分为: " << sum / students.size() << endl;
}
