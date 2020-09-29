#include "Vector3.h"

Vector3::Vector3()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

Vector3::Vector3(float x, float y)
{
	this->x = x;
	this->y = y;
	this->z = 0;
}

Vector3::Vector3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector3 Vector3::operator+(const Vector3 otherVector3) const
{
	Vector3 vec;
	vec.x = this->x + otherVector3.x;
	vec.y = this->y + otherVector3.y;
	vec.z = this->z + otherVector3.z;
	return vec;
}

Vector3 Vector3::operator-(const Vector3 otherVector3) const
{
	Vector3 vec;
	vec.x = this->x - otherVector3.x;
	vec.y = this->y - otherVector3.y;
	vec.z = this->z - otherVector3.z;
	return vec;
}

Vector3 Vector3::operator+=(const Vector3 otherVector3) const
{
	Vector3 vec=*this;
	vec.x += otherVector3.x;
	vec.y += otherVector3.y;
	vec.z += otherVector3.z;
	return vec;
}

Vector3 Vector3::operator-=(const Vector3 otherVector3) const
{
	Vector3 vec = *this;
	vec.x -= otherVector3.x;
	vec.y -= otherVector3.y;
	vec.z -= otherVector3.z;
	return vec;
}

void Vector3::operator=(const Vector3 otherVector3)
{
	this->x = otherVector3.x;
	this->y = otherVector3.y;
	this->z = otherVector3.z;
}

bool Vector3::operator==(const Vector3 otherVector3) const
{
	return this->x == otherVector3.x && this->y == otherVector3.y && this->z == otherVector3.z;

	}


//METHODS
void Vector3::Normalize()
{
	float mag = sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));
	this->x = this->x / mag;
	this->y = this->y / mag;
	this->z = this->z / mag;

}

void Vector3::Zero()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;

}

bool Vector3::isZero()
{
	return this->x == 0 && this->y == 0 && this->z == 0;
}

Vector3 Vector3::DistanceTo(Vector3 otherVector3) const
{
	return *this - otherVector3;
}


