
#include "Dummy.hpp"
#include "Warlock.hpp"
#include "Fwoosh.hpp"
#include <cstdlib>

int mai()
{
  Warlock richard("Richard", "the Titled");

  Dummy bob;
  Fwoosh* fwoosh = new Fwoosh();
  /* Fwoosh* fwoosh2 = new Fwoosh(); */

  richard.learnSpell(fwoosh);
  richard.learnSpell(fwoosh);

  richard.introduce();
  richard.launchSpell("Fwoosh", bob);
  richard.launchSpell("Fwoosh", bob);

  richard.forgetSpell("Fwoosh");
  richard.launchSpell("Fwoosh", bob);
  delete fwoosh;
  return 0;
}


int main()
{

    mai();
    system("leaks exam");
}
