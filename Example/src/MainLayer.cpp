#include "MainLayer.h"

using namespace GLCore;
using namespace GLCore::Utils;

void MainLayer::OnUpdate(Timestep ts)
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void MainLayer::OnEvent(Event& event)
{
	EventDispatcher dispatcher(event);
	dispatcher.Dispatch<MouseButtonPressedEvent>(
		[&](MouseButtonPressedEvent& e)
		{
			std::cout << "Mouse pressed!!\n";
			return false;
		});
	dispatcher.Dispatch<MouseButtonReleasedEvent>(
		[&](MouseButtonReleasedEvent& e)
		{
			std::cout << "Mouse released!!\n";
			return false;
		});
}

void MainLayer::OnImGuiRender()
{
	ImGui::Begin("Controls");
    static float val = 0;
	ImGui::DragFloat("Val", &val, 0.1f, -5, 5);
	ImGui::End();
}