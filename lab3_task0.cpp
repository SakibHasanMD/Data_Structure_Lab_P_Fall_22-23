#include <iostream>
using namespace std;

int main()
{ int r=4,c=4,i,j, Matrix_1[r][c];
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
            cout<<"Enter Matrix Element "<<(r*i)+j<<":";
        cin>>Matrix_1[i][j];
    }
}
cout<<endl;
//print
cout<<"4X4 matrix:"<<endl;
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        cout<<Matrix_1[i][j]<<" ";
}
cout<<endl;
}
}




   //int Matrix_1[3][4]={1,6,7,9,2,4,8,5,3,1,9,4};
 //  for(){}
//   cout<<Matrix_1[1][1];
