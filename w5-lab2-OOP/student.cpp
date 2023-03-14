#include "student.h"
#include <string>
#include <vector>

using std::string;
using std::vector;


Student::Student(string iname){
    name = iname;
}
Student::Student(string iname, string ipNumber, string iuniversity_name, string icourse_name){
    name = iname;
    pNumber = ipNumber;
    university_name = iuniversity_name;
    course_name = icourse_name;
}

string Student::getName(){
    return name;
}
string Student::getCourse()
{
    return course_name;
}
string Student::getpNumber(){
    return pNumber;
}
string Student::getUniversity(){
    return university_name;
}
vector<string> Student::getModules(){
    return modules;
}

void Student::setName(string iname){
    name = iname;
}
void Student::setCourse(string icourse){
    course_name = icourse;
}
void Student::setpNumber(string ipNumber){
    pNumber = ipNumber;
}
void Student::setUniversity(string iuniversity_name){
    university_name = iuniversity_name;
}
void Student::addModule(string imodule){
    modules.insert(modules.begin(),imodule);
}