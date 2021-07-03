#include "Settings.hpp"

using namespace tie;

////////// Parameters ///////////

    float    Settings::TileSize     {32.0f};
unsigned int Settings::WindowWidth  {1366};
unsigned int Settings::WindowHeight {768};

//////////// Getters ////////////

float Settings::getTileSize ()
{
    return TileSize;
}

unsigned int Settings::getWindowWidth ()
{
    return WindowWidth;
}

unsigned int Settings::getWindowHeight ()
{
    return WindowHeight;
}

//////////// Setters ////////////

void Settings::setTileSize (float value)
{
    TileSize = value;
}

void Settings::setWindowWidth (unsigned int value)
{
    WindowWidth = value;
}

void Settings::setWindowHeight (unsigned int value)
{
    WindowHeight = value;
}
