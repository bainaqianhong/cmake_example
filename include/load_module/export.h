#ifndef load_module_export_h__
#define load_module_export_h__


#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__) || defined( __BCPLUSPLUS__)  || defined( __MWERKS__)
	#if defined LOAD_MODULE_DLL_EXPORT
		#define LOAD_MODULE_DLL __declspec(dllexport)
	#else
		#define LOAD_MODULE_DLL __declspec(dllimport)
	#endif // LOAD_MODULE_DLL
#else
	#define LOAD_MODULE_DLL
#endif


#endif // load_module_export_h__
