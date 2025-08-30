#pragma once
#include "Gem.h"
#include <SFML/Graphics.hpp>

class Board {
private:
    Gem* matriz[8][8];
    sf::Texture** texturas;
    bool paraEliminar[8][8];

public:
    Board();
};

