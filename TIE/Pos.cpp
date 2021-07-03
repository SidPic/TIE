#include "Pos.hpp"
#include "Vec2.hpp"
#include "Settings.hpp"

using namespace tie;

//////// Full constructors /////////

Pos::Pos (const Vec2& vec):
    pixels           {vec},
    tiles  {vec / Settings::TileSize}
{ }

Pos::Pos (float x, float y):
    pixels                       {x, y},
    tiles {x / Settings::TileSize, y / Settings::TileSize}
{ }

///////////// Getters //////////////

Vec2 Pos::asTiles () const
{
    return tiles;
}

Vec2 Pos::asPixels () const
{
    return pixels;
}

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

void Pos::operator= (const Pos& _pos)
{
    pixels = _pos.pixels;
    tiles = _pos.tiles;
}

void Pos::operator= (const Vec2& vec)
{
    pixels = vec;
    tiles = vec / Settings::TileSize;
}

///////// with assignment //////////

/// for Pos

#define OPERATOR(op)\
void Pos::operator op (const Pos& _pos)    \
{                                          \
    pixels op _pos.pixels;                 \
    tiles = pixels / Settings::TileSize;   \
}

OPERATOR(+=)
OPERATOR(-=)
OPERATOR(*=)
OPERATOR(/=)

#undef OPERATOR

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

/////// without assignment /////////

/// for Pos

#define OPERATOR(op)\
Pos Pos::operator op (const Pos& _pos) const \
{                                            \
    return {pixels op _pos.pixels};           \
}

OPERATOR(+)
OPERATOR(-)
OPERATOR(*)
OPERATOR(/)

#undef OPERATOR

/// for Vec2

#define OPERATOR(op)\
Pos Pos::operator op (const Vec2& vec) const \
{                                           \
    return {pixels op vec};                 \
}

OPERATOR(+)
OPERATOR(-)
OPERATOR(*)
OPERATOR(/)

#undef OPERATOR
