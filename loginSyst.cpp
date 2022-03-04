#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
using namespace std;
bool loggedIn(){
    string username,password,un,pw;
    cout<<"Enter username : "; cin>>username;
    cout<<"Enter password : "; cin>>password;
    ifstream read;
    read.open(username + ".txt");
    getline(read,un);
    getline(read,pw);
    if(username==un && password==pw){
        read.close();
    return true;
    }
    else{
        read.close();
        return false;
    }

}
// void registerIt(){
  
// }
int main(){

    int choice;
    lable:
    cout<<"Enter any key to continue...";
    getch();
    
    system("cls");
    cout<<"1: Register\n2: Login\n3: Exit\nYour choice: "; cin>>choice;
    if(choice==1){
        // registerIt();
         string username,password;
    cout<<"Enter Username: "; cin>>username;
    cout<<"Enter Password: "; cin>>password;
    ofstream file;
    file.open(username + ".txt");
    if(!file.eof()){
     cout<<"Username Already exist\n";
     goto lable;
    }
    file <<  username <<"\n"<< password;
    file.close(); 
        cout<<"Successfully Registered\n";
        system("pause");
        system("cls");
        goto lable;
    }
    else if(choice==2){
        if(loggedIn()==false){
            cout<<"Incorrect Username or password\n";
            system("pause");
            system("cls");
            // return 0;
       goto lable;
        }
        else{
            cout<<"SuccessFully Logged In\n ";
            system("pause");
            return 1;
        }
    }
    else if(choice==3)
    return 0;
    else{
        cout<<"Please enter valid choice \n";
        system("pause");
        system("cls");
        goto lable;
    }
    return 0;
}
