#include<iostream>
using namespace std;

int binarysearch(int arr[] , int size , int key){
    int start=0;
    int end = size-1;

    int mid = (start + (end-start)/2);

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid]<key){
            start = mid +1;
        }
        if(arr[mid]>key){
            end = mid - 1;
        }
        mid = (start + (end-start)/2);
    }
    return  -1;


}

int main(){
    int even[8] = {1, 2, 3,4 ,5 , 6,7 ,8 };
    int odd[7] = { 3 , 5, 7, 13 , 35, 67 , 88};

     int index = binarysearch(even , 8 , 1);
     cout<<"index of 1 is"<<index<<endl;

     int index2 = binarysearch(odd , 7, 3);
     cout<<"index of 3 "<<index2 <<endl;



    return 0;
}