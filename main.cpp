#define SIZE 10
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;




int main(){

  

/*Example Array*/
  /*
int *ip;
int a[ ] = {31415, 21828};
ip = a;//address of ip = a
// alternative:	ip = &a[0];

cout<<a<<endl;			// address of a[0]
cout<<ip<<" "<<*ip<<endl;	
  
(*ip)++; //plus 1 the value of a[0]
cout<<a<<" "<<a[0]<<endl;		
cout<<ip<<" "<<*ip<<endl; 	
  
ip++; //point to a[1] instead
cout<<a<<endl;		
cout<<ip<<" "<<*ip<<endl; 	// print 
*/
 /*the address is 4324, not 4321
 because the pointer is incremented 						
 by the size of an integer (4 bytes) */
  char *pa, *pb, temp;
  char a[SIZE];
    cout<<"Input String:";
    cin>>a;
    int len=strlen(a);
  pa = &a[0];
  cout<< "Original: ";
  for (int i = 0; i < len - 1; i++,pa++)
   cout<<setw(3)<<*pa<<" ";
cout<<setw(3)<<*pa<<endl;
  pa = &a[0]; pb = &a[len - 1];
cout<<"Reverse: ";
for (int i = 0; i < len / 2; i++) {
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    pa++; pb--;
}
pa = &a[0];
for (int i = 0; i < len - 1; i++,pa++)
cout<<setw(3)<<*pa<<" ";
  
cout<<setw(3)<<*pa<<endl;
return 0;
}

