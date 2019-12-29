#pragma once

#include "CommonDefines.h"

#include "Primitive.h"

namespace World
{
	class AssimpMeshConverter;

	class Mesh
	{
	public:
		Mesh();

	private:
		std::vector<Vertex> m_vertexs;
		std::vector<uint32_t> m_indices;
		std::vector<Texture> m_textures;

		friend class AssimpMeshConverter;
	};
}