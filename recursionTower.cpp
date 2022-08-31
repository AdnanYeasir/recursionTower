#include<iostream>
#include <cstdlib>
using namespace std;
void Move(char F, char T, char E, int n)     // recursive function
{
     if(n==1){
         cout<<"Transfer Ring "<<n<<" from Tower "<<F<<" to Tower "<<T<<endl;
         return;
       } 
     Move(F,E,T,n-1); 
     cout<<"Transfer Ring "<<n<<" from Tower "<<F<<" to Tower "<<T<<endl;
     Move(E,T,F,n-1);  // c,b,a
     return;
}
int main()
{   int N;        // Number of rings
    char A='a',B='b', C='c';
    cout<<"Enter the number of rings : ";
    cin>>N;
    Move(A,B,C,N);

    system("pause");
    return 0;
}