//
// log.cpp
// Engine
//
// Martek01 - 03.09.2014
//

#include "log.h"

#include <ctime>

using namespace engine;

Log::Log(std::string path) {
	// set attributes
	_path = path;
	_stampName = "Engine";
	_level = error;

	// create stream
	_stream.open(path, std::ios::app);
}

Log::~Log() {
	// close stream
	close();
}

void Log::close() {
	_stream.close();
}

bool Log::isOpen() const {
	return _stream.is_open();
}

void Log::setStampName(std::string name) {
	_stampName = name;
}

std::string Log::stampName() const {
	return _stampName;
}

void Log::setDefaultLevel(WarningLevel level) {
	_level = level;
}

Log::WarningLevel Log::defaultLevel() const {
	return _level;
}

void Log::stamp(WarningLevel level) {
	std::time_t timestamp = std::time(NULL);
	struct tm *now = std::localtime(&timestamp);

	std::string levelString = "";

	switch (level) {
	case info:
		levelString = " Info";
		break;
	case warning:
		levelString = " Warning";
		break;
	case error:
		levelString = " Error";
		break;

	default:
		break;
	}

	_stream << "[" << _stampName << " " << now->tm_mday << "-" << now->tm_mon << "-" << 1900 + now->tm_year << "-" << now->tm_hour << ":" << now->tm_min << ":" << now->tm_sec << levelString << "]: " << std::flush;
}

Log &Log::operator<<(Log &(*pf)(Log &)) {
	pf(*this);
	return *this;
}

// operator functions
Log &engine::operator<<(Log &log, std::string string) {
	log._stream << string << std::flush;
	return log;
}

Log &engine::operator<<(Log &log, const unsigned char *string) {
	log._stream << string << std::flush;
	return log;
}

Log &engine::operator<<(Log &log, int number) {
	log._stream << number << std::flush;
	return log;
}

Log &engine::operator<<(Log &log, unsigned int number) {
	log._stream << number << std::flush;
	return log;
}

Log &engine::operator<<(Log &log, float number) {
	log._stream << number << std::flush;
	return log;
}

Log &engine::operator<<(Log &log, glm::vec3 vector) {
	log._stream << "(" << vector.x << ", " << vector.y << ", " << vector.z << ")";
	return log;
}

Log &engine::operator<<(Log &log, glm::mat4 matrix) {
	log._stream << "(";

	for (int i = 0; i < 4; i++) {
		log._stream << "(";

		for (int j = 0; j < 4; j++) {
			log._stream << matrix[i][j];

			if (j < 3) {
				log._stream << ", ";
			}
		}

		log._stream << ")";

		if (i < 3) {
			log._stream << ", ";
		}
	}

	return log;
}

Log &engine::stamp(Log &log) {
	log.stamp();
	return log;
}

Log &engine::infoStamp(Log &log) {
	log.stamp(Log::WarningLevel::info);
	return log;
}

Log &engine::warningStamp(Log &log) {
	log.stamp(Log::WarningLevel::warning);
	return log;
}

Log &engine::errorStamp(Log &log) {
	log.stamp(Log::WarningLevel::error);
	return log;
}

Log &engine::emptyStamp(Log &log) {
	log.stamp(Log::WarningLevel::empty);
	return log;
}

