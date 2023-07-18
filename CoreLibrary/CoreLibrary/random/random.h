#pragma once

#include "../base/stdafx.h"

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