#pragma once
#include "HBPakFile.hpp"

struct HBPakv10 {
	char m_Magic[16];
	int m_uiPackSize;
	short m_uiHeaderSize;
	short m_uiNumFiles;
	char m_szSourcePath[104];
	HBPakV10File m_Files[];
};
