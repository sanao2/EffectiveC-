#pragma once
#include "pch.h"

//extern FS fs;

class FS {
public:
	FS fs()
	{
		// ������ 
		// �ʱ�ȭ ������ ������ ���� �ʴ�. 
		// ������ ���� ��ü���� �ʱ�ȭ�� ���� ���� �ʴ� ���� ����. 
		// �����Ϸ��� �ڵ����� �ʱ�ȭ ���ش�.  

		static FS fs;
		return fs;
	}

	int numDisk() const { return 1; } // ��ũ ���� ��ȯ�ϴ� �Լ�  
};

