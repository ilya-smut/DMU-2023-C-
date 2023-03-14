#pragma once
#include <string>
#include <vector>

using std::string;
using std::vector;

class Student
{
    private:
        string pNumber;
        string name;
        string university_name;
        string course_name;
        vector<string> modules;
    
    public:
        Student(string iname);
        Student(string iname, string ipNumber, string iuniversity_name, string icourse_name);
        
        string getName();
        string getCourse();
        string getpNumber();
        string getUniversity();
        vector<string> getModules();

        void setName(string iname);
        void setCourse(string icourse);
        void setpNumber(string ipNumber);
        void setUniversity(string iuniversity_name);
        void addModule(string imodule);


};