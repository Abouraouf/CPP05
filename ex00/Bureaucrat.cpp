#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("????"), grade(1)
{
	std::cout << "the default constructor has been called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade)
{
	std::cout << "the copy constructor has been called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& Name, int Grade):name(Name),grade(Grade)
{
	if (grade < 1 || grade > 150)
        throw std::out_of_range("Grade must be 1-150");
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	std::cout << "the copy assignment operator has been called" << std::endl;
	if (this != &other)
		this->grade = other.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "the default destructor has been called" << std::endl;
}

const std::string& Bureaucrat::getName() const
{
	return(name);
}

int Bureaucrat::getGrade() const
{
	return (grade);
}

void Bureaucrat::upgrade()
{
	if (grade > 0)
		grade--;
	else
		throw GradeTooHighException();

}
void Bureaucrat::downgrade()
{
	if (grade < 150)
		grade++;
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return os;
}
