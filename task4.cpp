#include <iostream>

using namespace std;

int main()
{int search_number,i,duplicate_num=0;
    int A[10]={8,4,6,1,6,9,6,1,9,8};

    cout<<"Input a number to search: ";
    cin>>search_number;
//comparing all elements of A to search_number
    for(i=0;i<10;i++){
//if any duplicate value is available the duplicate_num increases
        if(search_number==A[i]){
            duplicate_num++;

        }

    }
    cout<<"The Number occurs "<<duplicate_num<<" Times In The Array.";

}
