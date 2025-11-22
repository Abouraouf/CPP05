#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try {
        Intern intern;
        AForm *form = intern.makeForm("", "mahdi");
        if (form)
            std::cout << *form << std::endl;
        delete form;
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
        std::cerr << "Error: " << e.what() << std::endl;
    }


    return 0;
}
