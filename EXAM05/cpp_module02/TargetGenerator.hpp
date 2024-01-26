
#pragma once

#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
    private:
        TargetGenerator(const TargetGenerator &copy);
        TargetGenerator &operator=(const TargetGenerator &src);
        std::map<std::string, ATarget *> Target;
    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget *target);
        void forgetTargetType(std::string const &type);
        ATarget* createTarget(std::string const &target);
};


