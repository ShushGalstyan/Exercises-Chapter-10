//definition of class incremnet.
#ifndef INCREMENT_H
#define INCREMENT_H
class Increment
{
public:
	Increment(int c=0, int i = 1);//default constructor
	//function addIncrement definition
	void addIncrement()
	{	
		count+=increment;
	}
	void print() const;
private:
	int count;
	int increment;//const data member

};
#endif

