#include<iostream>
using namespace std;
void bubble_sort(int a[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout<<"After Swapping"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter size of array :"<<endl;
    cin>>size;
    int *a = (int *)malloc(size*sizeof(int));
    int i;
    cout<<"Enter array elements : "<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Before swapping : "<<endl;
    for(i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    bubble_sort(a,size);
}
