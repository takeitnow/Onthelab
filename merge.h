#include <stdio.h>

void Merge(int *A, int first, int last)
{
int middle, start, final, j;
int *mas=new int[100];
{
middle=(first+last)/2; //делим массив
start=first; //начало левой части
final=middle+1; //начало правой части
for(j=first; j<=last; j++) //от начала до конца
if ((start<=middle) && ((final>last) || (A[start]<A[final])))
{
mas[j]=A[start];
start++;
}
else
{
mas[j]=A[final];
final++;
}
//возвращение результата в список
for (j=first; j<=last; j++) A[j]=mas[j];
}
delete[]mas;
};
//рекурсивная процедура сортировки
void MergeSort(int *A, int first, int last)
{
{
if (first<last)
{
MergeSort(A, first, (first+last)/2); //сортируем левую часть
MergeSort(A, (first+last)/2+1, last); //сортируем правую часть
Merge(A, first, last); //сливаем две части
}
}
};