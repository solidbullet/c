#ifndef __MYDLL_H__
#define __MYDLL_H__

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C" {
#endif
    DLL_EXPORT int __stdcall foo(int x);
#ifdef __cplusplus
}
#endif

#endif // __MYDLL_H__