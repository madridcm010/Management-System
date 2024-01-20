#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <fstream>
#include "Employee.h"
using namespace std;
// FUNCTION DEFINITIONS
Employee::Employee()
{
    name = "";
    id = 0;
    department = "";
    position = "";
}
Employee::Employee(string n , int i)
{
    name = n;
    id = i;
    department = "";
    position = "";
}
Employee::Employee(string n , int i , string d, string p)
{
    name = n;
    id = i;
    department = d;
    position = p;
}
void Employee::setName(string n)
{
    name = n;
}
void Employee::setID(int i)
{
    id = i;
}
void Employee::setDepartment(string d)
{
    department = d;
}
void Employee::setPosition(string p)
{
    position = p;
}
string Employee::getName() const
{
    return name;
}
int Employee::getID() const
{
    return id;
}
string Employee::getDepartment() const
{
    return department;
}
string Employee::getPosition() const
{
    return position;
}