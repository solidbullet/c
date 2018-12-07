1、gcc -c -DBUILD_DLL mql5.cpp    
2、gcc -shared -o mql5.dll mql5.o    

4、mql5调用    

#import "mql5.dll"  
int  fnCalculateSpeed(int &res1,double &res2);  
void fnFillArray(int &arr[],int arr_size);  
void fnReplaceString(string text,string from,string to);  
void fnCrashTest(int arr);  
#import  

void OnStart()    
  {  
   string text="A quick brown fox jumps over the lazy dog";    
   fnReplaceString(text,"fox","cat");  
   Print("Replace: ",text);  
  }