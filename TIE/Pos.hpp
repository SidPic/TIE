#ifndef TIE_POS_HPP
#define TIE_POS_HPP

#include "Vec2.hpp"
#include "LitePos.hpp"

namespace tie
{

class Pos : public LitePos  /// faster for geterrs than LitePos
{
private:

    /////////// Coordinates ////////////

    /// + 'Vec2 pixels' from LitePos
    Vec2 tiles;

public:

    // Basic constructor & destructor //

     Pos () { }
    ~Pos () { }

    //////// Full constructors /////////

    Pos (const Vec2&);
    Pos (const LitePos&);
    Pos (float x, float y);

    ///////////// Getters //////////////

    virtual Vec2 asTiles  (void) const override;
    /// 'Vec2 asPixels (void) const' identical to LitePos realization

    ///////////// Setters //////////////

    virtual void set    (const Vec2&)   override;
    virtual void set (float x, float y) override;

    //////////// Operators /////////////

    /////////// assignment /////////////

    virtual void operator=  (const Vec2&)   override;
    virtual void operator= (const LitePos&) override;

    ///////// with assignment //////////

    virtual void operator+= (const Vec2&) override;
    virtual void operator-= (const Vec2&) override;
    virtual void operator*= (const Vec2&) override;
    virtual void operator/= (const Vec2&) override;

    virtual void operator+= (const LitePos&) override;
    virtual void operator-= (const LitePos&) override;
    virtual void operator*= (const LitePos&) override;
    virtual void operator/= (const LitePos&) override;

    /////// without assignment /////////

    /// identical to LitePos realization

};

}
#endif
