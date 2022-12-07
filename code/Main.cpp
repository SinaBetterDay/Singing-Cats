#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Engine.h"
using namespace std;
using namespace sf;

class Cat
{
public:
    void spawnsprite(double x = 0, double y = 0);
protected:

    Vector2f position;


};



class cat1 : public Cat
{
public:
    cat1(Vector2f pos, int);


};



/*
void guitarCat()
{
	Clock clock;

	Texture faceTexture;
	faceTexture.loadFromFile("drumCatnot.png");

	VertexArray talkingFace;
	talkingFace.setPrimitiveType(Quads);
	talkingFace.resize(3);

	const int FACE_SHEET_WIDTH = 960;
	const float FRAME_TIME_S = 0.2f;

	Vector2f facePosition = { resolution.x / 2, resolution.y / 2 };

	talkingFace[0].position = facePosition + Vector2f(0, 0);
	talkingFace[1].position = facePosition + Vector2f(FACE_SHEET_WIDTH, 0);
	talkingFace[2].position = facePosition + Vector2f(FACE_SHEET_WIDTH, FACE_SHEET_WIDTH);
	talkingFace[3].position = facePosition + Vector2f(0, FACE_SHEET_WIDTH);

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
			faceFrame %= 4;
			face_animate_time = Time::Zero;
		}

		// Set the texture coordinates of each vertex
		int frameOffset = FACE_SHEET_WIDTH * faceFrame;

		talkingFace[0].texCoords = Vector2f(0, 0 + frameOffset);
		talkingFace[1].texCoords = Vector2f(FACE_SHEET_WIDTH, 0 + frameOffset);
		talkingFace[2].texCoords = Vector2f(FACE_SHEET_WIDTH, FACE_SHEET_WIDTH + frameOffset);
		talkingFace[3].texCoords = Vector2f(0, FACE_SHEET_WIDTH + frameOffset);

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

       
		

   }
   */

int main()
{

	Engine lmao;
	lmao.run();
	lmao.guitarCat();


    return 0;
}
