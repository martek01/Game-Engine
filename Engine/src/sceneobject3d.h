//
// sceneobject3d.h
// Engine
//
// Martek01 - 29.08.2014
//

#ifndef ENGINE_SCENE_OBJECT_3D_H
#define ENGINE_SCENE_OBJECT_3D_H

#include "scenenode3d.h"

#include <glm\glm.hpp>
#include <glm\gtc\quaternion.hpp>

namespace engine {
	class SceneObject3D : public SceneNode3D {
	private:
		glm::vec3 _position;
		glm::vec3 _scale;
		glm::quat _quaternion;

	public:
		SceneObject3D(glm::vec3 position = glm::vec3(0.0f));
		virtual ~SceneObject3D();

		void setPosition(glm::vec3 position);
		void setScale(glm::vec3 scale);
		void setQuaternion(glm::quat quaternion);
		glm::vec3 position() const;
		glm::vec3 scale() const;
		glm::quat quaternion() const;

	private:

	};
}

#endif /* ENGINE_SCENE_OBJECT_3D_H */