#ifndef TIE_SETTINGS_HPP
#define TIE_SETTINGS_HPP

namespace tie
{

class Settings
{
private:

    // It's a wholly static class! //

     Settings () { }
    ~Settings () { }

    ////////// Parameters ///////////

    static     float    TileSize;       // default tile size
    static unsigned int WindowWidth;    // default window width
    static unsigned int WindowHeight;   // default window height

public:

    //////////// Getters ////////////

    static      float     getTileSize      (void);
    static  unsigned int  getWindowWidth   (void);
    static  unsigned int  getWindowHeight  (void);

    //////////// Setters ////////////

    static      void      setTileSize          (float);
    static      void      setWindowWidth   (unsigned int);
    static      void      setWindowHeight  (unsigned int);

    ///////////  Friends ////////////

    friend class Pos;

};

}
#endif
