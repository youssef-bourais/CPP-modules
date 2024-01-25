


#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Fwoosh", "fwooshed") 
{
}

Polymorph::~Polymorph()
{
}

Polymorph* Fwoosh::clone() const
{
    return new Fwoosh;
}


