#pragma once

#include "../base/study_defs.h"

class CRandom
{
public:
	CRandom(UINT uiSeed);
	~CRandom(VOID);

	INT		Rand(VOID);
	INT		SimpleRandom(VOID);
	INT		ComplexRandom(VOID);
	
private:
	UINT	m_uiSeed;
};