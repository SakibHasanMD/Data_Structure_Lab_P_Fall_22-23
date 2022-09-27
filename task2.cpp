#include <iostream>

using namespace std;

int main()
{
//Array A and B must be of same size
    int A[6]={1,4,6,9,5,12};
    int B[6]={5,3,7,2,1,6};
    int length_of_A=sizeof(A)/4;
    int length_of_B=sizeof(B)/4;
    int CommonArray[20]={};
    int i,j,l=0;

//loop for matching all elements of A to all elements of B
   for(i=0;i<length_of_A;i++){
    for(j=0;j<length_of_B;j++){

 //assign common value to CommonArray
     if(A[i]==B[j]){
      CommonArray[l]=B[j];
       l++;
     }
     }
     }

  if(l==0){
   cout<<"No Common Element Found!";
   }
   else{cout<<"Common Elements are: ";
for(i=0;i<l;i++){cout<<CommonArray[i]<<" ";}

}
}
