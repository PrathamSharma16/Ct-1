//Name: Pratham Sharma
//Roll Num: 2010990544
//Set No:Test 04
//Ques num1
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;// number of element in array
    cin>>n;
    int min=-1;// Initializing index of first repeating element of arr
    int arr[n];
    for(int i=0;i<n;i++)
	{
        cin>>arr[i];
    }
    
    set<int> newset;//created hashset
    
    for(int i=n-1;i>=0;i--)//traverse array from right to left
	{
        if(newset.find(arr[i])!=newset.end()){
        min=i;
    }
    else
	{
        newset.insert(arr[i]);
    }
    }
    //Print result
    if(min!=-1)
        cout<<"The minimum index of the repeating element is "<<min;
    else
        cout<<"Invalid Input";
    
    return 0;
} 