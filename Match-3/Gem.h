#pragma once
#include <SFML/Graphics.hpp>

class Gem {
private:
    int tipo;
    int fila;
    int columna;
    sf::Sprite sprite;

public:
    Gem() {
        tipo = 0;
        fila = 0;
        columna = 0;
    }

    Gem(int t, int f, int c, sf::Texture* texturas[]) {
        tipo = t;
        fila = f;
        columna = c;
        sprite.setTexture(*texturas[tipo]);
        sprite.setPosition((float)(columna * 64), (float)(fila * 64));
    }

    void setTipo(int t) {
        tipo = t;
    }

    int getTipo() {
        return tipo;
    }

    void setFila(int f) {
        fila = f;
        sprite.setPosition((float)(columna * 64), (float)(fila * 64));
    }

    int getFila() {
        return fila;
    }

    void setColumna(int c) {
        columna = c;
        sprite.setPosition((float)(columna * 64), (float)(fila * 64));
    }

    int getColumna() {
        return columna;
    }
};
