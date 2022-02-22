#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string const);
        ShrubberyCreationForm(ShrubberyCreationForm const &);
        virtual ~ShrubberyCreationForm();

        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);

        void    ActionExec() const;
};

#endif