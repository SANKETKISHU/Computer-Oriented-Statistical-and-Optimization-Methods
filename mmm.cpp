#include<stdio.h>
int main()
{
int invalue[]={2,4,5,2,6};
int num_value=5;
float tot=0;
float mean=0;
for(int i=0; i<num_value; i++)
{
tot = tot+invalue[i];
}
mean = tot/num_value;
printf("The mean value is: %.1f",mean);
 //Median calculation   
float median = 0;
float mid=0;
if(num_value%2 == 0)
{
int temp=(num_value/2)-1;
for(int i=0;i<num_value;i++)
{
if(temp==i || (temp+1)==i)
{
mid=mid+invalue[i];
}
}
mid=mid/2;
printf("Median value is: %.1f",mid);
}
else 
{
int temp=(num_value/2);
for(int i=0;i<num_value;i++)
{
if(temp==i)
{
int mid=invalue[i];
printf("Median value: %d",mid);
}
}
}
//Mode calculation
    
int i, j,z, tmp, maxCount, modeValue;
int tally[num_value];
    
     for(i=0;i<num_value;i++)
         {
               for(j=0;j<num_value-i;j++)
               {
                     if(invalue[j]>invalue[j+1])
                     {
                           tmp=invalue[j];
                           invalue[j]=invalue[j+1];
                           invalue[j+1]=tmp;
                     }
               }
         }
    for (i = 0; i < num_value; i++) 
    {
        for(z=i+1;z<num_value;z++)
        {
            
            if(invalue[i]==invalue[z])
            {
                tally[i]++;
            }
        }
    }
    
    
    maxCount = 0;
    modeValue = 0;
    for (i = 1; i <= num_value; i++) 
    {
        if (tally[i] > maxCount) 
        {
            maxCount = tally[i];
            modeValue = invalue[i];
        }
    }
    printf("\nMode value is : %d", modeValue);
return 0;
}
