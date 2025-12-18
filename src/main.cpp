#include <iostream>
#include "StudentManager.h"

using namespace std;

int main() {
    StudentManager manager;
    int choice;

    while (true) {
        cout << "\n===== 学生信息管理系统 =====" << endl;
        cout << "1. 添加学生信息" << endl;
        cout << "2. 显示所有学生信息" << endl;
        cout << "3. 按学号查找学生" << endl;
        cout << "4. 计算所有学生平均分" << endl;
        cout << "5. 退出系统" << endl;
        cout << "请输入操作编号: ";
        
        cin >> choice;

        switch (choice) {
        case 1:
            manager.addStudent();
            break;
        case 2:
            manager.showAllStudents();
            break;
        case 3:
            manager.searchById();
            break;
        case 4:
            manager.showAverageOfAll();
            break;
        case 5:
            cout << "系统已退出。" << endl;
            return 0;
        default:
            cout << "无效输入，请重新选择！" << endl;
        }
    }
}
