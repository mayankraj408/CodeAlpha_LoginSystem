#include<iostream>
using namespace std;
int main(){
  string username,password;
 string inputUser,inputPass;
cout<<"===== LOGIN SYSTEM ====="<<endl;
cout<<"Create Username:";
cin>>username;

cout<<"Create Password:";
cin>>password;

cout<<"\nRegistration Successfull!"<<endl;

cout<<"\n===== LOGIN ====="<<endl;

cout<<"Enter Username:";
cin>>inputUser;

cout<<"Enter Password:";
cin>>inputPass;

if(inputUser==username && inputPass==password){
cout<<"\nLogin Successfull!"<<endl;
cout<<"Welcome,"<<username<<"!"<<endl;
}else{
cout<<"\nInvalid Username or Password!"<<endl;
}
return 0;
}
