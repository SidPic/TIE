#include <iostream>

#include "TIE/All.hpp"

using namespace tie;

int main ()
{
    Map map(10, 10);
    map.fill(2).set(0, 4, 8);

    for (int y = 0; y < map.getSize().y; ++y)
    {
        for (int x = 0; x < map.getSize().x; ++x)
        {
            std::cout << map.get(x, y);
        }
        std::cout << std::endl;
    }
    Pos p(12, 21);
    LitePos* pos;
    pos = &p;
    *pos *= Vec2(32, 32);
    std::cout << pos->asTiles().x << ", " << pos->asTiles().y << std::endl;
    return 0;
}
