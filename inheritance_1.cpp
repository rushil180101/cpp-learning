#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    int emp_id = 1;
    string emp_name;
};

/*
Syntax for derived class
class DerivedClassName : {{visibility-mode}} BaseClassName
{...};

Notes
1. Default visibility mode is private
2. Private visibility mode: (Parent's) Public becomes Private (in child)
3. Public  visibility mode: (Parent's) Public becomes Public  (in child)
4. Private data members of a base class are NEVER accessible in child class
*/

class SoftwareEngineer : Employee // Derived privately
{
public:
    int project_id;
    string asset_id;
};

class HR : public Employee // Derived publicly
{
public:
    int hr_id;
};

int main()
{
    // ########################## //
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    // ########################## //

    SoftwareEngineer se1;
    HR hr1;

    cout << "HR - " << hr1.emp_id << endl;
    // cout << "SE - " << se1.emp_id << endl; <-- Not accessible

    return 0;
}
