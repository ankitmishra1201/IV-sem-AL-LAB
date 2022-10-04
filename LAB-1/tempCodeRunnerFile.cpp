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