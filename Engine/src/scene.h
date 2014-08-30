//
// scene.h
// Engine
//
// Martek01 - 28.08.2014
//

#ifndef ENGINE_SCENE_H
#define ENGINE_SCENE_H

#include "loadableobject.h"

namespace engine {
	class SceneNode3D;
	class SceneNode2D;

	class Scene : public LoadableObject {
	private:
		SceneNode3D *_rootNode3D;
		SceneNode2D *_rootNode2D;

	public:
		Scene();
		virtual ~Scene();

		void add(SceneNode3D *node);
		void add(SceneNode2D *node);
		void remove(SceneNode3D *node);
		void remove(SceneNode2D *node); 

		SceneNode3D *rootNode3D() const;
		SceneNode2D *rootNode2D() const;

	private:

	};
}

#endif /* ENGINE_SCENE_H */