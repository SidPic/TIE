#include <iostream>

#include "TIE/All.hpp"

using namespace tie;

int main ()
{
    Pos p(12, 21);
    LitePos* pos;
    pos = &p;
    *pos *= Vec2(32, 32);
    std::cout << pos->asTiles().x << ", " << pos->asTiles().y << std::endl;
    return 0;
}
