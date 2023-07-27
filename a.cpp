 #include<iostream>
 using namespace std;
 int main(){
 int arr[100]={11,2,3,4,5,6,6,7};
 int s;
 cout <<"enter the value of s:"<<endl;
 cin>>s;
 for(int i=0;i<8;i++){
    for(int j=i+1;j<8;j++){
        if (arr[i]+arr[j]==s)
        cout <<arr[i]<<" "<<a[j]<<endl;
    }
 }
 }