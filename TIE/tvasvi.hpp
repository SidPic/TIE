/**
      tie::Vec2 and sf::Vector2 integration
      |    |    |г--^   |       |
       \    \  // г----/       /
         -\  ||/ / г----------/
           \ |||| /
            vvvvvv  */
#ifndef TIE_TVASVI_HPP
#define TIE_TVASVI_HPP

#include <SFML/System/Vector2.hpp>

#include "Vec2.hpp"

namespace tie
{

/// Convert sf::Vector2 to tie::Vec2 ///

template <typename T>
Vec2 tieVec (const sf::Vector2<T>& sfv)
{
    return Vec2(sfv.x, sfv.y);
}

/// Convert tie::Vec2 to sf::Vector2 ///

template <typename T>
sf::Vector2<T> sfVec (const Vec2& tiev)
{
    return sf::Vector2<T>(tiev.x, tiev.y);
}

}

#endif
