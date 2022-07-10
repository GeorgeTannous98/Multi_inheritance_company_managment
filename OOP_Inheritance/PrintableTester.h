#ifndef _PrintableTester_h_
#define _PrintableTester_h_
#include"Printable.h"
#include "TesterEmployee.h"
class PrintableTester : public Printable<TesterEmployee>
{
public:
	PrintableTester* clone() const
	{
		return new PrintableTester(*this);

	}
};

#endif 