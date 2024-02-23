 #include<stdio.h>
void print(int *a,int size){
    for(int i=0;i<size;i++){
    printf("%d ",a[i]);
    }
    printf("\n");
}
void bubbleSort(int a[],int size){
    int temp,isSorted=0;
    for (int i = 0; i < size-1; i++)
    {
        printf("Pass %d\n",i+1);
        isSorted=1;
        for (int  j = 0; j < size-1-i; j++)
        {
            if(a[j]>a[j+1]){
                 temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                isSorted=0;
            }
        }
        if(isSorted==1){
            return;
        }
        
    }
    
}
int main()
{
int a[7]={1,2,3,4,6,7,8};
print(a,7);
bubbleSort(a,7);
print(a,7);
return 0;
}