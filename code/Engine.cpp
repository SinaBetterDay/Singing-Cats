#include "Engine.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
using namespace std;
using namespace sf;


void Engine::pianoCat()
{
	Event event;

	Texture texture;
	texture.loadFromFile("graphics/pianoCat.png");


	//crop sprite sheet
	IntRect rectSourceSprite(0, 0, 320, 320);
	IntRect rectSourceSprite1(0, 320, 320, 320);
	Sprite sprite(texture, rectSourceSprite);

	sprite.setPosition(250, 700);


	

	while (window.pollEvent(event)) {
		switch (event.type)
				case Event::KeyPressed:
		{
			if (event.key.code == Keyboard::P)
			{
				if (foo1 == true) {
					foo1 = false;
				}
				else {
					foo1 = true;
				}
				cout << "guitar" << endl;
			}
		}
	}


	if (foo1 == true) {
		if (clock.getElapsedTime().asSeconds() > 0.001f)
		{
			if (flicker1 == 0)
			{
				sprite.setTextureRect(rectSourceSprite1);
				flicker1 = 1;
			}
			else
			{
				sprite.setTextureRect(rectSourceSprite);
				flicker1 = 0;
			}
			clock.restart();
		}
	}


	if (foo1 == true) {
		if (isplay1 == false) {
			pianosound.play();
			isplay1 = true;
		}
	}
	else {
		pianosound.stop();
		isplay1 = false;
	}

		
		Time time = seconds(0.1f);
		sleep(time);
		window.draw(sprite);	
}

void Engine::guitarCat()
{

	Event event;

	Texture texture;
	texture.loadFromFile("graphics/New Piskel.png");


	//crop sprite sheet
	IntRect rectSourceSprite(0, 0, 320, 320);
	IntRect rectSourceSprite1(0, 320, 320, 320);
	Sprite sprite(texture, rectSourceSprite);

	sprite.setPosition(700, 170);


	while (window.pollEvent(event)) {
		switch (event.type)
				case Event::KeyPressed:
		{
			if (event.key.code == Keyboard::G)
			{
				if (foo2 == true) {
					foo2 = false;
				}
				else {
					foo2 = true;
				}
				cout << "guitar" << endl;
			}
		}
	}

	if (foo2 == true) {
		if (clock.getElapsedTime().asSeconds() > 0.001f)
		{
			if (flicker2 == 0)
			{
				sprite.setTextureRect(rectSourceSprite1);
				flicker2 = 1;
			}
			else
			{
				sprite.setTextureRect(rectSourceSprite);
				flicker2 = 0;
			}
			clock.restart();
		}
	}
	



	if (foo2 == true) {
		if (isplay2 == false) {
			guitarsound.play();
			isplay2 = true;
		}
	}
	else{
		guitarsound.stop();
		isplay2 = false;
	}


	Time time = seconds(0.1f);
	sleep(time);
	window.draw(sprite);
}


void Engine::drumCat()
{

	Event event;

	Texture texture;
	texture.loadFromFile("graphics/drumCat.png");


	//crop sprite sheet
	IntRect rectSourceSprite(0, 0, 320, 320);
	IntRect rectSourceSprite1(0, 320, 320, 320);
	Sprite sprite(texture, rectSourceSprite);

	sprite.setPosition(910, 350);


	while (window.pollEvent(event)) {
		switch (event.type)
				case Event::KeyPressed:
		{
			if (event.key.code == Keyboard::D)
			{
				if (foo3 == true) {
					foo3 = false;
				}
				else {
					foo3 = true;
				}
				cout << "drums" << endl;
			}
		}
	}

	if (foo3 == true) {
		if (clock.getElapsedTime().asSeconds() > 0.001f)
		{
			if (flicker3 == 0)
			{
				sprite.setTextureRect(rectSourceSprite1);
				flicker3 = 1;
			}
			else
			{
				sprite.setTextureRect(rectSourceSprite);
				flicker3 = 0;
			}
			clock.restart();
		}
	}


	if (foo3 == true) {
		if (isplay3 == false) {
			rickrollsound.play();
			isplay3 = true;
		}
	}
	else {
		rickrollsound.stop();
		isplay3 = false;
	}


	Time time = seconds(0.1f);
	sleep(time);
	window.draw(sprite);
}




void Engine::bongoCat()
{

	Event event;

	Texture texture;
	texture.loadFromFile("graphics/bongoCat.png");


	//crop sprite sheet
	IntRect rectSourceSprite(0, 0, 320, 320);
	IntRect rectSourceSprite1(0, 320, 320, 320);
	Sprite sprite(texture, rectSourceSprite);

	sprite.setPosition(0, 450);


	while (window.pollEvent(event)) {
		switch (event.type)
				case Event::KeyPressed:
		{
			if (event.key.code == Keyboard::B)
			{
				if (foo4 == true) {
					foo4 = false;
				}
				else {
					foo4 = true;
				}
				cout << "bongo" << endl;
			}
		}
	}

	if (foo4 == true) {
		if (clock.getElapsedTime().asSeconds() > 0.001f)
		{
			if (flicker4 == 0)
			{
				sprite.setTextureRect(rectSourceSprite1);
				flicker4 = 1;
			}
			else
			{
				sprite.setTextureRect(rectSourceSprite);
				flicker4 = 0;
			}
			clock.restart();
		}
	}


	if (foo4 == true) {
		if (isplay4 == false) {
			bongosound.play();
			isplay4 = true;
		}
	}
	else {
		bongosound.stop();
		isplay4 = false;
	}


	Time time = seconds(0.1f);
	sleep(time);
	window.draw(sprite);
}



