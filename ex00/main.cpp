#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat mahdi;  

    std::cout << mahdi << "\n";

    try {
        mahdi.upgrade();
        std::cout << mahdi << "\n";
    }
    catch (const Bureaucrat::GradeTooHighException& e) {
        std::cout << "Cannot upgrade: " << e.what() << "\n";
    }

    try {
        mahdi.downgrade();
        std::cout << mahdi << "\n";
    }
    catch (const Bureaucrat::GradeTooLowException& e) {
        std::cout << "Cannot downgrade: " << e.what() << "\n";
    }

    std::cout << "Done.\n";
    return 0;
}