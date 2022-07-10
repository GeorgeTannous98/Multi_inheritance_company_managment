#ifndef _Printable_h_
#define _Printable_h_
#include <iostream>

template< class T >
class Printable : public T
{

public:
	void printDescription() const  //printing the description
	{
		std::cout << this->getDescription() << std::endl;
	}
	virtual Printable<T>* clone() const = 0;
	virtual ~Printable() {}
};
#endif 
