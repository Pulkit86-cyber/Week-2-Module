#include <stdio.h>
int main()
{
    int n, target;
    printf("Enter number of products: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter sorted product IDs: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter target product ID: ");
    scanf("%d", &target);
    int low = 0;
    int high = n - 1;
    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == target)
        {
            printf("Product Available");
            return 0;
        }
        else if(arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    printf("Product Not Available");
    return 0;
}