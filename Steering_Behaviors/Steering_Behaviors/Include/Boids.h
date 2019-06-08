#pragma once
#include "Vector2.h"
#include <chrono>

class Boids
{
public:
	Boids();
	~Boids();
	void Initialize();
	void Destroy();
	void Update();
	void Render();

	static Vector2 Seek(Vector2, Vector2, float);
	static Vector2 Flee(int, Vector2, Vector2, float);
	static Vector2 Arrive(int, Vector2, Vector2, float);
	static Vector2 Pursue(Vector2, float, Vector2, float, float);
	static Vector2 Evade();
	static Vector2 Wander();
	static Vector2 ObstacleAvaidance();
	static Vector2 FollowPath();

private:
	Vector2 m_Position, m_Direction, m_Speed;
	float m_force;
};