
#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>

class ATarget;
class ASpell
{
    protected:
        std::string name;
        std::string effects;
    
    public:
        ASpell(const std::string &Name, const std::string &Effects);
        virtual ~ASpell();
        ASpell(const ASpell &copy);
        ASpell &operator=(const ASpell &src);
        
        std::string getName() const;
        std::string getEffects() const;
        
        virtual ASpell *clone() const = 0;
        void launch(const ATarget &ATarget) const;
};

#endif


