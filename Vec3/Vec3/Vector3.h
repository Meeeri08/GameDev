#pragma once
#include <math.h>
class Vector3
{
public:


	//membres
	float x, y, z;

	//Constructors
	Vector3();
	Vector3(float x, float y);
	Vector3(float x, float y, float z);

	//operators
	Vector3 operator +(const Vector3 otherVector3) const;
	Vector3 operator -(const Vector3 otherVector3) const;
	Vector3 operator +=(const Vector3 otherVector3) const;
	Vector3 operator -=(const Vector3 otherVector3) const;
	void operator =(const Vector3 otherVector3);
	bool operator ==(const Vector3 otherVector3) const;

	//Methods
	void Normalize();
	void Zero();
	bool isZero();
	Vector3 DistanceTo(Vector3 otherVector3) const;
	
};

