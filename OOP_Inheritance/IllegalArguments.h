#ifndef _IllegalArguments_h_
#define _IllegalArguments_h_
#include <exception>

class IllegalArguments : public std::exception
{
public:
	virtual const char* what() const throw();//contain a description of the exception.

};

#endif // !_IllegalArguments_h_
