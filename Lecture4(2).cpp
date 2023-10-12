#include<iostream>
using namespace std;
int main(){
  // if else statements
 /* int marks;
  cout<<"Student, please enter your marks to calculate the grade: ";
  cin>>marks;
  if(marks>90){ 
  cout<<"A";
  }
  else if(marks>80){ 
  cout<<"B";
  }
  else if(marks<80 && marks>70){ 
  cout<<"C";
  }
  if(marks<70){ 
  cout<<"Pass";
  } */
  // Switch case
  int a;
  cout<<"Enter a integer: ";
  cin>>a;
  switch(a){
    case 1:
    cout<<"The value is One"<<endl;
    break;
    case 2:
    cout<<"The value is Two"<<endl;
    break;
    default:
    cout<<"Default is always be printed!";
     break;
  }
}
