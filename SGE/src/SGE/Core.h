#pragma once

#ifdef SGE_PLATFORM_WINDOWS
	#ifdef SGE_BUILD_DLL
		#define SGE_API _declspec(dllexport)
	#else
		#define SGE_API _declspec(dllimport)
	#endif
#else
	#error SGE only supports windows!
#endif