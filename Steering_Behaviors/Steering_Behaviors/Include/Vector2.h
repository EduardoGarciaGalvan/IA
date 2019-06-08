#pragma once
#include "math.h"


class Vector2
{
public:
	Vector2();
	Vector2(float x, float y);
	~Vector2();
	void set(Vector2);
	void set(float, float);
	operator Vector2();

	Vector2 operator+(const Vector2&);
	Vector2 operator+(const float&);
	Vector2& operator+=(const Vector2&);
	Vector2& operator+=(const float&);
	Vector2 operator-(const Vector2&);
	Vector2 operator-(const float&);
	Vector2& operator-=(const Vector2&);
	Vector2& operator-=(const float&);
	Vector2 operator*(const Vector2&);
	Vector2 operator*(const float&);
	Vector2& operator*=(const Vector2&);
	Vector2& operator*=(const float&);
	Vector2 operator/(const Vector2&);
	Vector2 operator/(const float&);
	Vector2& operator/=(const Vector2&);
	Vector2& operator/=(const float&);
	Vector2 operator=(const Vector2&);
	Vector2 operator=(const float&);

	float Cross(const Vector2&);
	float Dot(const Vector2&);

	float Magnitude();
	Vector2 GetNormalize();
	void Normalize();
	void truncate(int);
	float X;
	float Y;
};