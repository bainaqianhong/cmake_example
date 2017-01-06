#ifndef interface_h__
#define interface_h__



struct interface_t
{
	~interface_t(){}
	virtual void test_virtual_fun0() = 0;
	virtual void test_virtual_fun1() = 0;
	virtual void test_virtual_fun2() = 0;
	virtual void test_virtual_fun3() = 0;
	virtual void test_virtual_fun4() = 0;
};



#endif // interface_h__
