#include "HBLog.hpp"
#include <stdarg.h>
#include <stdio.h>
#include <time.h>


void HBLog::Create()
{};


void HBLog::Destroy()
{};


void HBLog::Print(LogType logType, const char* szFormat, ...)
{
    va_list factor;
    va_start(factor, szFormat);

    const char* type[4] = { "INFO", "WARNING", "ERROR", "TRACE" };
    static int messageCount = 1;
    char strTime[9];

    _strtime(strTime);
    printf("%05d> [%s] [%s] ", messageCount, strTime, type[static_cast<int>(logType)]); // 00007> [20:51:32] [INFO] 
    vprintf(szFormat, factor);
    printf("\n");
    messageCount++;

    va_end(factor);

};