#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form{
    private:
        std::string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string const);
        PresidentialPardonForm(PresidentialPardonForm const &);
        virtual ~PresidentialPardonForm();

        PresidentialPardonForm &operator=(PresidentialPardonForm const &);

        void    ActionExec() const;
};

#endif