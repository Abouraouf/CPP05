#pragma once

#include <iostream>
#include <string>

class AForm;

class Bureaucrat
{
private:
    const std::string   _name;
    int                 _grade;

public:
    Bureaucrat();
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat& other);
    ~Bureaucrat();

    Bureaucrat& operator=(const Bureaucrat& other);

    const std::string&  getName() const;
    int                 getGrade() const;

    void                incrementGrade();
    void                decrementGrade();
    void                executeForm(AForm const & form);
    void                signForm(AForm& form) const;

    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw();
    };

    friend std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);
};
