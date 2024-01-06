/*Federal tax margins and marginal rates for a married couple filing jointly based on the
Adjusted Gross Income (income after deductions).
In addition, one of the tax credits (which offsets tax liability) tax payers can take is the
child tax credit. The rules are as follows:
• If the income is $110,000 or more, they cannot claim a credit (the credit is $0)
• Each child is worth a $1,000 credit, however at most $3,000 can be claimed
• The credit is not refundable: if the credit results in a negative tax liability, the tax
liability is simply $0*/


#include<stdio.h>
#include<stdlib.h>
int main (){
	//input from the users
	
	
	int income;
	char name [12];
	double credit;
	int number_of_children;
	double total_income_tax;
    char gender [7]	;
       	
	
	//output
	double income_tax;
	//users input prompt
	printf("Hello our dear customer enter your full name!?\n ");
	scanf("%s",&name);
	printf("what is your gender!?\n ");
	scanf("%s",&gender);
	printf("Hello  %s \n",name);
	printf(" please can you enter your total income? \n",income);
	scanf("%d",&income);
	printf("welcome sir ,how many children do you have please!? ");
	scanf("%d",&number_of_children);
	
	//analysis of the gender
	
	
	
	//analysis of the tax of the user
	
if(income_tax < 0 || number_of_children < 0) {
    printf("Invalid inputs\a");
	exit(0);
	}
    
	//analysing credits for about each of the family according number of children
	
	if(income >= 1100000)
	         credit = 0;
	         else if(number_of_children <=3) 
	            credit=number_of_children*(1000);
	            else 
	        credit=3000;
	
//analysing income tax charged



		if(income >=0 && income <= 1850)
	       income_tax=income*(10/100);
	       
	       
	else if(income >=1850 && income <= 73800)
	        income_tax=(1815+(income-1850*(15.0/100)));
	        
	else if(income >= 73800 && income <= 148850 )
      	    income_tax=(10162.50+(income-73800*(25.0/100)));
      	    
	else if(income >=148850 && income <= 225850)
        	income_tax=(28925+(income-148850*(28.0/100)));
        	
	else if(income >=1850 && income <= 73800)
	        income_tax=(50765+(income-225850*(33.0/100)));
	        
	else if(income >=1850 && income <= 73800)
	         income_tax=(109587.50+(income-405100*(35.0/100)));
	         
	else if(income >= 73800)
	        income_tax=(127962.50+((income-457600)*(39.6/100)));
	        
//analysing the total tax charged after credit confirmation


	        
	        if(credit  > income_tax)
        total_income_tax=0;
else
    total_income_tax=income_tax-credit;

//changing rates in dollars ,euros and pounds

 double income_in_pound=total_income_tax*20;
double income_tax_in_euros=total_income_tax/155.92;
double income_tax_in_dollars=total_income_tax/147.07;



//the finsl output from the user	              
	           	printf("The credit for you is3. %lf\n",credit);
                printf("The income tax for you is3. %lf\n",income_tax);
        		printf("The total income tax to be charged is 3.%lf\n",total_income_tax);
        		printf("HELLO %s  WELCOME BACK AGAIN TO OUR COMPANY WE VALUE YOUR INTEREST\n",name);
        		printf("\n");
        		printf("THE CHANGING RATES OF YOUR INCOME TAX IS AS FOLLOWS.....\n");
        		printf("\n");
        		
// output of changing rate
	printf("Your income tax in pounds is 3.  %lf  pounds \n",income_in_pound);
		printf("Your income tax in euros bond  is  3. %lf   euros\n",income_tax_in_euros);
			printf("Your income tax in Dollars is  3. %lf   dollars\n",income_tax_in_dollars);       		
        			  
}
 
