//
// scene.cpp
// Engien
//
// Martek01 - 28.08.2014
//

#include "scene.h"

#include "scenenode3d.h"
#include "scenenode2d.h"

using namespace engine;

Scene::Scene() {

}

Scene::~Scene() {

}

bool Scene::load() {
	return true;
}

void Scene::unload() {

}

bool Scene::isLoaded() const {
	return true;
}

void Scene::add(SceneNode3D *node) {
	_rootNode3D->add(node);
}

void Scene::add(SceneNode2D *node) {
	_rootNode2D->add(node);
}

void Scene::remove(SceneNode3D *node) {
	_rootNode3D->remove(node);
}

void Scene::remove(SceneNode2D *node) {
	_rootNode2D->remove(node);
}

