#include <iostream>

using namespace std;

int main()
{int i,j,duplicate_num=0;
    int A[7]={1,4,6,3,6,9,1};
    int UniqueArray[7]={};
    int length_of_A=sizeof(A)/4;
    int length_of_U=sizeof(UniqueArray)/4;

 for (i=0;i<length_of_A;i++){

    for(j=0;j<length_of_A ; j++){

            if(j==i){
                //do nothing
            }
               else{
                   if(A[i]!=A[j]){

//printing I , J for testing if working or not
        cout<<"I="<<i<<"   "<<"J="<<j<<endl;
                   }
                   else if(A[i]==A[j]){
//printing I , J for matching duplicate
                    cout<<"Duplicate Found On";
                    cout<<" I="<<i<<"   "<<"J="<<j<<endl;
                    cout<<endl;
                   }
       }
    }


}
for(i=0;i<length_of_U;i++){
    cout<<UniqueArray[i];}
 }

//Unable to complete before 12 pm
