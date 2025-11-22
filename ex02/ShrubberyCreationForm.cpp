#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery creation", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& Target) :  AForm("shrubbery creation", 145, 137), _target(Target)
{
	_target = Target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other)
{
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
	{
		_target = other._target;
		setIsSigned(other.getIsSigned());
	}
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	(void) executor;
	std::ofstream myfile;
	std::string name = _target+"_shrubbery";
	myfile.open (name.c_str());
	
	if (!myfile.is_open()) {
    std::cerr << "Failed to open file!" << std::endl;
    return;
}
	myfile << "         *\n";
	myfile << "        / \\\n";
	myfile << "       /   \\\n";
	myfile << "      /     \\\n";
	myfile << "     /_______\\\n";
	myfile << "        |||\n";
	myfile << "        |||\n";
	myfile << "     ___||___ \n";

	myfile.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
