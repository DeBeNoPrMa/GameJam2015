#ifndef PLAYER
#define PLAYER

#include "include/SFML/Graphics.hpp"
#include "include/SFML/System.hpp"
#include "include/SFML/Window.hpp"

#include "Resources.h"

#include <iostream>

const float MOVESPEED = 350;

class Player {
public:
    Player(sf::RenderWindow *wndw);
    ~Player();
    void moveTo(float x);
    void draw();
    void update(float deltaTime);

private:
    sf::RenderWindow *window;

    float speed;
    float target;
    float ChangeTimer;

    sf::Vector2f position;
    sf::Vector2f size;
    sf::Texture& texture;
    sf::Sprite   sprite;

    sf::Vector2i spriteNum;
    sf::Vector2i spriteCount;
};

#endif
