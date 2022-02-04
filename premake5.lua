workspace "OpenGL-Template"
	architecture "x64"
	startproject "OpenGL-Template"

	configurations {
		"Debug",
		"Release"
	}
	
	flags {
		"MultiProcessorCompile"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- Projects
group "Dependencies"
	include "OpenGL-Core/vendor/GLFW"
	include "OpenGL-Core/vendor/Glad"
	include "OpenGL-Core/vendor/imgui"
group ""

include "OpenGL-Core"
include "Example"