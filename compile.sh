# Скрипт для сборки программы

files='
    example.cpp
    TIE/Settings.cpp
    TIE/Vec2.cpp
    TIE/Pos.cpp
'

flags='
    -O2
    -std=c++20
    -pedantic-errors
    -fshort-enums
'

libs='
    -lsfml-graphics
    -lsfml-window
    -lsfml-system
    -lsfml-audio
'

g++ $flags -c $files\
   && g++ *.o -o example $libs\
        && echo "Игра успешно скомпилирована в файл 'example'"

rm *.o
