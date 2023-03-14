#include <iostream>
#include "student.h"
#include <string>
#include <vector>

using namespace std;

int main(){
    Student student1("Ilya Smut");
    student1.setCourse("Cyber Security");
    student1.setUniversity("De Montfort University");
    student1.setpNumber("P1234567");
    student1.addModule("Secure Coding");

    cout << student1.getName() << endl;
    cout << student1.getUniversity() << endl;
    cout << student1.getpNumber() << endl;
    cout << student1.getCourse() << endl;
    cout << student1.getModules()[0] << endl;
}