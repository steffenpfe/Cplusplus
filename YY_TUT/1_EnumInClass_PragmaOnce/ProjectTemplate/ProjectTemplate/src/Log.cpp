#include "Log.h"


Log::Log()
{
}


Log::~Log()
{
}


void Log::SetLevel(Level level)
{
	m_LogLevel = level;
}


void Log::Error(const char* message)
{
	if (m_LogLevel >= LevelError)
		std::cout << "[ERROR]" << message << std::endl;
}


void Log::Warn(const char* message)
{
	if (m_LogLevel >= LevelWarning)
		std::cout << "[Warning]" << message << std::endl;
}


void Log::Info(const char* message)
{
	if (m_LogLevel >= LevelInfo)
		std::cout << "[Info]" << message << std::endl;
}


