#include <iostream>
#include <TRandom.h>
int main ()
{
	
	TRandom generator(0);
	std::cout<<generator.Poisson(2)<<std::endl;
	std::cout<<generator.Gaus (0, 1)<<std::endl;

	return 0;
}
