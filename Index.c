void main()
{
int a[100],n,i;
clrscr();
printf("Enter the number of element in array:");
scanf("%d",&n);
printf("Enter any %d number:",n);

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("\nElement with their index:");
printf("%d %d",a[i],i);
}
getch();
}
