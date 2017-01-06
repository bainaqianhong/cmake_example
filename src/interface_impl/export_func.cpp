#include "interface_impl.h"

extern "C"
{
	__declspec(dllexport) interface_t* create_interface()
	{

		interface_impl* p = new interface_impl;
		return p;
	}



}