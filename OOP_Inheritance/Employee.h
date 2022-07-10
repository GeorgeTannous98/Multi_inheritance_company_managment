#ifndef _Employee_h_
#define _Employee_h_
#include <iostream>
#include<string>
class Employee
{
private:
	std::string description;
protected:
	int id;//protected; to be accessible from a derived class.
	static int next_id;

public:

	//c'tors:
	Employee();//default c'tor
	Employee(std::string jobTitle);

	//Getters and setters:
	int getID()const;
	std::string getDescription()const;
	Employee& setDescription(std::string jobTitle);

	virtual Employee* clone()const = 0;
	virtual std::ostream& print(std::ostream& out) const = 0;
	friend std::ostream& operator<<(std::ostream& out, const Employee& emp);

	virtual ~Employee() {}
};


#endif // !_Employee_h_
