//
// window.h
// Engine
//
// Martek01 - 28.05.2014
//

#ifndef ENGINE_WINDOW_H
#define ENGINE_WINDOW_H

#include <string>

#include <glm/glm.hpp>
#include <GLFW\glfw3.h>

namespace engine {
	class Scene;
	class Renderer;
	class Window;

	class Window {
	private:
		GLFWwindow *_window;

		unsigned int _width;
		unsigned int _height;
		std::string _title;

		// class members
		static bool glewInitialized;

	public:
		Window(unsigned int width, unsigned int height, std::string title, GLFWmonitor *monitor);
		virtual ~Window();

		void update();

		void close();
		bool isClosed();

		void setScene(Scene *scene);
		Scene *scene() const;

		unsigned int width() const;
		unsigned int height() const;
		glm::vec2 size() const;
		std::string title() const;

		GLFWwindow *handle() const;

		void setCursorPosition(glm::vec2 position);
		glm::vec2 cursorPosition() const;
		int key(int key) const;
		int mouseButton(int button) const;
		void showCursor();
		void hideCursor();

	private:
		// input callbacks
		static void key_callback(GLFWwindow *window, int key, int scancode, int action, int mods);
		static void mouseButton_callback(GLFWwindow *window, int button, int action, int mods);
		static void cursorPos_callback(GLFWwindow *window, double x, double y);
		static void scroll_callback(GLFWwindow *window, double x, double y);

		// initialize glew
		static void initGlew();

		// disable copying
		Window(const Window &);
		const Window &operator=(const Window &);
	};
}

#endif /* ENGINE_WINDOW_H */
