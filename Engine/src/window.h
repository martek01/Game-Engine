//
// window.h
// Engine
//
// Martek01 - 28.05.2014
//

#ifndef ENGINE_WINDOW_H
#define ENGINE_WINDOW_H

#include <string>

#include <GLFW\glfw3.h>

namespace engine {
	class Renderer;

	class Window {
	private:
		unsigned int _width;
		unsigned int _height;
		std::string _title;

	public:
		Window(unsigned int width, unsigned int height, std::string title);
		virtual ~Window();

	private:

	};
}

#endif /* ENGINE_WINDOW_H */
