#pragma once

#include "Types.h"

struct UV
{
	float u, v;
	
	UV() : u(0.f), v(0.f) {}
	UV(float u_, float v_) : u(u_), v(v_) {}
};

struct Vertex2D
{
	// [-1.f, 1.f]
	float x, y;

	Vertex2D() : x(0.f), y(0.f) {}
	Vertex2D(float x_, float y_) : x(x_), y(y_) {}
};

struct Vertex3D : public Vertex2D
{
	float z;

	Vertex3D() : Vertex2D(), z(0.f) {}
	Vertex3D(float x_, float y_, float z_) : Vertex2D(x_, y_), z(z_) {}
};

struct ColorRGB
{
	uint8_t r, g, b;
	
	ColorRGB() : r(0), g(0), b(0) {}
	ColorRGB(uint8_t r_, uint8_t g_, uint8_t b_) : r(r_), g(g_), b(b_) {}
};

struct ColorRGBA : public ColorRGB
{
	uint8_t a;
	ColorRGBA() : ColorRGB(), a(0) {}
	ColorRGBA(uint8_t r_, uint8_t g_, uint8_t b_, uint8_t a_) : ColorRGB(r_, g_, b_), a(a_) {}
};
