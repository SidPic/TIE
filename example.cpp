#include <iostream>

#include "TIE/All.hpp"

using namespace tie;

int main ()
{
    Pos pos(12, 21);
    pos = pos * Vec2(32, 32);
    std::cout << pos.asTiles().x << ", " << pos.asTiles().y << std::endl;
    return 0;
}
