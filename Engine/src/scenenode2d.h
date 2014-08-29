//
// scenenode2d.h
// Engine
//
// Martek01 - 28.08.2014
//

#ifndef ENGINE_SCENE_NODE_2D_H
#define ENGINE_SCENE_NODE_2D_H

#include <vector>

#include "loadableobject.h"

namespace engine {
	class SceneNode2D : public LoadableObject {
	private:
		std::vector<SceneNode2D *> _children;

	public:
		SceneNode2D();
		virtual ~SceneNode2D();

		void add(SceneNode2D *node);
		void remove(SceneNode2D *node);
		bool hasChild(SceneNode2D *node) const;
		bool hasChildren() const;
		std::vector<SceneNode2D *> children() const;

	private:

	};
}

#endif /* ENGINE_SCENE_NODE_2D_H */