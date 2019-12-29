#pragma once

#include "CommonTypes.h"

#include "glm/vec2.hpp"
#include "glm/vec3.hpp"
#include "glm/vec4.hpp"

namespace World
{
	typedef glm::vec2 _Texcoord;
	typedef glm::vec3 _Position;
	typedef glm::vec4 _Color;
	typedef glm::vec3 _Normal;

	struct Texcoord : _Texcoord
	{};

	struct Position : _Position
	{};

	struct Color : _Color
	{};

	struct Normal : _Normal
	{};

	struct Vertex
	{
		Position m_position;
		Texcoord m_texcoord;
		Normal m_normal;
	};

	struct Texture
	{
		glUint32 m_gl_texture_id;
	};
}