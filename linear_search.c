 #include <stdio.h>
int main()
{
    int n, x, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter roll numbers: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter roll number to search: ");
    scanf("%d", &x);
    for(i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            printf("Found at index %d", i);
            return 0;
        }
    }
    printf("Not Found");
    return 0;
}