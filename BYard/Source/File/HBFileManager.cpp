#include "HBFileManager.hpp"
#include "HBFile.hpp"
#include "HBPak.hpp"

int HBFileManager::OpenFilePak(char* szFileName, int eFlags, HBFile* pFileRef) 
{
	HBPakV10File* pakV10File;
	int iVar1;
	char filename[120];
	short headerSize;
	char* magic;
	short numFiles;
	HBPakv10* pakV10;


	return 0;
}