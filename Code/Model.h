#pragma once

#include "CommonDefines.h"

namespace World
{
	class Mesh;

	class Model
	{
	public:	
		Model(const std::string& modelPath);

	private:
		void LoadModel();

	private:
		std::string m_file_path;
		std::vector<Mesh> m_submeshes;
	};
}