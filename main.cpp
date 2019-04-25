#include <iostream>


int arrSum(int * arr , int size)
{
    int sum = 0;
    for(int i = 0 ; i < size ; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int arrMult(int*arr , int size)
{
    int mult = 1;
    for(int i = 0 ; i < size ; i++)
    {
        mult*=arr[i];
    }
    return mult;
}
int main() {
    int size;
    int(*fptr)(int*,int);
    std::cout << "Enter the size of array: ";
    std::cin >> size;
    int *arr = new int[size];
    std::cout << std::endl;
    std::cout <<"Enter the array values: ";
    for(int i = 0 ; i < size ; i++)
    {
        std::cin >> arr[i];
    }
    std::cout << std::endl;
    std::cout << "Set working mode  (1 - sum of Array ; 2 - mult of Array):";
    int workmode;
    std::cin >> workmode;
    switch(workmode)
    {
        case 1 : fptr = arrSum;break;
        case 2 : fptr = arrMult;break;
    }
    std::cout << std::endl;
    std::cout << fptr(arr,size);
    return 0;
}