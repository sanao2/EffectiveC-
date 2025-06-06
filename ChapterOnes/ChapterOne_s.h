#pragma once
#include "pch.h"

//extern FS fs;

class FS {
public:
	FS fs()
	{
		// 생성자 
		// 초기화 순서가 정해져 있지 않다. 
		// 비지역 정적 객체들의 초기화는 직접 하지 않는 것이 좋다. 
		// 컴파일러가 자동으로 초기화 해준다.  

		static FS fs;
		return fs;
	}

	int numDisk() const { return 1; } // 디스크 수를 반환하는 함수  
};

