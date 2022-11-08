#include <iostream>

#define MODE 1
#define ADD(a,b) ((a)+(b))
	
int main()
{

#if !defined MODE
	std::cout << "MODE is undefined" << std::endl;
#endif

#ifdef MODE
#if MODE == 0
	std::cout << "Training mode" << std::endl;

#elif MODE == 1
	int a = 0;
	int b = 0;
	std::cout << "Battle mode" << std::endl;
	std::cout << "Enter 1st number: ";
	std::cin >> a;
	std::cout << "Enter 2nd number: ";
	std::cin >> b;
	std::cout << "Sum = " << ADD(a, b) << std::endl;
#endif
#endif

#if MODE !=1
#if MODE !=0
#error Unknown mode, quitting
#endif
#endif
}
