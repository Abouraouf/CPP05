#pragma once
#include <iostream>

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat(const std::string& name, int grade);
		~Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat &other);

		const std::string& getName() const;
		int getGrade() const;
		
		void upgrade();
		void downgrade();
		
		class GradeTooLowException : public std::exception 
		{
			public:
				const char* what() const throw()
				{
					return "Bureaucrat grade too low!";
				}
		};
		class GradeTooHighException : public std::exception 
		{
			public:
				const char* what() const throw()
				{
					return "Bureaucrat grade too high!";
				}
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);
	