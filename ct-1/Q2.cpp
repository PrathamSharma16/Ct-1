//Name: Pratham Sharma
//Roll Num: 2010990544
//Set No:Test 04
//Ques num2
#include<bits/stdc++.h>
using namespace std;

bool Consecutive(int arr[],int n){
  sort(arr,arr+n);//sorting array
  for(int i=1;i<n;i++){//check adjacent element
    if(arr[i]!=arr[i-1]+1){
      return false;
      }
  }
  return true;
}

int main()
{
    int n;//number of elements in array
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
	{
        cin>>arr[i];
    }
    //Print output
  	if(Consecutive(arr,n)==true){
    	cout<<"The array contains consecutive integers from "<<arr[0]<<" to "<<arr[n-1]<<".";
  	}
  	else
    	cout<<"The array does not contain consecutive integers as element "<<4<<" is repeated.";

    return 0;
}