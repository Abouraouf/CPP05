#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("presidential pardon", 25, 5), _target("?????")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& Target) : AForm("presidential pardon", 25, 5), _target(Target)
{
	_target = Target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other)
{
	*this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this != &other)
	{
		_target = other._target;
		setIsSigned(other.getIsSigned());
	}
		return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	(void) executor;
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox.\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
