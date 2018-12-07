//+------------------------------------------------------------------+
//|                                                 MQL5 DLL Samples |
//|                   Copyright 2001-2010, MetaQuotes Software Corp. |
//|                                        http://www.metaquotes.net |
//+------------------------------------------------------------------+
#include "stdafx.h"


//+------------------------------------------------------------------+
//| Passing and receving of simple variables                         |
//+------------------------------------------------------------------+
_DLLAPI int __stdcall fnCalculateSpeed(int &res1,double &res2)
  {
   int    res_int=0;
   double res_double=0.0;
   int    start=GetTickCount();
//--- simple math calculations
   for(int i=0;i<=10000000;i++)
     {
      res_int+=i*i;
      res_int++;
      res_double+=i*i;
      res_double++;
     }
//--- set calculation results
   res1=res_int;
   res2=res_double;
//--- return calculation time
   return(GetTickCount()-start);
  }
//+------------------------------------------------------------------+
//| Filling the array with values                                    |
//+------------------------------------------------------------------+
_DLLAPI void __stdcall fnFillArray(int *arr,const int arr_size)
  {
//--- check input variables
   if(arr==NULL || arr_size<1) return;
//--- fill array with values
   for(int i=0;i<arr_size;i++) arr[i]=i;
  }
//+------------------------------------------------------------------+
//| The substring replacement of the text string                     |
//| the string is passed as direct reference to the string content   |
//+------------------------------------------------------------------+

_DLLAPI void __stdcall fnReplaceString(wchar_t *text,wchar_t *from,wchar_t *to)
  {
   wchar_t *cp;
//--- parameters checking
   if(text==NULL || from==NULL || to==NULL) return;
   if(wcslen(from)!=wcslen(to))             return;
//--- search for substring
   if((cp=wcsstr(text,from))==NULL)         return;
//--- replace it 
   memcpy(cp,to,wcslen(to)*sizeof(wchar_t));
  }
//+------------------------------------------------------------------+
//| Call for the crush                                               |
//+------------------------------------------------------------------+
_DLLAPI void __stdcall fnCrashTest(int *arr)
  {
//--- wait for receipt of a zero reference to call the exception
   *arr=0;
  }
//+------------------------------------------------------------------+