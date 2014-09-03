//
// window.cpp
// Engine
//
// Martek01 - 03.09.2014
//

#include "window.h"

#include "scene.h"

using namespace engine;

bool Window::glewInitialized = false;

Window::Window(unsigned int width, unsigned int height, std::string title, GLFWmonitor *monitor) {
	// create window
	_window = glfwCreateWindow(width, height, title.c_str(), monitor, NULL);
	if (!_window) {

	}

	// make window context to current
	glfwMakeContextCurrent(_window);

	// set user pointer
	glfwSetWindowUserPointer(_window, this);
}

Window::~Window() {

}

