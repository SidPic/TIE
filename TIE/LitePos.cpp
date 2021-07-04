#include "Vec2.hpp"
#include "LitePos.hpp"
#include "Settings.hpp"

using namespace tie;

//////// Full constructors /////////

LitePos::LitePos (const Vec2& vec):
    pixels {vec}
{ }

LitePos::LitePos (float x, float y):
    pixels {x, y}
{ }

///////////// Getters //////////////

Vec2 LitePos::asTiles () const
{
    return pixels / Settings::TileSize;
}

Vec2 LitePos::asPixels () const
{
    return pixels;
}

///////////// Setters //////////////

void LitePos::set (const Vec2& vec)
{
    pixels = vec;
}

void LitePos::set (float x, float y)
{
    pixels = {x, y};
}

//////////// Operators /////////////

/////////// assignment /////////////

void LitePos::operator= (const LitePos& _pos)
{
    pixels = _pos.pixels;
}

void LitePos::operator= (const Vec2& vec)
{
    pixels = vec;
}

///////// with assignment //////////

/// for Vec2

#define OPERATOR(op)\
void LitePos::operator op (const Vec2& vec) \
{                                           \
    pixels op vec;                          \
}

OPERATOR(+=)
OPERATOR(-=)
OPERATOR(*=)
OPERATOR(/=)

#undef OPERATOR

/// for Pos

#define OPERATOR(op)\
void LitePos::operator op (const LitePos& _pos) \
{                                               \
    pixels op _pos.pixels;                      \
}

OPERATOR(+=)
OPERATOR(-=)
OPERATOR(*=)
OPERATOR(/=)

#undef OPERATOR

/////// without assignment /////////

/// for Vec2

#define OPERATOR(op)\
LitePos LitePos::operator op (const Vec2& vec) const \
{                                                    \
    return {pixels op vec};                          \
}

OPERATOR(+)
OPERATOR(-)
OPERATOR(*)
OPERATOR(/)

#undef OPERATOR

/// for Pos

#define OPERATOR(op)\
LitePos LitePos::operator op (const LitePos& _pos) const \
{                                                        \
    return {pixels op _pos.pixels};                      \
}

OPERATOR(+)
OPERATOR(-)
OPERATOR(*)
OPERATOR(/)

#undef OPERATOR
