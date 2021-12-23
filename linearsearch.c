#include<stdio.h>
int main()
{
    int a[20],i,n,search;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the element of array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
printf("Enter the element for searching:\n");
scanf("%d",&search);
for(i=0;i<n;i++){
        if(a[i]==search)
        {
            printf("%d Elment found at %d location",search,i);
            break;
        }
else{
    printf("%d Elment found",search);
}
    }
return 0;
}
