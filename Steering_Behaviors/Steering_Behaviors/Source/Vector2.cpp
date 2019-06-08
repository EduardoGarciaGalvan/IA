#include "..\Include\Vector2.h"

Vector2::Vector2():
	X(0.0f),
	Y(0.0f)
{
}

Vector2::Vector2(float x, float y)
{
	X = x;
	Y = y;
}

Vector2::~Vector2()
{
}

void Vector2::set(Vector2 vec)
{
	X = vec.X;
	Y = vec.Y;
}

void Vector2::set(float x, float y)
{
	X = x;
	Y = y;
}

Vector2::operator Vector2()
{
	return Vector2( X, Y);
}

Vector2 Vector2::operator+(const Vector2 &add)
{
	return Vector2(X + add.X, Y + add.Y);
}

Vector2 Vector2::operator+(const float &add)
{
	return Vector2(X+add,Y+add);
}

Vector2 & Vector2::operator+=(const Vector2 &add)
{
	X += add.X;
	Y += add.Y;
	return *this;
}

Vector2 & Vector2::operator+=(const float &add)
{
	X += add;
	Y += add;
	return *this;
}

Vector2 Vector2::operator-(const Vector2 &add)
{
	return Vector2(X - add.X, Y - add.Y);
}

Vector2 Vector2::operator-(const float &add)
{
	return Vector2(X - add, Y - add);
}

Vector2 & Vector2::operator-=(const Vector2 &add)
{
	X -= add.X;
	Y -= add.Y;
	return *this;
}

Vector2 & Vector2::operator-=(const float &add)
{
	X -= add;
	Y -= add;
	return *this;
}

Vector2 Vector2::operator*(const Vector2 &add)
{
	return Vector2(X * add.X, Y * add.Y);
}

Vector2 Vector2::operator*(const float &add)
{
	return Vector2(X * add, Y * add);
}

Vector2 & Vector2::operator*=(const Vector2 &add)
{
	X *= add.X;
	Y *= add.Y;
	return *this;
}

Vector2 & Vector2::operator*=(const float &add)
{
	X *= add;
	Y *= add;
	return *this;
}

Vector2 Vector2::operator/(const Vector2 &add)
{
	return Vector2(X / add.X, Y / add.Y);
}

Vector2 Vector2::operator/(const float &add)
{
	return Vector2(X / add, Y / add);
}

Vector2 & Vector2::operator/=(const Vector2 &add)
{
	X /= add.X;
	Y /= add.Y;
	return *this;
}

Vector2 & Vector2::operator/=(const float &add)
{
	X /= add;
	Y /= add;
	return *this;
}

Vector2 Vector2::operator=(const Vector2 &add)
{
	return Vector2(add.X, add.Y);
}

Vector2 Vector2::operator=(const float &add)
{
	return Vector2(add, add);
}

float Vector2::Cross(const Vector2 &add)
{
	return (X * add.X) + (Y * add.Y);
}

float Vector2::Dot(const Vector2 &add)
{
	return (X * add.Y) - (Y * add.X);
}

float Vector2::Magnitude()
{
	return sqrt((X*X) + (Y*Y));
}

Vector2 Vector2::GetNormalize()
{
	float mag = Magnitude();
	return Vector2(X /= mag, Y /= mag);
}

void Vector2::Normalize()
{
	float mag = Magnitude();
	X /= mag;
	Y /= mag;
}

void Vector2::truncate(int vMax)
{
	float mag = Magnitude();
	if (mag >= vMax)
	{
		Normalize();
		X *= vMax;
		Y *= vMax;
	}
}

