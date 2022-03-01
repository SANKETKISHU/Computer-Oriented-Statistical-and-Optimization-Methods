#include<stdio.h>
#include<math.h>
int main()
{
    int i, op, size,t,s,j,c;
    float sum = 0, Arithmetic_Mean, Harmonic_Mean, Geometric_Mean,numbers[100],median,mode,max=0;
    printf("\n How many numbers to accept:- ");
    scanf(" %d",&size);
    
    for(i=0;i<size;i++)
    {
      printf("\n Enter %d th number: ",i+1);
      scanf(" %f",&numbers[i]);
      s=s+1;
    }
    
    do{
          printf("\n\n 1. Arihmetic Mean");
          printf("\n 2. Harmonic Mean");
          printf("\n 3. Geometric Mean");
          printf("\n 4. Median");
          printf("\n 5. Mode \n");
 
          printf("\n Which operation do you want to perform:- ");
          scanf(" %d",&op);
 
    switch(op)
    {
        case 1:
            for(i=0;i<size;i++)
            {
              sum += numbers[i];
            }
            
            Arithmetic_Mean = sum/size;
            
            printf("\n\n The Arithmetic Mean is   : %f", Arithmetic_Mean);
            break;

        case 2:
            for(i=0;i<size;i++)
            {
            sum += (1/numbers[i]);
            }
            
            Harmonic_Mean = size/sum;

            printf("\n\n The Harmonic Mean is   : %f", Harmonic_Mean);
            break;

        case 3:
            sum = 1;
            for(i=0;i<size;i++)
            {
              
            sum *= numbers[i];
            }
            
            Geometric_Mean = pow(sum,(float)1/size);
            
            printf("\n\n The Geometric Mean is   : %f", Geometric_Mean);
            break;
        case 4:
			for(i=0;i<size-1;i++)
			{
			for(j=0; j<size-i-1; j++)                                                       
			{                                                                            
			 if(numbers[j]<numbers[j+1])                                                             
			{                                                                           
			int temp = numbers[j];                                                               
			numbers[j] = numbers[j+1];                                                             
			numbers[j+1] = temp;                                                             
			}                                                                           
			}                                                                            
			} 
			if( size%2 == 0)
			{
				median = (numbers[(size/2)-1]+numbers[(size/2)])/2.0; 
			}
			else
			{
				median = numbers[(size/2)]; 
			}
			printf("\nMedian  %f\n", median);   
			break;                                                               
		case 5:
			for(i=0; i<size; i++)
			{
				t=numbers[i];
				c=0;
				for(j=0; j<size; j++)
				{
					if(t==numbers[j])
						c++;
					if(c > max)
						max=c;
						mode=t;
				}
			}
			printf("MODE = %f",mode);
			break;
		}
	}while(op!=5);    
    
    return 0;
    
}
