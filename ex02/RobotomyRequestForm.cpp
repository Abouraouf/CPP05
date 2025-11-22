#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(): AForm("robotomy request", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& Target) :  AForm("robotomy request", 72, 45), _target(Target)
{
	_target = Target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other)
{
	*this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this != &other)
	{
		_target = other._target;
		setIsSigned(other.getIsSigned());
	}
		return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	(void) executor;
	srand(time(0));
	int random = rand() % 2;

	if (random == 1)
	{
		std::cout << _target  << " has been robotomized successfully " << std::endl;
	}
	else
		std::cout << "robotomy failed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
