#include <iostream>
using namespace std;

int main()
{ int r=3,c=4,i,j, Matrix_1[r][c];
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
            cout<<"Enter Matrix Element "<<(r*i)+j<<":";
        cin>>Matrix_1[i][j];
    }
    cout<<endl;
}
//Input Array
cout<<"Input Matrix:"<<endl;
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        cout<<Matrix_1[i][j]<<" ";
}
cout<<endl;
}
cout<<endl;
//Inverse
cout<<"Inverse Matrix:"<<endl;
for (j=0;j<c;j++){
for(i=0;i<r;i++){
        cout<<Matrix_1[i][j]<<" ";

}
cout<<endl;
}
}


//print
//for(i=0;i<r;i++){
    //for(j=0;j<c;j++){
  //      cout<<Matrix_1[i][j]<<" ";
//}
//cout<<endl;
//}

   //int Matrix_1[3][4]={1,6,7,9,2,4,8,5,3,1,9,4};
 //  for(){}
//   cout<<Matrix_1[1][1];
