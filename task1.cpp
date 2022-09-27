#include <iostream>

using namespace std;

int main()
{
    int A[5]={10,20,30,40,50};
    int B[8]={1,2,3,4,5,6,7,8};
    int Merge[15]={};
    int i,j;


    for(i=0; i<5; i++)
    {
        Merge[i] = A[i];
    }

    j = i;
    //------------
 cout<<"1st Array:";
  for(i=0; i<5; i++)
    {
      cout<< Merge[i];
      cout<<" ";
    }
    cout<<endl;

   //-------------
    for(i=0; i<8; i++ )
    {
        Merge[j] = B[i];
        j++;

    }
    //----------------
cout<<"2nd Array:";
  for(i=5; i<13; i++)
    {
      cout<< Merge[i];
      cout<<" ";
    }
    cout<<endl;
    //-------------
 cout<<endl;
cout<<"Merged Array In Reverse Order:";
    for(i=j-1; i>=0; i--)
        cout<<Merge[i]<<" ";
    cout<<endl;

}
