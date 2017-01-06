#include "load_module/load_module_t.h"

#include <Windows.h>

struct dll_item_windows
{
	HINSTANCE m_handle;
	DWORD m_error;
};


load_module_t::load_module_t(const wchar_t* filename)
{
	dll_item_windows *impl = (dll_item_windows*)malloc(sizeof(dll_item_windows));
	memset(impl, 0, sizeof(dll_item_windows));

	impl->m_handle = LoadLibraryW(filename);
	if (impl->m_handle == NULL)
		impl->m_error = GetLastError();
	_impl = impl;
}


load_module_t::load_module_t(const char* filename)
{
	dll_item_windows *impl = (dll_item_windows*)malloc(sizeof(dll_item_windows));
	memset(impl, 0, sizeof(dll_item_windows));

	impl->m_handle = LoadLibrary(filename);
	if (impl->m_handle == NULL)
		impl->m_error = GetLastError();
	_impl = impl;
}

load_module_t::~load_module_t()
{
	if (NULL == _impl) return;

	dll_item_windows *impl = reinterpret_cast<dll_item_windows*>(_impl);

	if (impl->m_handle)
		::FreeLibrary(impl->m_handle);

	free(impl);
	_impl = NULL;
}

bool load_module_t::dllLegal() const
{
	return _impl && ((dll_item_windows*)_impl)->m_handle;
}

int load_module_t::getError() const
{
	return reinterpret_cast<dll_item_windows*>(_impl)->m_error;
}

void* load_module_t::__get_process_address(const char *funcname)
{
	if (NULL == _impl) return 0;

	dll_item_windows *impl = reinterpret_cast<dll_item_windows*>(_impl);
	void *ret = GetProcAddress(impl->m_handle, funcname);
	return ret;
}