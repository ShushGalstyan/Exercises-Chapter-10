//Employee class member function definition.
#include <iostream>
#include "Employee_.h"
using namespace std;
//define and initizial static dtata member at global namespace scope
int Employee::count =0;//connot include keyword static
// define static member function that returns number of
// Employee objects instantiated (declared static in Employee_.h)
int Employee::getCount()
{
	return count;
}
// constructor initializes non-static data members and
// increments static data member count
Employee::Employee(const string &first, const string &last)
	: firstName(first), lastName(last)
{
	++count;//increment static ount of employees
	cout<<"Employee constructor for "<<firstName <<" "<< lastName <<" called."<<endl;
}//end Employee constructor
//destructor deallocates dinamically allocated memory
Employee::~Employee()
{
	cout<<"~Employee() called for "<<firstName<< " "<<lastName<< " called."<<endl;
	--count;//decrement static count of employees
}//end ~Employee destructor
//return firts name of employee
string Employee::getFirstName() const
{
	return firstName;
}
//return last name of employee
string Employee::getLastName() const
{
	return lastName;
}
