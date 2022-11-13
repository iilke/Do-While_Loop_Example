//Ilke D.  13/11/2022

#include <stdio.h>
int main()
{
	float weight=0;  //as weight given by the user
	float l_count=0; //as lightweight athlete count
	float m_count=0; //as middleweight athlete count
	float h_count=0; //as heavyweight athlete count
	float avg_weight=0; //as average weight
	float sum=0; //as total weight
	float total_ath = 0; //as total number of athletes
	do
	{
		printf("Enter weight of the athlete:");
		scanf("%f",&weight);
		
		if (weight<0)
		     printf("Incorrect input, enter the weight again!");
       
	   
	    else if (weight>0 && weight<50)
        {
     	 	 l_count++;
     	 	 sum = sum + weight;
        }
	    
		
		else if (50<=weight &&  weight<=70)
	    {
	    	 m_count++;
	    	 sum = sum + weight;
   	    }
   	  
		 
	    else if (weight>70)
   	    {
		     h_count++;
   	    	 sum = sum + weight;
   	    }
	      
	}
	while(weight != 0);
	printf("---------------------------------\n");
	total_ath = l_count + m_count + h_count;
	avg_weight = sum/total_ath;
	printf ("Average weight: %.2f\n", avg_weight);
	printf ("Number of Lightweight athletes: %.0f\n",l_count);
	printf("Number of Middleweight athletes: %.0f\n",m_count);
	printf("Number of Heavyweight athletes: %.0f\n",h_count);
	
	return 0;
}
