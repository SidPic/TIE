#include "Vec2.hpp"

using namespace tie;

//////// Full constructor ///////

Vec2::Vec2 (float _x, float _y):
    x {_x},
    y {_y}
{ }

/////////// Operators ///////////

//////// with assignment ////////

/// for Vec2

#define OPERATOR(op)\
void Vec2::operator op (const Vec2& _vec) \
{                                         \
    x op _vec.x;                          \
    y op _vec.y;                          \
}

OPERATOR(+=)
OPERATOR(-=)
OPERATOR(*=)
OPERATOR(/=)

#undef OPERATOR

/// for number

#define OPERATOR(op)\
void Vec2::operator op (float number) \
{                                     \
    x op number;                      \
    y op number;                      \
}

OPERATOR(+=)
OPERATOR(-=)
OPERATOR(*=)
OPERATOR(/=)

#undef OPERATOR

////// without assignment ///////

/// for Vec2

#define OPERATOR(op)\
Vec2 Vec2::operator op (const Vec2& _vec) const \
{                                               \
    return {x op _vec.x, y op _vec.y};          \
}

OPERATOR(+)
OPERATOR(-)
OPERATOR(*)
OPERATOR(/)

#undef OPERATOR

/// for number

#define OPERATOR(op)\
Vec2 Vec2::operator op (float number) const \
{                                           \
    return {x op number, y op number};      \
}

OPERATOR(+)
OPERATOR(-)
OPERATOR(*)
OPERATOR(/)

#undef OPERATOR

