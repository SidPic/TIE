#ifndef TIE_MAP_HPP
#define TIE_MAP_HPP

#include <vector>

#include "Vec2.hpp"

namespace tie
{

class Map
{
    /////////// Basic types ////////////

    typedef int16_t Cell_t;
    typedef std::vector<std::vector<Cell_t>> Data_t;

protected:

    ///////////// Content //////////////

    Data_t data;

public:

    // Basic constructor & destructor //

     Map () { }
    ~Map () { }

    ///////// Full constructor /////////

    Map (int width, int height, Cell_t value = 0);

    ///////////// Getters //////////////

    Cell_t   get   (int x, int y) const;
     Vec2  getSize     (void)     const;

    ///////////// Setters //////////////

     Map&    set   (int   x,   int    y,   Cell_t value);
     Map&  setSize (int width, int height, Cell_t value = 0);

    /////////// Cell access ////////////

    Cell_t&     at     (int x, int y); // with access check
    Cell_t& operator() (int x, int y); // without access check

    ////// Application functions ///////

    Map& fill (Cell_t); // or clear

};

}

#endif
