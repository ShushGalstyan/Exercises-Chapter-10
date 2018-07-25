//friends can access private member of a class.
#include <iostream>
using namespace std;
//count class definition
class Count
{
	friend void setX(Count &,  int);//friend definition
public:
	//constructor
	Count()
		: x(0)//initialize x to 0
	{
		//empty body
	}//end constructor Count
	//output x
	void print() const
	{
		cout<< x<< endl;
	}
private:
	int x;// data member

};
// function setX can modify private data of Count
// because setX is declared as a friend of Count 
void setX(Count &c, int val)
{
	c.x = val;//allowws becouse setX is a friend function ao Count
}
int main()
{
	Count counter; //create Count object
	cout<<"counter.x after instantiation: ";
	counter.print();
	setX(counter, 9);
	cout<<"counter.x after call to setX friend function: ";
	counter.print();
}
