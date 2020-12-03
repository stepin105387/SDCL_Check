#include "atm.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pos;
unsigned long amount=5000;

int name(char NAME[10]){

    char name[5][20]={"xyz","abc","zyx","pqr","efg"};

    //while(strcmp(NAME, name[index]))
    //{
        //printf("Enter The Name ");
        //scanf("%s", NAME);

        for(int variable2=0; variable2<5; variable2++){
        if(!(strcmp(NAME, name[variable2]))){
            pos=variable2;
            printf("Entered Name %s Is Correct\t Please Enter The PIN\n",NAME);
            return 1;
            break;
        }
        }

        if (strcmp(NAME, name[pos])){
            printf("Entered Name %s Is Incorrect    Please Enter The Name Again\n",NAME);
            return 0;
        }

    //}
}


int pin(char PIN[10]){

    char pin[5][10]={"1234","2345","3456","4567","5678"};

    //while(strcmp(PIN, pin[index]))
    //{
		//printf("Enter Your PIN Number: ");
		//scanf("%s", PIN);

		if (!(strcmp(PIN, pin[pos]))){
            printf("\nEntered Pin %s Is Valid\t Please Enter The OTP", PIN);
            return 1;
		}
		else{
            printf("\nEntered Pin %s Is Invalid\t Please Enter The PIN Again\n", PIN);
            return 0;
		}
    //}
}

int otp(char OTP[10]){

    char otp[5][10]={"12345","23456","34567","45567","56789"};

    //while(strcmp(OTP,otp[index]))
    //{
		//printf("Enter OTP: ");
		//scanf("%s", OTP);

		if (!(strcmp(OTP,otp[pos]))){
            printf("\nEntered OTP %s Is Valid\t Select The Option 1. Balance 2. Withdraw 3. Deposit 4. Quit", OTP);
            return 1;
		}
		else{
           printf("\nEntered OTP %s Is Invalid\t Enter The OTP Again\n", OTP);
           return 0;
		}
    //}
}

int selectoption(int option){
    if(option == 1 || option == 2 || option == 3 || option == 4){
        printf("\nSelected Option %d Is Valid\t Please Enter The Account Type", option);
        return 1;
    }
    else{
        printf("\nSelected Option %d Is Invalid\t Please Select The Option Again\n", option);
        return 0;
    }
}

int accounttype(char TYPE[10]){
    char type[5][10]={"savings","savings","current","current","savings"};

    if (!(strcmp(TYPE, type[pos]))){
            printf("\nEntered Account Type %s Is Valid", TYPE);
            return 1;
		}
		else{
           printf("\nEntered Account Type %s Is Invalid\t Please Enter The Account Type Again\n", TYPE);
           return 0;
		}
}

int withdraw(unsigned long withdraw){
    // printf("Enter The Amount To Withdraw: ");
    // scanf("%lu", &withdraw);
    if (withdraw % 100 != 0)
    {
        printf("\nPlease Enter The Amount In Multiples Of 100");
        return 0;
    }
    else if (withdraw >(amount - 1000))
    {
        printf("\nInsufficient Balance\n");
        return 0;
    }
    else
    {
        amount = amount - withdraw;
        printf("\nPlease Collect Cash\t Your Current Balance Is %lu", amount);
        // printf("\nYour Current Balance Is %lu", amount);
        return 1;
    }
}

int deposit(unsigned long deposit){
    // printf("\nEnter The Amount To Deposit: ");
    // scanf("%lu", &deposit);

    if(deposit % 100 != 0){
        printf("\nPlease Enter The Amount In Multiple Of 100\n");
        return 0;
    }
    else{
        amount = amount + deposit;
        printf("\nYour Current Balance Is %lu", amount);
        return 1;
    }
}

int anothertransaction(char transaction){
    if(transaction == 'n'|| transaction == 'N'){
        printf("\nThank You For Using Our ATM Service");
        return 1;
    }
    else if(transaction == 'y'|| transaction == 'Y'){
        printf("\nSelect The Option");
        return 1;
    }
    else{
        printf("\nOnly Enter 'y' or 'Y' For Another Transaction And 'n' or 'N' To Cancel The Last Transaction\n");
        return 0;
    }

}
