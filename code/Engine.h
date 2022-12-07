#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;

class Engine
{
private:
    Sprite backgroundSprite;
    Texture backgroundTexture;
	
public:
	RenderWindow window;
	void animationDelay();

    int flicker1, flicker2, flicker3, flicker4, flicker5, flicker6 = 0;
    Clock clock;
	// Run will call all the private functions
	void run();

    void pianoCat();
	void guitarCat();
	void drumCat();
	void bongoCat();
	void fluteCat();
	void popCat();

    bool foo1, foo2, foo3, foo4, foo5, foo6 = false;
	bool isplay1, isplay2, isplay3, isplay4, isplay5, isplay6 = false;
    SoundBuffer guitarBuffer, pianoBuffer, drumBuffer, bongoBuffer, popBuffer, rickrollBuffer;
    Sound guitarsound, pianosound, drumsound, bongosound, popsound, rickrollsound;

};


/*
class GuitarCat : public Engine
{
public:
	void guitarCat();
	Texture texture;
	Sprite sprite;

};
*/
