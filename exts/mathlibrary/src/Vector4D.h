#pragma once
#include <iostream>
#include <math>
using namespace std;
class Vector4D
{
private:

public:
	float v[4];
	Vector4D(){};
	Vector4D(float x, float y, float z, float w)
	{
		this->v[0] = x;
		this->v[1] = y;
		this->v[2] = z;
		this->v[3] = w;
	}
	~Vector4D()
	{
	}

	float getX() {
		return this->v[0];
	};
	void setX(float newX)
	{
		this->v[0] = newX;
	};
	float getY() {
		return this->v[1];
	};
	void setY(float newY)
	{
		this->v[1] = newY;
	};
	float getZ() {
		return this->v[2];
	};
	void setZ(float newZ)
	{
		this->v[2] = newZ;
	};
	float getW() {
		return this->v[3];
	};
	void setW(float newW)
	{
		this->v[3] = newW;
	};
	Vector4D operator+(Vector4D& v)
	{

		Vector4D vec = Vector4D(v.getX() + this->getX(),
			v.getY() + this->getY(),
			v.getZ() + this->getZ(),
			v.getW() + this->getW()
		);
		return vec;
	};
	Vector4D operator-(Vector4D& v)
	{
		Vector4D vec = Vector4D(v.getX() - this->getX(),
			v.getY() - this->getY(),
			v.getZ() - this->getZ(),
			v.getW() - this->getW()
		);
		return vec;
	};
	Vector4D operator*(Vector4D& v1, Vector4D& v2, Vector4D& v3, Vector4D& v4)
	{
		Vector4D vec = Vector4D(v1.getX() * v2->getY() * v3->getZ() * v4->getW(),
			v2.getX() * v3->getY() * v4->getZ() * v1->getW(),
			v3.getX() * v4->getY() * v1->getZ() * v2->getW(),
			v4.getX() * v1->getY() * v2->getZ() * v3->getW()
		);
		return vec;
	};

	Vector4D translate(Vector4D& vec1, Vector4D& vec2)
	{
		Vector4D vec = Vector4D(vec1.getX() + vec2.getX(),
			vec1.getY() + vec2.getY(),
			vec1.getZ() + vec2.getZ(),
			vec1.getW() + vec2.getW()
		);
		return v;
	};
	float dot(Vector4D v1, Vector4D v2, Vector4D v3, Vector4D v4)
	{
		return v1.getX() * v2.getX() * v3.getX() * v4.getX()
			+ v1.getY() * v2.getY() * v3.getY() * v4.getY()
			+ v1.getZ() * v2.getZ() * v3.getZ() * v4.getZ()
			+ v1.getW() * v2.getW() * v3.getW() * v4.getW();
	};
	Vector4D scale(Vector4D v, float scale)
	{
		Vector4D v = Vector4D(
			v->getX() * scale,
			v->getY() * scale,
			v->getZ() * scale,
			v->getW() * scale
		);
		return v;
	};
	Vector4D normalize() {
		float length = this.magnitude();
		float scale = 1 / length;
		return Vector4D.scale(this, scale);
	};


	Vector4D operator=(Vector4D& vector)
	{
		if (this != &vector) {
			copy(vector.v, vector.v + 4, v);
		}
		return *this;
	};

	bool & operator==(Vector4D& b)
	{
		bool tmp = (this->getX() == b.getX())
			&& (this->getY() == b.getY())
			&& (this->getZ() == b.getZ())
			&& (this->getW() == b.getW());
		return tmp;
	};
	bool & operator!=(Vector4D& b)
	{
		bool tmp = (this->getX() != b.getX())
			|| (this->getY() != b.getY())
			|| (this->getZ() != b.getZ())
			|| (this->getW() != b.getW());
		return tmp;
	};
	
	float magnitude() {
		float length;
		length = sqrt(pow(this.getX())
			+ pow(this.getY())
			+ pow(this.getZ())
			+ pow(this.getW()));
		return length;
	};

	void printVector()
	{
		cout << "Vector X=" << this->getX()
			<< " Y=" << this->getY()
			<< " Z=" << this->getZ()
			<< " W=" << this->getW() << endl;
	};

};






