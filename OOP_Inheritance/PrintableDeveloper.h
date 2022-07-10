#ifndef _PrintableDeveloper_h_
#define _PrintableDeveloper_h_
#include"Printable.h"
#include "DeveloperEmployee.h"

class PrintableDeveloper : public Printable<DeveloperEmployee>
{
public:
	PrintableDeveloper* clone() const
	{
		return new PrintableDeveloper(*this);

	}

};

#endif