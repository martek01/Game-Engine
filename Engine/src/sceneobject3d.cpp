//
// sceneobject3d.cpp
// Engine
//
// Martek01 - 29.08.2014
//

#include "sceneobject3d.h"

using namespace engine;

SceneObject3D::SceneObject3D(glm::vec3 position) {
	// set attributes
	_position = position;
	_scale = glm::vec3(1.0f);
}

SceneObject3D::~SceneObject3D() {

}

void SceneObject3D::setPosition(glm::vec3 position) {
	_position = position;
}

void SceneObject3D::setScale(glm::vec3 scale) {
	_scale = scale;
}

void SceneObject3D::setQuaternion(glm::quat quaternion) {
	_quaternion = quaternion;
}

glm::vec3 SceneObject3D::position() const {
	return _position;
}

glm::vec3 SceneObject3D::scale() const {
	return _scale;
}

glm::quat SceneObject3D::quaternion() const {
	return _quaternion;
}

