#include "Settings.hpp"
#include "Window.hpp"
#include "tvasvi.hpp"
#include "Pos.hpp"

using namespace tie;

///////// Full constructor /////////

Window::Window (sf::VideoMode mode, const sf::String& title, sf::Uint32 style):
    RenderWindow (mode, title, style)
{
    updateAttr();
}

///////////// Getters //////////////

Pos Window::getMaxPos () const
{
    return maxPos;
}

Pos Window::getCenterPos () const
{
    return centerPos;
}

float Window::getScale () const
{
    return scale;
}

//////// Attributes update /////////

Window& Window::updateAttr ()
{
    maxPos = tieVec(getSize());
    centerPos = maxPos / Vec2(2, 2);
    scale = ( getSize().x / Settings::WindowWidth
            + getSize().y / Settings::WindowHeight )
            / 2;

    return *this;
}
