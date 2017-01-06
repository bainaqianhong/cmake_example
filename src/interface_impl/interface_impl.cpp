#include "interface_impl.h"

#include <stdio.h>



interface_impl::interface_impl()
{

}

void interface_impl::test_virtual_fun0()
{
	printf("%s %d %s", __FILE__, __LINE__, __FUNCTION__);	
	printf("\n");
}

void interface_impl::test_virtual_fun1()
{
	printf("%s %d %s", __FILE__, __LINE__, __FUNCTION__);
	printf("\n");
}

void interface_impl::test_virtual_fun2()
{
	printf("%s %d %s", __FILE__, __LINE__, __FUNCTION__);
	printf("\n");
}

void interface_impl::test_virtual_fun3()
{
	printf("%s %d %s", __FILE__, __LINE__, __FUNCTION__);
	printf("\n");
}

void interface_impl::test_virtual_fun4()
{
	printf("%s %d %s", __FILE__, __LINE__, __FUNCTION__);
	printf("\n");
}

