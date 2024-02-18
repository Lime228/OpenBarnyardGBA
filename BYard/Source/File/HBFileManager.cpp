#include "HBFile.cpp"
#include "HBPak.cpp"
#include "HBPakFile.cpp"

namespace HBFileManager {
	int OpenFilePak(char* szFileName, int eFlags, HBFile* pFileRef) {
		HBPakV10File* pakV10File;
		int iVar1;
		char filename[120];
		short headerSize;
		char* magic;
		short numFiles;
		HBPakv10 *pakV10;


	}
}