/**
* @file atm.h
*/

#ifndef __ATM_H__
#define __ATM_H__

/**
* Compare the entered name with names stored in array of string
* @param[in] NAME user name
* @return True(1) if entered name is found in array of strings else return False(0)
* @note If the entered name is incorrect then user is asked to enter the name again and return 0
*/
int name(char NAME[10]);

/**
* Compare the entered PIN with PINs stored in array of string for corresponding user name
* @param[in] PIN security pin
* @return True(1) if entered PIN is found in array of strings for the corresponding user name else return False(0)
* @note If the entered PIN is incorrect then user is asked to enter the PIN again and return 0
*/
int pin(char PIN[10]);

/**
* Compare the entered OTP with OTPs stored in array of string for corresponding user name
* @param[in] OTP One Time Password sent to user registered mobile number
* @return True(1) if entered OTP is found in array of strings for the corresponding user name else return False(0)
* @note If the entered OTP is incorrect then user is asked to enter the OTP again and return 0
*/
int otp(char OTP[10]);

/**
* User is asked to select the option 1 for Balance Enquiry, 2 for Cash Withdraw, 3 for Cash Deposit and 4 for Quit
* @param[in] option user select the option to do transaction
* @return True(1) if the selected option is 1 or 2 or 3 or 4 else return False(0)
* @note If user select option other than 1 or 2 or 3 or 4, the user is asked to select the option again and return 0
*/
int selectoption(int option);

/**
* Compare the entered account type with account types stored in array of string for corresponding user name
* @param[in] TYPE account type "savings" or "current"
* @return True(1) if entered account type is found in array of strings for the corresponding user name else return False(0)
* @note If the entered account type is incorrect then user is asked to enter the account type again and return 0
*/
int accounttype(char TYPE[10]);

/**
* Check the withdrawal amount is multiples of 100 and is greater than initial balance - 1000 as the minimum balance need to be maintained is 1000
* @param[in] withdraw withdrawal amount
* @return True(1) if entered amount is multiples of 100 and is greater than initial balance - 1000 else return False(0)
* @note If the entered amount is not multiples of 100 then display the message "Please Enter The Amount In Multiples Of 100" and return 0 and if the withdrawal amount is lesser than initial balance - 1000 then display the message "Insufficient Balance" and return 0
*/
int withdraw(unsigned long withdraw);

/**
* Check the deposit amount is multiples of 100
* @param[in] deposit amount to be deposited
* @return True(1) if entered amount is multiples of 100 else return False(0)
* @note If the entered amount is not multiples of 100 then display the message "Please Enter The Amount In Multiples Of 100" and return 0
*/
int deposit(unsigned long deposit);

/**
* Check whether the user wants another transaction or not
* @param[in] transaction accepts the char 'y' or 'Y' for another transaction and 'n' or 'N' to cancel the transaction
* @return True(1) if user enter 'y' or 'Y' user is asked to select the option for another transaction and if user enter 'n' or 'N' then cancel the transaction else return False(0)
* @note If the user enter any other character then display the message "Only Enter 'y' or 'Y' For Another Transaction And 'n' or 'N' To Cancel The Last Transaction" and return 0
*/
int anothertransaction(char transaction);



#endif /* #ifndef __ATM_H__ */
