//
// sceneobject2d.h
// Engine
//
// Martek01 - 03.09.2014
//

#ifndef ENGINE_SCENE_OBJECT_2D_H
#define ENGINE_SCENE_OBJECT_2D_H

#include "scenenode2d.h"

#include <glm/glm.hpp>

namespace engine {
	class SceneObject2D : public SceneNode2D {
	private:
		glm::vec2 _position;
		glm::vec2 _scale;
		float _rotation;

	public:
		SceneObject2D(glm::vec2 position = glm::vec2(0.0f));
		virtual ~SceneObject2D();

		void setPosition(glm::vec2 position);
		void setScale(glm::vec2 scale);
		void setRotation(float rotation);
		glm::vec2 position() const;
		glm::vec2 scale() const;
		float rotation() const;

	private:

	};
}

#endif /* ENGINE_SCENE_OBJECT_2D_H */