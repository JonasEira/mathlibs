#pragma once
#include"Vector4D.h"
#include <math.h>
#include <iostream>
class Matrix4D
{
private:
	float data[4][4];
	Vector4D vectors[4];

public:

	Matrix4D(float x1, float y1, float z1, float w1,
		float x2, float y2, float z2, float w2,
		float x3, float y3, float z3, float w3,
		float x4, float y4, float z4, float w4)
	{
		this->data[0][0] = x1; this->data[0][1] = y1; this->data[0][2] = z1; this->data[0][3] = w1;
		this->data[1][0] = x1; this->data[1][1] = y1; this->data[1][2] = z1; this->data[1][3] = w1;
		this->data[2][0] = x1; this->data[2][1] = y1; this->data[2][2] = z1; this->data[2][3] = w1;
		this->data[3][0] = x1; this->data[3][1] = y1; this->data[3][2] = z1; this->data[3][3] = w1;

		this->vectors[0] = Vector4D(x1, y1, z1, w1);
		this->vectors[1] = Vector4D(x2, y2, z2, w2);
		this->vectors[2] = Vector4D(x3, y3, z3, w3);
		this->vectors[3] = Vector4D(x4, y4, z4, w4);

	}
	Matrix4D(const Matrix4D& m) { }
	Matrix4D();
	
	void printMatrix()
	{
		for (size_t i = 0; i < length; i++)
		{
			for (size_t k = 0; k < length; k++)
			{
				cout << this->data[i][k] << " ";
			}
			cout << "\n";
		}
	};
	
	Matrix4D rotate(float radians)
	{
		Matrix4D result;
		result = Matrix4D(cos(radians), -sin(radians), 0, 0,
			sin(radians, sin(radians), 0, 0,
				0, 0, 1, 0,
				0, 0, 0, 1);
		return result;
	};

	float getData(int n, int m)
	{
		return data[n][m];
	};

	float* getDataPtr()
	{
		float* data = *this->data;
		return data;
	};

	Matrix4D & operator*(Matrix4D& m)
	{
		float sum = 0;
		Matrix4D result;
		for (int n = 0; n < 4; n++) {
			for (int k = 0; k < 4; k++) {
				sum = 0;
				for (int i = 0; i < 4; i++) {
					sum = sum + this->data[n][i] * this->data[i][j];
				}
				result->data[n][k];
			}
		}
		return result;
	};

	Matrix4D & operator*(Vector4D& vec)
	{
		float sum = 0;
		Vector4D result;
		for (int n = 0; n < 4; n++) {
			for (int k = 0; k < 4; k++) {
				sum += this->data[n][k] * vec.v[k];
			}
			result[n] = sum;
		}
		return result;
	};

	void setData(float x1, float y1, float z1, float w1,
		float x2, float y2, float z2, float w2,
		float x3, float y3, float z3, float w3,
		float x4, float y4, float z4, float w4)
	{
		this->data[0][0] = x1; this->data[0][1] = y1; this->data[0][2] = z1; this->data[0][3] = w1;
		this->data[1][0] = x1; this->data[1][1] = y1; this->data[1][2] = z1; this->data[1][3] = w1;
		this->data[2][0] = x1; this->data[2][1] = y1; this->data[2][2] = z1; this->data[2][3] = w1;
		this->data[3][0] = x1; this->data[3][1] = y1; this->data[3][2] = z1; this->data[3][3] = w1;

		this->vectors[0] = Vector4D(x1, y1, z1, w1);
		this->vectors[1] = Vector4D(x2, y2, z2, w2);
		this->vectors[2] = Vector4D(x3, y3, z3, w3);
		this->vectors[3] = Vector4D(x4, y4, z4, w4);
	};

	~Matrix4D() { }

};

void transpose(Matrix4D& m)
{
	Matrix4D result;
	for (int n = 0; n < 4; n++) {
		for (int k = 0; k < 4; k++) {
			result->data[n][k] = m.getData(n, k);
		}
	}
	this->data = result;
};

Matrix4D unity()
{
	Matrix4D m;
	m.setData(1.0f, 0.0f, 0.0f, 0.0f,
		0.0f, 1.0f, 0.0f, 0.0f,
		0.0f, 0.0f, 1.0f, 0.0f,
		0.0f, 0.0f, 0.0f, 1.0f);
	return m;
};

Vector4D translate(Vector4D& v, Matrix4D& m)
{
	Vector4D result;
	for (int n = 0; n < 3; n++) {
		result->data[n] = m->data[n][n];
	}
	result->data[3] = 1.0f;
	return result;
};


