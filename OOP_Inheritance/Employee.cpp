#include "Employee.h"
#include <iostream>

int Employee::next_id = 0;//initialize the static number.
//c'tors:
Employee::Employee() :id(++next_id), description("???")
{
}

Employee::Employee(std::string jobTitle) : description(jobTitle)
{
	id = ++next_id;
}


//printing an employee.
std::ostream& operator<<(std::ostream& out, const Employee& emp)
{
	return emp.print(out);
}
//getters:
int Employee::getID()const
{
	return id;
}

std::string Employee::getDescription()const
{
	return description;
}
//setter:
Employee& Employee::setDescription(std::string jobTitle)
{
	description = jobTitle;
	return *this;
}