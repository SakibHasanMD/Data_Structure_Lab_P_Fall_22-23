#include <iostream>

using namespace std;

//Creating Student Class
class Student {

    public:
    string name;
    int id;
    double cgpa;
    int credit;
    };
//Main Function
int main()
{
int i,j,found,n=5,tmp2,tmp3;
string tmp4;
double search_cgpa,tmp1;

//Created 5 Student Objects
Student object1;
Student object2;
Student object3;
Student object4;
Student object5;

//Stored 5 objects to student array
Student student[5]={object1,object2,object3,object4,object5};

//Take input of 5 students info
    for(i=0;i<5;i++)
    {
        cout<<"Student Name:";
        cin>>student[i].name;
        cout<<"Student ID:";
        cin>>student[i].id;
        cout<<"Student CGPA:";
        cin>>student[i].cgpa;
        cout<<"Student CREDIT:";
        cin>>student[i].credit;
        cout<<endl;
        cout<<endl;
    }
//UnSorted Output
cout<<"UNSORTED OUTPUT:"<<endl;
cout<<endl;
for(i=0;i<5;i++){
        cout<<"Student NAME:";
        cout<<student[i].name<<endl;
        cout<<"Student ID:";
        cout<<student[i].id<<endl;
        cout<<"Student CGPA:";
        cout<<student[i].cgpa<<endl;
        cout<<"Student CREDIT:";
        cout<<student[i].credit<<endl;
        cout<<endl;
        cout<<endl;

}

//BubbleSort CGPA wise
   for(i=0;i<(n-1);i++)
   {
        for(j=0;j<(n-1-i);j++)
        {
            if(student[j].cgpa>student[j+1].cgpa)
            {   //CGPA
                tmp1=student[j].cgpa;
                student[j].cgpa=student[j+1].cgpa;
                student[j+1].cgpa=tmp1;
                //CREDIT
                tmp3=student[j].credit;
                student[j].credit=student[j+1].credit;
                student[j+1].credit=tmp3;
                //ID
                tmp2=student[j].id;
                student[j].id=student[j+1].id;
                student[j+1].id=tmp2;
                //NAME
                tmp4=student[j].name;
                student[j].name=student[j+1].name;
                student[j+1].name=tmp4;
            }
        }
   }
   //Sorted Output
cout<<"SORTED OUTPUT BY CGPA:"<<endl;
cout<<endl;
for(i=0;i<5;i++){
        cout<<"Student NAME:";
        cout<<student[i].name<<endl;
        cout<<"Student ID:";
        cout<<student[i].id<<endl;
        cout<<"Student CGPA:";
        cout<<student[i].cgpa<<endl;
        cout<<"Student CREDIT:";
        cout<<student[i].credit<<endl;
        cout<<endl;
        cout<<endl;

}

//SelectionSort Credit Wise






//Search based on CGPA
cout<<"ENTER CGPA THAT YOU WANT TO SEARCH: ";
cin>>search_cgpa;
for(i=0;i<5;i++){
         if(student[i].cgpa==search_cgpa)
    {  found=1;
        cout<<"  "<<search_cgpa<<"  "<<"Found"<<endl;
        cout<<"Student Name:"<<student[i].name<<endl;
        cout<<"Student ID:"<<student[i].id<<endl;
        cout<<"Student CGPA:"<<student[i].cgpa<<endl;
        cout<<"Student CREDIT:"<<student[i].credit<<endl;
}
        else{
       found=0; }
        cout<<endl;


    }
    if (found==0){
              cout<<"  "<<search_cgpa<<"  "<<"Not Found"<<endl;
    }
}
