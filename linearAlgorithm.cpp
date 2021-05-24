#include <iostream>

int linear_scan(int a[], int num)
{
    for(int i = 0; i<num;i++)
    {
        if(a[i]==num)
        {
            std::cout<< i;
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[6] = {11,13,4,5,7,88};
    int n;
    std::cin>>n;
    linear_scan(arr,n);


}
