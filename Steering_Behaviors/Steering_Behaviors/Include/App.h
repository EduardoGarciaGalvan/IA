#pragma once
#include "Boids.h"
#include <SFML/window.hpp>
#include <SFML/Graphics.hpp>

class App
{
public:
	App();
	~App();
	void run();
private:
	Boids *m_boid;
	sf::RenderWindow myWindow;
	sf::Event myEvent;
	sf::Texture texture;
	sf::Sprite sprite;
};