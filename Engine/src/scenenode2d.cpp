//
// scenenode2d.cpp
// Engine
//
// Martek01 - 29.08.2014
//

#include "scenenode2d.h"

using namespace engine;

SceneNode2D::SceneNode2D() : LoadableObject() {

}

SceneNode2D::~SceneNode2D() {

}

void SceneNode2D::add(SceneNode2D *node) {
	// only add node if not a child
	if (hasChild(node)) {
		return;
	}

	// add new child
	_children.push_back(node);
}

void SceneNode2D::remove(SceneNode2D *node) {
	for (std::vector<SceneNode2D *>::iterator it = _children.begin(); it != _children.end(); it++) {
		if (node == *it) {
			_children.erase(it);
			return;
		}
	}
}

bool SceneNode2D::hasChild(SceneNode2D *node) const {
	for (std::vector<SceneNode2D *>::const_iterator it = _children.begin(); it != _children.end(); it++) {
		if (node == *it) {
			return true;
		}
	}

	return false;
}

bool SceneNode2D::hasChildren() const {
	return !_children.empty();
}

