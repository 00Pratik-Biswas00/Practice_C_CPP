#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// 1. Linear Search--

// int linearSearch( int n , int arr[] , int key){
//     for(int i=0;i<n;i++){
//     if(arr[i]==key){
//     return i;
//     }
//     }
//     return -1;
// }
// 
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//     cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     cout<<linearSearch(n,arr,key)<<endl;
// }

// 2. Binary Search--

// int binarySearch(int n, int arr[] ,  int key){
//     int  s=0;
//     int  e=n;
//     while(s<=e){
//         int mid=((s+e)/2);
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             e=mid-1;
//         } 
//         else if(arr[mid]<key){
//             s=mid+1;
//         }
//     }
//     return -1;
// }
// 
// int main(){
//     int n;
//     cin>> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int key;
//     cin>>key;
//     cout<<binarySearch(n,arr,key)<<endl;
// }