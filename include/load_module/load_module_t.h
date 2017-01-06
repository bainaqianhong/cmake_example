#ifndef load_module_t_h__
#define load_module_t_h__

#include "export.h"
#include <stdint.h>


class LOAD_MODULE_DLL load_module_t
{
public:
	load_module_t(const wchar_t* filename);

	load_module_t(const char* filename);

	~load_module_t();

	bool dllLegal() const;


	template <class T>
	T getFunction(const char* funname)
	{
		T t = (T)__get_process_address(funname);
		return t;
	}

	int getError() const;

private:
	void* __get_process_address(const char *funcname);	
	void *_impl;
};


#endif // load_module_t_h__
