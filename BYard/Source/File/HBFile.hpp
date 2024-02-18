#pragma once

struct HBFile {
	char* m_pBaseOffset;
	char* m_pCurrentOffset;
	int m_uiDataSize;
	int m_eFlags;
};
