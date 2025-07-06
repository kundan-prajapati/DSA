#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int array[10]={2,5,3,0,11,5,7,3,8,1};
    int num;
    cout << "enter number" << endl;
    cin >> num;
    int start=0;
    int end=sizeof(array)/sizeof(array[0])-1;
    int flag=0;
    sort(array,array+(end+2));
    while(start<=end)
    {
        int mid=start + (end-start)/2;
        // mid = (start+end)/2;
        if(array[mid] == num){
            flag=1;
            break;
        }
        else if(array[mid] > num){
            end=mid - 1;
        }
        else{
            start=mid+1;
        }
    }
   if(flag==1){
        cout << "number is found" << endl;
   }
   else{
        cout << "number is not found" << endl;
   }
    return 0;
}