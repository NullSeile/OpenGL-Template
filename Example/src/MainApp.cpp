#include "GLCore.h"
#include "MainLayer.h"

using namespace GLCore;

class MainApp : public Application
{
public:
	MainApp()
		: Application("OpenGL Examples")
	{
		PushLayer(new MainLayer());
	}
};

int main()
{
	std::unique_ptr<MainApp> app = std::make_unique<MainApp>();
	app->Run();
}