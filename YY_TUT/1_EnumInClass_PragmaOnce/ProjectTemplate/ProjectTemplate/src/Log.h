#pragma once
#include <iostream>
/*
#ifndef LOG_H
#define LOG_H
...
#endif
-->Dass Datein nicht mehrmals in Module eingebunden werden-> Entspricht #pragma once
*/
class Log
{
public:
	enum Level
	{
		LevelError=0, LevelWarning, LevelInfo
	};
private:
	Level m_LogLevel = LevelInfo;
public:
	void SetLevel(Level level);
	void Error(const char* message);
	void Warn(const char* message);
	void Info(const char* message);

	Log();
	~Log();
};

