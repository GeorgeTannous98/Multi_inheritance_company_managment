#ifndef _Company_h_
#define _Copmany_h_
#include <vector>
#include"Employee.h"
#include<algorithm>
#include"Functors.h"

class Company
{
private:
	std::vector<Employee*> employees;//vector of pointers of employees.
public:
	Company();
	Company(const Company& other);//copy c'tor.
	Company& operator=(Company rhs);
	bool contains(const int& id)const;//check employee existence
	Company& operator+=(const Employee* _employee);//insert an employee to the copany container
	Company& operator-=(const int& id);//remove employee with giving ID number
	Employee* operator[](const int& id) const;//check by a given ID if an employee does exist, then return a pointer to a copy of it.
	friend std::ostream& operator<<(std::ostream& out, const Company& obj);//the way company objects is coming to the screen :) .

	~Company();//d'tor
};

#endif // !_Company_h_

