#include "DeveloperEmployee.h"

// default c'tor:
DeveloperEmployee::DeveloperEmployee() :Employee(), project("???") {}
//c'tor overloading:
DeveloperEmployee::DeveloperEmployee(std::string jobTitle, std::string projectName) : Employee(jobTitle), project(projectName)
{
}

// set project name:
DeveloperEmployee& DeveloperEmployee::setProject()
{
	project = "???";
	return *this;
}
DeveloperEmployee& DeveloperEmployee::setProject(std::string newName)
{
	project = newName;
	return *this;
}

DeveloperEmployee* DeveloperEmployee::clone()const
{
	return new DeveloperEmployee(*this);
}

//printing function:
std::ostream& DeveloperEmployee::print(std::ostream& out) const
{
	return out << "Developer ID = " << getID() << ", project = " << project << std::endl;
}
