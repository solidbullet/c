#include <iostream>
 
using namespace std;

class A 
{  
public:  
    int operator() ( int val )  
    {  
        return val > 0 ? val : -val*3;
    }  
};
int main()
{

int i = -3;
A a;
cout << a(i);
}