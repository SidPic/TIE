#ifndef TIE_LPOS_HPP
#define TIE_LPOS_HPP

#include "Vec2.hpp"

namespace tie
{

class LitePos  /// faster for setters than Pos
{
protected:

    /////////// Coordinates ////////////

    Vec2 pixels;

public:

    // Basic constructor & destructor //

     LitePos () { }
    ~LitePos () { }

    //////// Full constructors /////////

    LitePos   (const Vec2&);
    LitePos (float x, float y);

    ///////////// Getters //////////////

    virtual Vec2 asTiles  (void) const;
            Vec2 asPixels (void) const;

    ///////////// Setters //////////////

    virtual void set    (const Vec2&);
    virtual void set (float x, float y);

    //////////// Operators /////////////

    /////////// assignment /////////////

    virtual void operator= (const Vec2&);
    virtual void operator= (const LitePos&);

    ///////// with assignment //////////

    virtual void operator+= (const Vec2&);
    virtual void operator-= (const Vec2&);
    virtual void operator*= (const Vec2&);
    virtual void operator/= (const Vec2&);

    virtual void operator+= (const LitePos&);
    virtual void operator-= (const LitePos&);
    virtual void operator*= (const LitePos&);
    virtual void operator/= (const LitePos&);

    /////// without assignment /////////

    LitePos operator+ (const Vec2&) const;
    LitePos operator- (const Vec2&) const;
    LitePos operator* (const Vec2&) const;
    LitePos operator/ (const Vec2&) const;

    LitePos operator+ (const LitePos&) const;
    LitePos operator- (const LitePos&) const;
    LitePos operator* (const LitePos&) const;
    LitePos operator/ (const LitePos&) const;

    ///////////// Friends //////////////

    friend class Pos;

};

typedef LitePos lPos;

}

#endif
