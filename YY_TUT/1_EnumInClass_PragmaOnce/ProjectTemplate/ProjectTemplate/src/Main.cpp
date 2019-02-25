#include <iostream>

#include "Log.h"


int main()
{
	Log log;
	log.SetLevel(Log::LevelError);
	log.Warn("Hello!");
	log.Error("Hello!");
	log.Info("Hello!");
	std::cin.get();

}