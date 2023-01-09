#include <iostream>
#include <vector>

// we can give the following an alias so we don't have to type all of this out.
    // seems related to generics in java
typedef std::vector<std::pair<std::string, int>> pairlist_t;

// another example with a generic string (typically modified) associated with the generic alias text_t
typedef std::string text_t;

//another example using int
typedef int number_t;

int main() {

    /* typedef is a reserved keyword used to create an additional name (alias) for another data type.
        new identifier foe an existing type that helps with readability and reduces typos.
    */
        // Kind of like a nickname

    // here we are using the above alias to declare a new reference to the above type
    pairlist_t pairlist;

    text_t someName = "A null name";

    number_t someNumber = 1;

    std::cout << someName << '\n' << someNumber << '\n';

    // typedef has been kind of deprecated/replaced with the using keyword since 'using' works better with templates
        // par example:
            // using text_t = std::string;
            // or
            // using number_t = int;


   return 0;
}