#ifndef TIE_POS_HPP
#define TIE_POS_HPP

#include "Vec2.hpp"

namespace tie
{

class Pos
{
private:

    /////////// Coordinates ////////////

    Vec2 pixels, tiles;

public:

    // Basic constructor & destructor //

     Pos () { }
    ~Pos () { }

    //////// Full constructors /////////

    Pos   (const Vec2&);
    Pos (float x, float y);

    ///////////// Getters //////////////

    Vec2 asTiles  (void) const;
    Vec2 asPixels (void) const;

    ///////////// Setters //////////////

    void set    (const Vec2&);
    void set (float x, float y);

    //////////// Operators /////////////

    /////////// assignment /////////////

    void operator= (const Pos&);
    void operator= (const Vec2&);

    ///////// with assignment //////////

    void operator+= (const Pos&);
    void operator-= (const Pos&);
    void operator*= (const Pos&);
    void operator/= (const Pos&);

    void operator+= (const Vec2&);
    void operator-= (const Vec2&);
    void operator*= (const Vec2&);
    void operator/= (const Vec2&);

    /////// without assignment /////////

    Pos operator+ (const Pos&) const;
    Pos operator- (const Pos&) const;
    Pos operator* (const Pos&) const;
    Pos operator/ (const Pos&) const;

    Pos operator+ (const Vec2&) const;
    Pos operator- (const Vec2&) const;
    Pos operator* (const Vec2&) const;
    Pos operator/ (const Vec2&) const;

};

}
#endif
