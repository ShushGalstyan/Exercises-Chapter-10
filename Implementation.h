// Fig. 10.21: Implementation.h
// Implementation class definition
class Implementation
{
public:
//constructor
	Implementation(int v)
		:value(v)
	{
		//empty body
	}//end constructor Implememtation
	//set value to v
	{
		value = v;//dould validate v
	}
	//return value
	int getvalue() const
	{
		return value;
	}
private:
	int value;
};
