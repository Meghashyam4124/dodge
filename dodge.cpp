#include <iostream>  
using namespace std;  
class vehicle  
{  
public:  
vehicle()  
    {  
cout<< "This is not just a vehicle but a car \n";  
    }  
};  
class Car: public vehicle  
{  
public:  
Car()  
    {  
cout<< "this is not just a car but a beast \n";  
    }  
};  
class Racing  
{  
public:  
Racing()  
    {  
cout<< "this is not just for racing but also to give a feeling of a gangester \n";  
    }  
};  
class challengersrtdemon: public Car, public Racing  
{  
public:  
challengersrtdemon()  
    {  
cout<<"this is a DODGE CHALLENGER SRT DEMON 170.It has a powerfull V8 producing a power of 1025 BHP with 945 Nm of torque.\n";  
    }  
  
};  
int main() {  
    challengersrtdemon f;  
    return 0;  
}