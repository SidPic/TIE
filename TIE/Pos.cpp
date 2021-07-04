#include "Pos.hpp"
#include "Vec2.hpp"
#include "Settings.hpp"

using namespace tie;

//////// Full constructors /////////

Pos::Pos (const Vec2& vec):
    LitePos {vec},
    tiles   {vec / Settings::TileSize}
{ }

Pos::Pos (const LitePos& _pos):
    LitePos {_pos},
    tiles   {_pos.pixels / Settings::TileSize}
{ }

Pos::Pos (float x, float y):
    LitePos {x, y},
    tiles   {x / Settings::TileSize, y / Settings::TileSize}
{ }

///////////// Getters //////////////

Vec2 Pos::asTiles () const
{
    return tiles;
}

/// 'Vec2 asPixels () const' identical to LitePos realization

///////////// Setters //////////////

void Pos::set (const Vec2& vec)
{
    pixels = vec;
    tiles = pixels / Settings::TileSize;
}

void Pos::set (float x, float y)
{
    pixels = {x, y};
    tiles = pixels / Settings::TileSize;
}

//////////// Operators /////////////

/////////// assignment /////////////

void Pos::operator= (const Vec2& vec)
{
    pixels = vec;
    tiles = vec / Settings::TileSize;
}

void Pos::operator= (const LitePos& _pos)
{
    pixels = _pos.pixels;
    tiles = _pos.pixels / Settings::TileSize;
}

///////// with assignment //////////

/// for Vec2

#define OPERATOR(op)\
void Pos::operator op (const Vec2& vec)  \
{                                        \
    pixels op vec;                       \
    tiles = pixels / Settings::TileSize; \
}

OPERATOR(+=)
OPERATOR(-=)
OPERATOR(*=)
OPERATOR(/=)

#undef OPERATOR

/// for Pos

#define OPERATOR(op)\
void Pos::operator op (const LitePos& _pos) \
{                                           \
    pixels op _pos.pixels;                  \
    tiles = pixels / Settings::TileSize;    \
}

OPERATOR(+=)
OPERATOR(-=)
OPERATOR(*=)
OPERATOR(/=)

#undef OPERATOR

/////// without assignment /////////

/// identical to LitePos realization
