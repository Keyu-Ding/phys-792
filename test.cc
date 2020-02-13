#include <iostream>
#include <TRandom3.h>
int main ()
{
	int a = 2;
	int b = 3;	
	int c = a*b;
	std::cout<<c<<std::endl;
	
	TRandom3 generator(0);
	std::cout<<generator.Rndm()<<std::endl;

	return 0;
}
