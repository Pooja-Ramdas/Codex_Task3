#include <iostream>

struct Student {
    int studentID;
    double GPA;
};

void printStudentInfo(Student s) {
    // Implement a function to print the student's ID and GPA
    // using call by value. Write the function definition here.
    std::cout << "Student ID: " << s.studentID << std::endl;
    std::cout << "GPA: " << s.GPA << std::endl;
}

int main() {
    Student alice = {101, 3.8};
    printStudentInfo(alice);
    return 0;
}
