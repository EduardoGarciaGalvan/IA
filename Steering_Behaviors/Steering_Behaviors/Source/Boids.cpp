#include "..\Include\Boids.h"

Boids::Boids()
{
}

Boids::~Boids()
{
}

void Boids::Initialize()
{
}

void Boids::Destroy()
{
}

void Boids::Update()
{
}

void Boids::Render()
{
}

Vector2 Boids::Seek(Vector2 objective, Vector2 position, float seekForce)
{
	Vector2 DFS;
	DFS = (objective - position).GetNormalize();
	return DFS * seekForce;
}

Vector2 Boids::Flee(int radio, Vector2 Enemie, Vector2 position, float seekForce)
{
	Vector2 DFF = position - Enemie;

	if (DFF.Magnitude() <= radio)
	{
		DFF.Normalize();
		return DFF * seekForce;
	}
	return Vector2();
}

Vector2 Boids::Arrive(int radio, Vector2 objective, Vector2 position, float seekForce)
{
	Vector2 distance = objective - position;

	Vector2 force = distance;
	force.Normalize();
	force *= seekForce;

	if (force.Magnitude() <= radio)
	{
		return force *= distance.Magnitude() / radio;
	}

	return force;
}

Vector2 Boids::Pursue(Vector2 objective,float time, Vector2 position, float seekForce, float velocity)
{
	Vector2 direction = objective - position;
	float distance = direction.Magnitude();
	direction.Normalize();
	Vector2 PP = objective + (direction * time * velocity);
	if (distance <= PP.Magnitude())
		PP = objective + (direction * distance);
	return Seek(position, PP, seekForce);
}

Vector2 Boids::Evade()
{
	return Vector2();
}

Vector2 Boids::Wander()
{
	return Vector2();
}

Vector2 Boids::ObstacleAvaidance()
{
	return Vector2();
}

Vector2 Boids::FollowPath()
{
	return Vector2();
}
