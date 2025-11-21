#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main()
{
	srand(time(0));
    try {
        Bureaucrat boss("Boss", 1);

        PresidentialPardonForm pardon("Alice");
        RobotomyRequestForm robot("Bob");
        ShrubberyCreationForm shrub("garden");

        boss.signForm(pardon);
        boss.signForm(robot);
        boss.signForm(shrub);

        boss.executeForm(pardon);
        boss.executeForm(robot);
        boss.executeForm(shrub);
    }
    catch (std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}
