#include <iostream>
#include <vector>

// this has been replaced with 'using'
// typedef std::vector<std::pair<std::string, int>> pairlist_t; // creating a custom name for a type
using pairlist_t = std::vector<std::pair<std::string, int>>;

int main()
{
    // std::vector<std::pair<std::string, int>> pairlist;
    pairlist_t pairlist;

    return 0;
}
