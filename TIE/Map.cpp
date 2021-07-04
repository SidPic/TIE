#include <cassert>

#include "Map.hpp"
#include "Vec2.hpp"

using namespace tie;

///////// Full constructor /////////

Map::Map (int width, int height, Cell_t value)
{
    setSize(width, height, value);
}

///////////// Getters //////////////

Map::Cell_t Map::get (int x, int y) const
{
    return data[x][y];
}

Vec2 Map::getSize () const
{
    return Vec2(data.size(), data[0].size());
}

///////////// Setters //////////////

Map& Map::setSize (int width, int height, Cell_t value)
{
    data.resize(width);
    for (auto &column : data) column.resize(height, value);

    return *this;
}

Map& Map::set (int x, int y, Cell_t value)
{
    data[x][y] = value;

    return *this;
}

/////////// Cell access ////////////

Map::Cell_t& Map::at (int x, int y) // with access check
{
    assert (x >= 0 && x < data.size()
         && y >= 0 && y < data[0].size());

    return data[x][y];
}

Map::Cell_t& Map::operator() (int x, int y) // without access check
{
    return data[x][y];
}

////// Application functions ///////

Map& Map::fill (Cell_t value) // or clear
{
    for (auto& column : data) column.assign(column.size(), value);

    return *this;
}
