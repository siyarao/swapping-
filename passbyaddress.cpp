#include<iostream>
using namespace std;

void passByAddress(int *x,int *y)
{ int z=*x;
      *x=*y;
      *y=z;
}

int main()
{   int a=5,b=6;
   cout<<"Before Swapping:"<<a<<b<<endl;
   
   passByAddress(&a,&b);
   
   cout<<"After Swapping: "<<a<<b ;
   
   return 0;
}