void Engine::fluteCat()
{

	Event event;

	Texture texture;
	texture.loadFromFile("graphics/fluteCat.png");


	//crop sprite sheet
	IntRect rectSourceSprite(0, 0, 320, 320);
	IntRect rectSourceSprite1(0, 320, 320, 320);
	Sprite sprite(texture, rectSourceSprite);

	sprite.setPosition(300, 400);


	while (window.pollEvent(event)) {
		switch (event.type)
				case Event::KeyPressed:
		{
			if (event.key.code == Keyboard::F)
			{
				if (foo5 == true) {
					foo5 = false;
				}
				else {
					foo5 = true;
				}
				cout << "flute" << endl;
			}
		}
	}

	if (foo5 == true) {
		if (clock.getElapsedTime().asSeconds() > 0.001f)
		{
			if (flicker5 == 0)
			{
				sprite.setTextureRect(rectSourceSprite1);
				flicker5 = 1;
			}
			else
			{
				sprite.setTextureRect(rectSourceSprite);
				flicker5 = 0;
			}
			clock.restart();
		}
	}


	if (foo5 == true) {
		if (isplay5 == false) {
			rickrollsound.play();
			isplay5 = true;
		}
	}
	else {
		rickrollsound.stop();
		isplay5 = false;
	}


	Time time = seconds(0.1f);
	sleep(time);
	window.draw(sprite);
}


void Engine::popCat()
{

	Event event;

	Texture texture;
	texture.loadFromFile("graphics/popCat.png");


	//crop sprite sheet
	IntRect rectSourceSprite(0, 0, 320, 320);
	IntRect rectSourceSprite1(320, 0, 320, 640);
	Sprite sprite(texture, rectSourceSprite);

	sprite.setPosition(500, 500);


	while (window.pollEvent(event)) {
		switch (event.type)
				case Event::KeyPressed:
		{
			if (event.key.code == Keyboard::S)
			{
				if (foo6 == true) {
					foo6 = false;
				}
				else {
					foo6 = true;
				}
				cout << "flute" << endl;
			}
		}
	}

	if (foo6 == true) {
		if (clock.getElapsedTime().asSeconds() > 0.001f)
		{
			if (flicker6 == 0)
			{
				sprite.setTextureRect(rectSourceSprite1);
				flicker6 = 1;
			}
			else
			{
				sprite.setTextureRect(rectSourceSprite);
				flicker6 = 0;
			}
			clock.restart();
		}
	}


	if (foo6 == true) {
		if (isplay6 == false) {
			popsound.play();
			isplay6 = true;
		}
	}
	else {
		popsound.stop();
		isplay6 = false;
	}


	Time time = seconds(0.1f);
	sleep(time);
	window.draw(sprite);
}



void Engine::run()
{
	Event event;

	Font font;
	Text text;
	font.loadFromFile("fonts/Sketching Universe.otf");
	text.setFont(font);
	text.setString("Welcome To My Singing Cats!           P: Piano   D: Drums   F: Flute   B: Bongo   S: Singer   G: Guitar");
	text.setCharacterSize(55);
	text.setPosition(10, 10);



	float windowScale = 1.0f;
	int currentWindowWidth = VideoMode::getDesktopMode().width * windowScale;
	int currentWindowHeight = VideoMode::getDesktopMode().height * windowScale;
	VideoMode desktop(currentWindowWidth, currentWindowHeight);
	float aspect_ratio = currentWindowHeight / static_cast<float>(currentWindowWidth);
	window.create(desktop, "Singing Cats", Style::Fullscreen);
	
	Texture backgroundTexture;
	backgroundTexture.loadFromFile("graphics/catbackstage.jpg");
	Sprite backgroundSprite;
	backgroundSprite.setTexture(backgroundTexture);
	backgroundSprite.setPosition(0, 0);
	backgroundSprite.setScale(1, 1);
	backgroundSprite.setOrigin(0, 0);
	
	guitarBuffer.loadFromFile("sound/Guitar intro.wav");
	guitarsound.setBuffer(guitarBuffer);
	guitarsound.setVolume(50.f);
	guitarsound.setLoop(true);
	
	drumBuffer.loadFromFile("sound/drum kick.wav");
	drumsound.setBuffer(drumBuffer);
	drumsound.setVolume(50.f);
	drumsound.setLoop(true);

	bongoBuffer.loadFromFile("sound/Sub bass intro.wav");
	bongosound.setBuffer(bongoBuffer);
	bongosound.setVolume(50.f);
	bongosound.setLoop(true);

	rickrollBuffer.loadFromFile("sound/rick roll.wav");
	rickrollsound.setBuffer(rickrollBuffer);
	rickrollsound.setVolume(50.f);
	rickrollsound.setLoop(true);

	pianoBuffer.loadFromFile("sound/Intro Melody.wav");
	pianosound.setBuffer(pianoBuffer);
	pianosound.setVolume(50.f);
	pianosound.setLoop(true);

	popBuffer.loadFromFile("sound/high toms.wav");
	popsound.setBuffer(popBuffer);
	popsound.setVolume(50.f);
	popsound.setLoop(true);

	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
				case Event::Closed:
				{
					window.close();
					break;
				}
				case Event::KeyPressed:
				{
					if (Keyboard::isKeyPressed(Keyboard::Escape))
						window.close();
					break;
				}
			}
		}
		window.clear();
		window.draw(backgroundSprite);
		Engine::guitarCat();
		Engine::pianoCat();
		Engine::drumCat();
		Engine::bongoCat();
		Engine::fluteCat();
		Engine::popCat();
		window.draw(text);
		window.display();
	}	
}
