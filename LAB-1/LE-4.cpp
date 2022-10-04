#include<iostream>
using namespace std;
int countG = 0;


void selectionsort(int a[], int n){
    for(int i=0;i<n-1;i++){
        countG++;
        int min = i;
        countG++;
        for(int j=i+1;j<n;j++){
            countG++;
            if(a[j]<a[min]){
                countG++;
                min = j;
            }
            countG++;
        }
        countG++;
        int temp = a[i];
        countG++;
        a[i] = a[min];
        countG++;
        a[min] = temp;
        countG++;
    }
    countG++;
}

int main(){
    int arr[10]; 
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array after sorting is:"<<endl;
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"countG = "<<countG;
    return 0;
}

