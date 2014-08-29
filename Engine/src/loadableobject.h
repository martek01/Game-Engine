//
// loadableobject.h
// Engine
//
// Martek01 - 29.08.2014
//

#ifndef ENGINE_LOADABLE_OBJECT_H
#define ENGINE_LOADABLE_OBJECT_H

namespace engine {
	class LoadableObject {
	public:
		LoadableObject() {}
		virtual ~LoadableObject() {}

		virtual bool load() { return true; }
		virtual void unload() {}
		virtual bool isLoaded() const { return true; }
	};
}

#endif /* ENGINE_LOADABLE_OBJECT_H */
