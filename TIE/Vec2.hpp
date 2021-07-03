#ifndef TIE_VEC2_HPP
#define TIE_VEC2_HPP

namespace tie
{

class Vec2
{
public:

    // Basic constructor & destructor //

     Vec2 () { }
    ~Vec2 () { }

    /////////// Coordinates ////////////

    float x, y;

    ///////// Full constructor /////////

    Vec2 (float _x, float _y);

    //////////// Operators /////////////

    ///////// with assignment //////////

    void operator+= (const Vec2&);
    void operator-= (const Vec2&);
    void operator*= (const Vec2&);
    void operator/= (const Vec2&);

    void operator+= (float number);
    void operator-= (float number);
    void operator*= (float number);
    void operator/= (float number);

    //////// without assignment ////////

    Vec2 operator+  (const Vec2&) const;
    Vec2 operator-  (const Vec2&) const;
    Vec2 operator*  (const Vec2&) const;
    Vec2 operator/  (const Vec2&) const;

    Vec2 operator+  (float number) const;
    Vec2 operator-  (float number) const;
    Vec2 operator*  (float number) const;
    Vec2 operator/  (float number) const;
};

}
#endif
