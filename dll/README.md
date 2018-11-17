1、gcc -c -DBUILD_DLL mydll.c //生成mydll.o  
2、gcc -shared -o mydll.dll mydll.o -Wl,--kill-at,--out-implib,libmydll.a  //生成mydll.dll  
3、g++ -o test test.cpp mydll.dll  
4、python调用  
>>> import ctypes  
>>> mydll = ctypes.windll.LoadLibrary("d:\\test\\mydll.dll")  
>>> print mydll.foo(10)  
