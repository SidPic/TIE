#ifndef TIE_SFML_INTEGRATION_WINDOW
#define TIE_SFML_INTEGRATION_WINDOW

#include <SFML/Graphics/RenderWindow.hpp>

#include "Pos.hpp"

namespace tie
{

class Window : public sf::RenderWindow
{
private:

    //////////// Attributes ////////////

     Pos  maxPos;
     Pos  centerPos;
    float scale;

public:

    // Basic constructor & destructor //

     Window () { }
    ~Window () { }

    ///////// Full constructor /////////

    Window (sf::VideoMode, const sf::String& title, sf::Uint32 style);

    ///////////// Getters //////////////

     Pos    getMaxPos  (void) const;
     Pos  getCenterPos (void) const;
    float   getScale   (void) const;

    //////// Attributes update /////////

    Window& updateAttr (void);

};

}

#endif
