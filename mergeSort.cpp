#include <iostream>
using namespace std;

int arr[20], B[20]; //Array utama dan array bantu
int n; //jumlah data yang akan dimasukkan

void input ()
{
    
}

void mergeSort(int low, int high){

    if (low <= high) //step 1
    {
        return; //step 1a
    }

    int mid = (low + high) / 2; //step 2

    mergeSort(low, mid); //step 3a
    mergeSort(mid+1, high); //step 3b
}

void output ()
{

}

int main()
{

}