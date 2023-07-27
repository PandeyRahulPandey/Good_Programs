/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string>
using namespace std;
class consDemo{
    
    int i,c,d,count=0;
    long long int a;
    char b,e;
    string str1,str2;
    public :
    void sumDemo(int a ,char b){
        if (b=='p')
        cout<<"the square of the number is :"<<a*a<<endl;
        else
        cout<<"the cube of the number is :"<<a*a*a<<endl;
    }
    void sumDemo(int c, int d,char e){
        if (e=='a')
        cout<<"the addition of the two numbers is :"<<c+d<<endl;
        else 
        cout<<"the Ascii value of the passing character is :"<<int (e)<<endl;
    }
    void sumDemo(string str1,string str2){
    int l1,l2;
    l1=str1.length();
    l2=str2.length();
    if (l1==l2){
    for(i=0;i<l1;i++){
        if(str1[i]==str2[i])
        count++;
    }
    if(count==str1)
    cout<<"the strings are equal"<<endl;
    else 
    cout<<"the strings are not equal"<<endl;
}
else 
cout<<"the strings are not equal:"<<endl;
}
};
int main(){
    consDemo cd;
    int v,r,n;
    char h,f;
    string s1,s2;
    cd.sumDemo(int v,char h);
    cd.sumDemo(int r,int n,char f);
    cd.sumDemo(s1,s2);
    return 0;
}