#include "File/HBFile.hpp"
#include "HBLog.hpp"

int main()
{
    char test[] = { "test"};
    HBLog::Print(HBLog::LogType::Info, "%s,%s", test, test);
}