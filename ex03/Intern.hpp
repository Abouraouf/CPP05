#pragma once
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern& other);
	const Intern& operator=(const Intern& other);
	~Intern();

	AForm* makeForm(const std::string form_name, const std::string form_target);
};
