1、addlib目录下生成so文件  
g++ -fPIC -shared -o libadd.so add.cpp  
2、编译生成可执行文件  
g++ -o test test.cpp -L./addlib -ladd  
3、上述执行ldd test发现找不到libtest.so 文件，因为so文件需要搜索路径  
4、要在  /etc/ld.so.conf  文件中增加路径 /home/workspace/so/addlib  
5、执行ldconfig命令  
6、./test  成功  
7. window安装MinGW  :https://nuwen.net/mingw.html#install  
