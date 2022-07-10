#ifndef _TesterEmployee_h_
#define _TesterEmployee_h_
#include "Employee.h"

class TesterEmployee : public Employee
{
private:
	std::string level;
public:
	//c'tor
	TesterEmployee();
	TesterEmployee(std::string jobTitle, std::string _level = "???");
	virtual ~TesterEmployee() {}
	TesterEmployee& setLevel(std::string newLevel);
	TesterEmployee& setLevel();

	virtual TesterEmployee* clone()const;//covariant return type
	virtual std::ostream& print(std::ostream& out) const;

};
#endif // !_TesterEmployee_h_
