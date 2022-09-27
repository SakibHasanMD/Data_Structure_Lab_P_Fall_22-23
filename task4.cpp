#include <iostream>

using namespace std;

int main()
{int search_number,i,duplicate_num;
    int A[10]={8,4,6,1,6,9,6,1,9,8};
    cout<<"Input a number to search:";
    cin>>search_number;

    for(i=0;i<10;i++){

        if(A[i]==search_number){
            duplicate_num++;

        }
    }
    cout<<"The Number occurs ";
    cout<<duplicate_num;
     cout<< " Times In The Array.";

}
