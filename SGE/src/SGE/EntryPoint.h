#pragma once

extern SGE::Application* SGE::CreateApplication();

#ifdef SGE_PLATFORM_WINDOWS
	
	int main(int argc, char** argv)
	{
		auto app = SGE::CreateApplication();
		app->Run();
		delete app;
	}
	
#endif
	