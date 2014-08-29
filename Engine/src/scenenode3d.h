//
// scenenode3d.h
// Engine
//
// Martek01 - 28.08.2014
//

#ifndef ENGINE_SCENE_NODE_3D_H
#define ENGINE_SCENE_NODE_3D_H

#include <vector>

#include "loadableobject.h"

namespace engine {
	class SceneNode3D : public LoadableObject {
	private:
		std::vector<SceneNode3D *> _children;

	public:
		SceneNode3D();
		virtual ~SceneNode3D();

		void add(SceneNode3D *node);
		void remove(SceneNode3D *node);
		bool hasChild(SceneNode3D *node) const;
		bool hasChildren() const;
		std::vector<SceneNode3D *> children() const;

	private:

	};
}

#endif /* ENGINE_SCENE_NODE_3D_H */