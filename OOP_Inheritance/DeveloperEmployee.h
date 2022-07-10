#ifndef _DeveloperEmployee_h_
#define _DeveloperEmployee_h_
#include "Employee.h"
#include<iostream>


class DeveloperEmployee : public Employee
{
private:
	std::string project;//represent the employee project name

public:
	//c'tor
	DeveloperEmployee();
	DeveloperEmployee(std::string jobTitle, std::string projectName = "???");
	//setters:
	DeveloperEmployee& setProject(std::string newName);
	DeveloperEmployee& setProject();

	virtual DeveloperEmployee* clone()const;//covariant return type
	virtual std::ostream& print(std::ostream& out) const;
	virtual ~DeveloperEmployee() {}
};

#endif
