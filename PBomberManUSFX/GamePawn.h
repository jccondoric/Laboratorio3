#pragma once
#include "GameActor.h"
#include "./system/KeyboardInput.h"

class GamePawn :
    public GameActor
{
protected:
    KeyboardInput* keyboardInput;
    SDL_Keycode botonBomba = SDLK_b;
    SDL_Keycode botomArriba = SDLK_UP;
    SDL_Keycode botonAbajo = SDLK_DOWN;
    SDL_Keycode botomIzquierda = SDLK_LEFT;
    SDL_Keycode botonDerecha = SDLK_RIGHT;
    
public:
    // Constructores destructor
    GamePawn();
    GamePawn(Texture* _textura, Tile* _tileActual);
    ~GamePawn();

    // Metodos heredados
    virtual void render();
    virtual void update();
    virtual void handleEvent(SDL_Event* _event){};
    virtual void deleteGameObjet();

    // Metodos especificos
    virtual void setTileActual(Tile* _tileNuevo);
};

