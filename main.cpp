#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <fstream>
#include "Employee.h"
using namespace std;
// MAIN PROGRAM
int main()
{
    Employee one("Maria",101510,"English","Teacher");
    Employee two("Chris",199999,"MATH","Teacher");
    Employee three("Mikeal",430101,"CompSci","Software Engineer");
    cout << "Employees:" << endl
    << one.getName() << "\t" << one.getID() << "\t" << one.getDepartment() << "\t" << one.getPosition()
    << endl
    << two.getName() << "\t" << two.getID() << "\t" << two.getDepartment() << "\t" << two.getPosition()
    << endl
    << three.getName() << "\t" << three.getID() << "\t" << three.getDepartment() << "\t" << three.getPosition()
    << endl;
    return 0;
}
