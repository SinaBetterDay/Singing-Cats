#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
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

void animationDelay() {
	Time delay;
	delay = microseconds(10000);

}
void guitarCat() 
{
	Event event;
	Texture texture;
 	texture.loadFromFile("graphics/New Piskel.png");
	texture.setPosition(320, 320);

  	IntRect rectSourceSprite(0, 0, 320, 320);
  	Sprite sprite(texture,rectSourceSprite);
  sf::Clock clock;

  while (renderWindow.isOpen()){
    while (renderWindow.pollEvent(event)){
      if (event.type == sf::Event::EventType::Closed)
        renderWindow.close();
    }

    if (clock.getElapsedTime().asSeconds() > 1.0f){
      if (rectSourceSprite.down == 640)
        rectSourceSprite.down = 0;
      else
        rectSourceSprite.down += 320;

      sprite.setTextureRect(rectSourceSprite);
      clock.restart();
    }

    
    renderWindow.clear();
    renderWindow.draw(sprite);
    renderWindow.display();
	  
	SoundBuffer buffer;
	Sound sound;
	buffer.loadFromFile("sound/Guitar intro.wav")
	sound.setBuffer(buffer);
	sound.setVolume(50.f);
	sound.setLoop(true);
	animationDelay();
	sound.play();

  }


}

int main()
{
    // Window Management
    float windowScale = 1.0f;
    int currentWindowWidth = VideoMode::getDesktopMode().width * windowScale;
    int currentWindowHeight = VideoMode::getDesktopMode().height * windowScale;
    VideoMode desktop(currentWindowWidth, currentWindowHeight);
    float aspect_ratio = currentWindowHeight / static_cast<float>(currentWindowWidth);
    RenderWindow window(desktop, "Singing Cats", Style::Fullscreen);

    // Sprites
    Texture backgroundTexture;
    backgroundTexture.loadFromFile("graphics/catbackstage.jpg");
    Sprite backgroundSprite;
    backgroundSprite.setTexture(backgroundTexture);
    backgroundSprite.setPosition(0, 0);
    backgroundSprite.setScale(1, 1);
    backgroundSprite.setOrigin(0, 0);

    Event event;

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
        window.display();
        void guitarcat();
    }

    return 0;
}
