#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Engine
{
private:

    Sprite backgroundSprite;
    Texture backgroundTexture;
	
public:
	// The Engine constructor
	Engine();
    RenderWindow window;
	void guitarCat();
	void animationDelay();
	// Run will call all the private functions
	void run();

};
