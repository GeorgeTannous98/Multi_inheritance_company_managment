#include "Functors.h"

EmployeeIdCompare::EmployeeIdCompare(int x) : id(x) {}

bool EmployeeIdCompare::operator()(const Employee* emp) const {
	return (emp->getID() == id);//for a given id checks if it equal to a given employee id and returns true/false.
}