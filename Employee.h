#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include <string>
using namespace std;
class Employee
{
    private:
        string name;
        int id;
        string department;
        string position;

    public:
        Employee();
        Employee(string, int);
        Employee(string, int, string, string);
        void setName(string);
        void setID(int);
        void setDepartment(string);
        void setPosition(string);
        string getName() const;
        int getID() const;
        string getDepartment() const;
        string getPosition() const;

};

#endif // EMPLOYEE_H_INCLUDED