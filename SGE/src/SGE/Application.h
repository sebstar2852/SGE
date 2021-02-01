#pragma once

#include "Core.h"

namespace SGE 
{
	class SGE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();

}
