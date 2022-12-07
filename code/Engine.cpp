#include "Engine.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
using namespace std;


Engine::Engine()
{

}




void Engine::animationDelay() {
	Time delay;
	delay = microseconds(10000);

}


void Engine::guitarCat()
{
	Clock clock;

	
	Texture faceTexture;
	faceTexture.loadFromFile("graphics/pianoCat.png");

	VertexArray talkingFace;
	talkingFace.setPrimitiveType(Quads);
	talkingFace.resize(3);

	Sprite sprite;
	sprite.setTexture(faceTexture);
	sprite.setPosition(320, 320);
	sprite.setScale(1, 1);
	sprite.setOrigin(0, 0);

	const int FACE_SHEET_WIDTH = 320;
	const float FRAME_TIME_S = 0.2f;

	Vector2f facePosition = { 320, 320 };

	talkingFace[0].position = facePosition + Vector2f(0, 0);
	talkingFace[1].position = facePosition + Vector2f(FACE_SHEET_WIDTH, 0);

	Time face_animate_time;
	int faceFrame = 0;

	Time dt;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		dt = clock.restart();
		face_animate_time += dt;

		if (face_animate_time >= seconds(FRAME_TIME_S))
		{
			faceFrame++;
			faceFrame %= 2;
			face_animate_time = Time::Zero;
		}

		// Set the texture coordinates of each vertex
		int frameOffset = FACE_SHEET_WIDTH * faceFrame;

		talkingFace[0].texCoords = Vector2f(0, 0 + frameOffset);
		talkingFace[1].texCoords = Vector2f(FACE_SHEET_WIDTH, 0 + frameOffset);

		SoundBuffer buffer;
		Sound sound;
		buffer.loadFromFile("sound/Guitar intro.wav");
		sound.setBuffer(buffer);
		sound.setVolume(50.f);
		sound.setLoop(true);
		animationDelay();
		sound.play();

		window.clear(Color::Magenta);
		window.draw(talkingFace, &faceTexture);
		//window.draw(faceTexture);
		//window.draw(sprite);
		window.display();




	}
	/*
		Event event;

		Texture texture;
		texture.loadFromFile("graphics/New Piskel.png");


		//crop sprite sheet
		IntRect rectSourceSprite(320, 320, 320, 320);
		Sprite sprite(texture, rectSourceSprite);

		//edit
		sprite.setPosition(320, 320);

		//for animation sequence
		Clock clock;

			if (clock.getElapsedTime().asSeconds() > 1.0f) {
				if (rectSourceSprite.height == 640)
					rectSourceSprite.height = 0;
				else
					rectSourceSprite.height += 320;

				sprite.setTextureRect(rectSourceSprite);
				clock.restart();
			}


			cout << "senarrelahdkjlfblakhdfa" << endl;
			window.draw(sprite);


			*/
	window.draw(talkingFace);
	window.draw(sprite);

}





void Engine::run()
{
    Event event;


    RenderWindow window;


	float windowScale = 1.0f;
	int currentWindowWidth = VideoMode::getDesktopMode().width * windowScale;
	int currentWindowHeight = VideoMode::getDesktopMode().height * windowScale;
	VideoMode desktop(currentWindowWidth, currentWindowHeight);
	float aspect_ratio = currentWindowHeight / static_cast<float>(currentWindowWidth);
	window.create(desktop, "Singing Cats", Style::Default);
	//m_Window.create(VideoMode(resolution.x, resolution.y),"Thomas was late",Style::Fullscreen);

	Texture backgroundTexture;
	backgroundTexture.loadFromFile("graphics/catbackstage.jpg");
	Sprite backgroundSprite;
	backgroundSprite.setTexture(backgroundTexture);
	backgroundSprite.setPosition(0, 0);
	backgroundSprite.setScale(1, 1);
	backgroundSprite.setOrigin(0, 0);


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



        window.draw(backgroundSprite);
		Engine::guitarCat(); //ur declaring here, and then this function isn't even inside this file
        window.display();

		
	}
}
