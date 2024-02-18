#pragma once
#include "HBFile.hpp"


class HBFileManager 
{

public:
	int OpenFilePak(char* szFileName, int eFlags, HBFile* pFileRef);

};
