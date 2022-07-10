#include "IllegalArguments.h"
#include "Company.h"

Company::Company() : employees(0) {}

//THE BIG 3:
//1.copy-c'tor
Company::Company(const Company& other)
{
	std::vector<Employee*>::const_iterator it;
	for (it = other.employees.begin(); it != other.employees.end(); ++it) {
		Employee* ptr_employee = *it;
		employees.push_back(ptr_employee->clone());
	}
}
//2.operator=
Company& Company::operator=(Company rhs)
{
	//Company objects have only one field vector<Employee*>
	//using copy c'tor to make a clone; by sending rhs by value.
	//using std::vector::swap to make an exchange between lhs & rhs
	employees.std::vector<Employee*>::swap(rhs.employees);
	return *this;
}
//3.d'tor
Company::~Company()
{
	for (std::vector<Employee*>::iterator vi = employees.begin(); vi != employees.end(); ++vi)
	{
		delete(*vi);//deleting all the objects that the pointers in the vector points to.

	}
	employees.clear();//clear the vector from the pointers.
}

bool Company::contains(const int& id)const
{
	std::vector<Employee*>::const_iterator it;
	it = find_if(employees.begin(), employees.end(), EmployeeIdCompare(id));
	return (it != employees.end()); //if found, then this expression is true
}

Company& Company::operator+=(const Employee* rhs) {
	if (rhs) {
		if (!(contains(rhs->getID()))) {//rhs not NULL and it ID not found then:
			Employee* rhs_copy = rhs->clone();
			employees.push_back(rhs_copy);
		}
	}
	else
		throw IllegalArguments(); //in case rhs is NULL.
	return *this;
}

Company& Company::operator-=(const int& rhs) {
	std::vector<Employee*>::iterator it;
	it = find_if(employees.begin(), employees.end(), EmployeeIdCompare(rhs));//looks in the vector for an employee with a given ID.
	if (it != employees.end()) {//if exist then:
		delete* it;//delete employee
		employees.erase(it); //delete the pointer that was pointing to the founed employee from it cell in the vector.
	}
	return *this;
}

Employee* Company::operator[](const int& id) const {
	std::vector<Employee*>::const_iterator it;
	it = find_if(employees.begin(), employees.end(), EmployeeIdCompare(id));
	if (it == employees.end())//if an employee is unfound then return NULL,else return a copy.
		return 0;
	Employee* e_ptr(*it);
	return e_ptr->clone();
}

std::ostream& operator<<(std::ostream& out, const Company& obj) {
	std::vector<Employee*>::const_iterator it; //const_iterator because obj is const, so it points to const value
	if (obj.employees.empty())
		out << "Company is empty" << std::endl;
	else {
		out << "Company employees:" << std::endl;
		for (it = obj.employees.begin(); it != obj.employees.end(); ++it) {
			out << " " << *(*it);//here works the Employee's operator <<
		}
	}
	return out;
}