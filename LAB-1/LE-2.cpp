#include<iostream>

using namespace std;
int countG = 0;


void bubblesort(int a[], int n){
    for(int i=0;i<n-1;i++){
        countG++;
        for(int j=0;j<n-i-1;j++){
            countG++;
            countG++;
            if(a[j]>a[j+1]){
                countG++;
                int temp = a[j];
                countG++;
                a[j] = a[j+1];
                countG++;
                a[j+1] = temp;
            }
            countG++;
        }
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
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"countG = "<<countG;
    return 0;
}






