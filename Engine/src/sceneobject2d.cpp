//
// sceneobject2d.cpp
// Engine
//
// Martek01 - 03.09.2014
//

#include "sceneobject2d.h"

using namespace engine;

SceneObject2D::SceneObject2D(glm::vec2 position) : SceneNode2D() {
	// set attributes
	_position = position;
	_scale = glm::vec2(1.0f);
	_rotation = 0;
}

SceneObject2D::~SceneObject2D() {

}

void SceneObject2D::setPosition(glm::vec2 position) {
	_position = position;
}

void SceneObject2D::setScale(glm::vec2 scale) {
	_scale = scale;
}

void SceneObject2D::setRotation(float rotation) {
	_rotation = rotation;
}

glm::vec2 SceneObject2D::position() const {
	return _position;
}

glm::vec2 SceneObject2D::scale() const {
	return _scale;
}

float SceneObject2D::rotation() const {
	return _rotation;
}