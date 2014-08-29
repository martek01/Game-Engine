//
// scenenode3d.cpp
// Engine
//
// Martek01 - 28.08.2014
//

#include "scenenode3d.h"

using namespace engine;

SceneNode3D::SceneNode3D() : LoadableObject() {

}

SceneNode3D::~SceneNode3D() {

}

void SceneNode3D::add(SceneNode3D *node) {
	// only add node if not a child
	if (hasChild(node)) {
		return;
	}

	// add new child
	_children.push_back(node);
}

void SceneNode3D::remove(SceneNode3D *node) {
	for (std::vector<SceneNode3D *>::iterator it = _children.begin(); it != _children.end(); it++) {
		if (node == *it) {
			it = _children.erase(it);
			break;
		}
	}
}

bool SceneNode3D::hasChild(SceneNode3D *node) const {
	for (std::vector<SceneNode3D *>::const_iterator it = _children.begin(); it != _children.end(); it++) {
		if (node == *it) {
			return true;
		}
	}

	return false;
}

bool SceneNode3D::hasChildren() const {
	return (_children.empty() == false);
}

std::vector<SceneNode3D *> SceneNode3D::children() const {
	return _children;
}

