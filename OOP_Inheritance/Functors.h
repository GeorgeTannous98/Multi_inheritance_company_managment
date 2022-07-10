#include "Employee.h"

#ifndef __Functors_H__
#define __Functors_H__

class EmployeeIdCompare {
	int id;
public:
	explicit EmployeeIdCompare(int x);
	bool operator()(const Employee* emp) const;
};
#endif