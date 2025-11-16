#pragma once
 
// continu the messages

#include <iostream>
#include <string>
 // 
class Bureaucrat;

class AForm
{
private:
    const std::string   _name;
    bool                _isSigned;
    const int           _gradeToSign;
    const int           _gradeToExecute;

public:
    AForm();
    AForm(const std::string& name, int gradeToSign, int gradeToExecute);
    AForm(const AForm& other);
    virtual ~AForm();
    virtual void  execute(Bureaucrat const & executor) const = 0;
    AForm& operator=(const AForm& other);

    const std::string&  getName() const;
    bool                getIsSigned() const;
    bool                setIsSigned(bool sign) const;
    int                 getGradeToSign() const;
    int                 getGradeToExecute() const;

    void                beSigned(const Bureaucrat& b);
    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
    	const char* what() const throw();
    };

    friend std::ostream& operator<<(std::ostream& os, const AForm& f);
};
