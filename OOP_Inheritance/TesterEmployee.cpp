#include "TesterEmployee.h"

//c'tors:
TesterEmployee::TesterEmployee() :Employee(), level("???") {}
TesterEmployee::TesterEmployee(std::string jobTitle, std::string _level) : Employee(jobTitle), level(_level) {}

//setters:
TesterEmployee& TesterEmployee::setLevel(std::string newLevel)
{
	level = newLevel;
	return *this;
}
TesterEmployee& TesterEmployee::setLevel()
{
	level = "???";
	return *this;
}

TesterEmployee* TesterEmployee::clone()const
{
	return new TesterEmployee(*this);
}

//printing function:
std::ostream& TesterEmployee::print(std::ostream& out) const
{
	return out << "Tester ID = " << getID() << ", level = " << level << std::endl;
}