// to find pair that equals to a given sum
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int sum;
    cout<<"enter a sum for which you want to find pairs: ";
    cin>>sum;
    for(int j=0;j<5;j++){
        for(int i=0; i<5;i++){
            if(arr[j]+arr[i]==sum){
                cout<<"The pair is: "<<arr[j]<<","<<arr[i]<<endl;
                break;
            }
            else{
                continue;
            }
        }
    }
    
    return 0;
}