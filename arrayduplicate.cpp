#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    for(int i = 0; i<arr.length; i++){
    cout<<arr.A[i]<<" ";
}
cout<<endl;
}

void duplicate(struct Array arr){
cout<<"Duplicate elements are : "<<endl;
    for(int i = 0; i < arr.length - 1; i++){
        int count = 0;
        for(int j = i ; j < arr.length; j++){
            if(arr.A[i] == arr.A[j]){
                count++;
            }
            if (count > 1){
                cout<<arr.A[j]<<endl;
                break;
            }
        }
    }
}

int main()
{
struct Array a1 = {{1,2,3,4,5,5,7,8,1,2}, 10, 10};
cout<<"Array -> ";
Display(a1);
duplicate(a1);
 return 0;
}