//Using the this pointer to refer to object member.
#include <iostream>
using namespace std;
class Test
{
public:
	Test(int =0);//default constructor
	void print() const;
private:
	int x;
};
//constructor
Test::Test(int value)
	: x(value)//initialize x to value
{
	//empty body
}
// print x using implicit and explicit this pointers;
// the parentheses around *this are required
void Test::print() const
{
	// implicitly use the this pointer to access the member x
	cout << "	x = " << x;
	// explicitly use the this pointer and the arrow operator
	// to access the member x
	cout << "\n this->x = " << this->x;
	// explicitly use the dereferenced this pointer and
	// the dot operator to access the member x
	cout << "\n(*this).x = " << ( *this ).x << endl;
} // end function print
int main()
{
	Test testObject(18);
	testObject.print();
}
