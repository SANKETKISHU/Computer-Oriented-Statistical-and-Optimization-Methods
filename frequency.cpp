#include <stdio.h>
int main(){
    int a[40],b[7],c,d,e,f;
    printf("Enter the total number of elements(max 40):- ");
    scanf("%d",&c);
    printf("Enter the elements:- \n");
    for (d=0;d<c;d++){
        scanf("%d",&a[d]);
    }
    for(d=0;d<7;d++){
        b[d]=0;
    }
    for (d=0;d<c;d++){
        if (a[d]>=20 && a[d]<=29){
            b[0]=b[0]+1;
        }
        else if (a[d]>=30 && a[d]<=39){
            b[1]=b[1]+1;
        }
        else if (a[d]>=40 && a[d]<=49){
            b[2]=b[2]+1;
        }
        else if (a[d]>=50 && a[d]<=59){
            b[3]=b[3]+1;
        }
        else if (a[d]>=60 && a[d]<=69){
            b[4]=b[4]+1;
        }
        else if (a[d]>=70 && a[d]<=79){
            b[5]=b[5]+1;
        }
        else if (a[d]>=80 && a[d]<=89){
            b[6]=b[6]+1;
        }
        else{
            printf("%d is not a valid element.\n",a[d]);
        }
    }
    printf("Classes     Frequency\n");
    printf("20-29       %d\n",b[0]);
    printf("30-39       %d\n",b[1]);
    printf("40-49       %d\n",b[2]);
    printf("50-59       %d\n",b[3]);
    printf("60-69       %d\n",b[4]);
    printf("70-79       %d\n",b[5]);
    printf("80-89       %d\n",b[6]);
    return 0;
}
