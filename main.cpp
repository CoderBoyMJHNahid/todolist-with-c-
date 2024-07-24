#include<iostream>
#include<string>
#include"functionality.h"
using namespace std;


int main(){
    int pwd;
    int PWD = 1234;
    system("cls");
    cout<< "Welcome to the TODO list Project But you have to enter your password.. please enter your password" << endl;

    cin >> pwd;

    if (pwd == PWD)
    {
         homepage();
    }else{
        cout << "Sorry. You have entered wrong password. Please re-enter your password";
        getchar();
    }
    

    return 0;
}