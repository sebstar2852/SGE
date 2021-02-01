#include <SGE.h>

class Sandbox : public SGE::Application
{

public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

SGE::Application* SGE::CreateApplication()
{
	return new Sandbox();
}