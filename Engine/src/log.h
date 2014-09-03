//
// log.h
// Engine
//
// Martek01 - 03.09.2014
//

#ifndef ENGINE_LOG_H
#define ENGINE_LOG_H

#include <fstream>
#include <string>

#include <glm\glm.hpp>

namespace engine {
	class Log {
	public:
		typedef enum {
			info,
			warning,
			error,
			empty
		} WarningLevel;

	private:
		std::ofstream _stream;
		std::string _path;
		std::string _stampName;
		WarningLevel _level;

	public:
		Log(std::string path);
		virtual ~Log();

		void close();
		bool isOpen() const;

		void setStampName(std::string name);
		std::string stampName() const;

		void setDefaultLevel(WarningLevel level);
		WarningLevel defaultLevel() const;

		void stamp();
		void stamp(WarningLevel level);

		Log &operator<<(Log &(*pf)(Log &));

	private:
		// friend functions
		friend Log &operator<<(Log &log, std::string string);
		friend Log &operator<<(Log &log, const unsigned char *string);
		friend Log &operator<<(Log &log, int number);
		friend Log &operator<<(Log &log, unsigned int number);
		friend Log &operator<<(Log &log, float number);
		friend Log &operator<<(Log &log, glm::vec3 vector);
		friend Log &operator<<(Log &log, glm::mat4 matrix);
	};

	Log &stamp(Log &log);
	Log &infoStamp(Log &log);
	Log &warningStamp(Log &log);
	Log &errorStamp(Log &log);
	Log &emptyStamp(Log &log);
}

#endif /* ENGINE_LOG_H */