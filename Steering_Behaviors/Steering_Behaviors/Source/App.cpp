#include "..\Include\App.h"

App::App()
{
	m_boid = new Boids;
}

App::~App()
{
}

void App::run()
{
	myWindow.create(sf::VideoMode(1920, 1080), "Steering Behaviors", sf::Style::Default);
	sf::CircleShape circle(50);
	circle.setFillColor(sf::Color(255, 64, 82));
	circle.setPosition(960, 520);
	circle.setOrigin(0, 0);
	while (myWindow.isOpen())
	{
		myWindow.clear();
		while (myWindow.pollEvent(myEvent))
		{
			if (sf::Event::Closed == myEvent.type)
			{
				myWindow.close();
			}
		}
		myWindow.draw(circle);
		myWindow.display();
	}

	m_boid->Render();
}
