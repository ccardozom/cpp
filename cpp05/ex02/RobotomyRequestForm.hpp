#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
# include <fstream>

class RobotomyRequestForm : public Form{
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string const);
        RobotomyRequestForm(RobotomyRequestForm const &);
        virtual ~RobotomyRequestForm();

        RobotomyRequestForm &operator=(RobotomyRequestForm const &);

        void    ActionExec() const;
};

#endif