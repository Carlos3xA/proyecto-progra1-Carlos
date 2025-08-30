#pragma once
#include "Gem.h"
#include <cstdlib>
#include <ctime>
#include <SFML/Graphics.hpp>

class Board {
private:
    Gem* matriz[8][8];
    sf::Texture** texturas;
    bool paraEliminar[8][8];

public:
    Board(sf::Texture* texturasEntrada[]) {
        texturas = texturasEntrada;
        llenarTablero();
    }

    void llenarTablero() {
        std::srand((unsigned int)std::time(0));
        for (int fila = 0; fila < 8; fila++) {
            for (int columna = 0; columna < 8; columna++) {
                int tipo = std::rand() % 5;
                matriz[fila][columna] = new Gem(tipo, fila, columna, texturas);
                paraEliminar[fila][columna] = false;
            }
        }
    }
};

