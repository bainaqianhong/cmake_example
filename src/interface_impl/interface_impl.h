#ifndef interface_impl_h__
#define interface_impl_h__

#include "interface/interface.h"


class interface_impl : public interface_t
{
public:
	interface_impl();
	virtual void test_virtual_fun0();
	virtual void test_virtual_fun1();
	virtual void test_virtual_fun2();
	virtual void test_virtual_fun3();
	virtual void test_virtual_fun4();
};




#endif // interface_impl_h__