 #include<stdio.h>
#include <windows.h>

void makeheap(int a[], int n)
{
 int i, temp, k, j;
 for (i = 1; i<n; i++)

 {
  temp = a[i];
  k = (i - 1) / 2;
  j = i;
  while (j>0 && a[k] < temp)
  {
   a[j] = a[k];
   j = k;
   k = (j - 1) / 2;
  }
  a[j] = temp;
 }
}
void disp(int a[], int n)
{
 int i;
 for (i = 0; i < n; i++)
 {
  printf("%d,", a[i]);
 }
 printf("\b");
 printf(" ");
}
void sortheap(int a[], int n)
{
 int temp, i, j;
 for (i = n - 1; i >= 1; i--)
 {
  temp = a[i];
  a[i] = a[0];
  a[0] = temp;
  makeheap(a, i);
  printf("\n\t-->");
  disp(a, n);
 }
}
void main()

{
 int a[100], n, i;
 system("cls");
 printf("\n\tJumlah Element : ");
 scanf("%d", &n);
  system("cls");
 printf("\n\tElemen Array \n");
 for (i = 0; i < n; i++)
 {
  printf("\tElement %d := ", i + 1);
  scanf("%d", &a[i]);
 }
 makeheap(a, n);
 printf("\n\tHeap Created := ");
 disp(a, n);
 sortheap(a, n);
 printf("\n\n\tSorted Elements := ");
 disp(a, n);
 getch();
}
