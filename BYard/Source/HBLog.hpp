#pragma once

class HBLog 
{
public:
	enum class LogType
	{
		Info,
		Warning,
		Error,
		Trace
	};

	static void Create();

	static void Destroy();

	static void Print(LogType logType, const char* szFormat, ...);

};