#include "interface/interface.h"
#include "load_module/load_module_t.h"


typedef interface_t* (*create_interface)();


#ifdef _DEBUG
#define DLL_NAME "interface_impl.dll"
#else
#define DLL_NAME "interface_impl.dll"
#endif // _DEBUG

int main(int argc, char *argv[])
{

	load_module_t dll_item(DLL_NAME);
	
	create_interface pfun = dll_item.getFunction<create_interface>("create_interface");

	if (0 == pfun) return 1;


	interface_t* pinterface = pfun();


	pinterface->test_virtual_fun0();
	pinterface->test_virtual_fun1();
	pinterface->test_virtual_fun2();
	pinterface->test_virtual_fun3();
	pinterface->test_virtual_fun4();


	return 0;
}



