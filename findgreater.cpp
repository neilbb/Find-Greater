#include <iostream>
using namespace std;

void printgreater(int arr[], int s, int k, int r);


int main(){

int size;

cin >> size;

int *arr = new int[size];

for (int i=0; i<size; ++i){
    cin >> arr[i];
  }

int k;

cin >> k; // read in key

printgreater(arr, size, k, 0);

}



void printgreater(int arr[], int s, int k , int r){

  if (r >=s){
    return;

 }if (arr[r] < k){
    return;

 }
  cout << arr[r] << endl; // print node
  printgreater(arr, s, k, 2*r+1); // left subheap
  printgreater(arr, s, k, 2*r+2); // right subheap
}
