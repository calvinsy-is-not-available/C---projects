#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main() {

    /* Namespace provides a solution for preventing name conflicts in large projects.
        Each entity needs a unique name. A namesapce allows for indentically name entities
        as long as the namespaces are different.
    */
   int x = 0;

   std::cout << x << '\n';

   std::cout << first::x << '\n';
   std::cout << second::x;

   return 0;
}