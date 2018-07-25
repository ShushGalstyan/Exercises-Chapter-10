//Demostrating composition an abject with member objects.
#include <iostream>
#include "Employee.h"
#include "Employee.cpp"
#include "Date.cpp"
#include "Date.h"
using namespace std;
int main()
{
	Date birth(7,27,2001);
	Date hire(3,12,2008);
	Employee manager("Shush", "Galstyan", birth,hire);
	cout<<endl;
	manager.print();
}
