 #include<iostream>
 using namespace std;
 //completly wrong approach.
 int main(){
 int arr[100]={1, 1, 2 ,2 ,1, 1};
 int s;
 cout <<"enter the value of s:"<<endl;
 cin>>s;
 int size;
 cout <<"enter the size of array:"<<endl;
 cin>>size;
  for (int i=0;i>size;i++)
    {
        for (int j=i+1;j<size;j++)
        {
            if (arr[i]<arr[j])
            {
               int  t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
     for (int i=0;i<size;i++)
    {
        for (int j=i+1;j<size;)
        {
            if (arr[j]==arr[i])
            {
                for (int r=j;r<size;r++)
                {
                    arr[r]=arr[r+1];
                }
                size--;
            }
            
        else 
        j++;
        }
    }
    for (int i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl<<endl;
 for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        for (int k=j+1;k<size;k++){
            
        if (arr[i]+arr[j]+arr[k]==s && k<size)
        {
           cout <<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<endl;
        }
            }
        
    }
 }
 }
 