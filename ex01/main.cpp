#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        Bureaucrat bob("mahdi", 70);
        Form contract("Contract 42", 60, 40);

        std::cout << bob << std::endl;
        std::cout << contract << std::endl;

        bob.signForm(contract);
        std::cout << contract << std::endl;

        Bureaucrat yuuta("yuuta", 1);
        yuuta.signForm(contract);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}