#include "Bureaucrat.hpp"

int main()
{
    try {
		Bureaucrat mahdi("mahdi", 1);
		mahdi.upgrade();
		mahdi.upgrade();
		std::cout << mahdi << std::endl;
		mahdi.downgrade();
		std::cout << mahdi <<std::endl;
	}

	catch(std::exception& exe)
	{
		std::cerr << "there is an error " << exe.what() << std::endl;
	}
    std::cout << "Done.\n";
    return 0;
}