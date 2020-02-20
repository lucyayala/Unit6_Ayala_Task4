//Unit 6 Assignment
//Date: 2-17- 2020 IDE: Repl. it tool 


#include <iostream>
#include "accounts.h"
#include <fstream>
#include <algorithm>
using namespace std;
//Prototypes
void printArray (int[], int size);
void sortArraySASC(int [], int size);
int main() 
{
  //Displays results at Results.txt file
ofstream myfile;
myfile.open ( "Results.txt");

myfile << "Sort ASC Time \n" << "Start: " <<cpuTime() << endl;
sortArraySASC(accountBalances, maxAccounts);//Call's function 
myfile <<  "End: " << cpuTime () << "\n" << endl;
 return 0;
}

//********************************************************************
//Function Definition 
void sortArraySASC(int array [], int size)
{
sort(accountBalances, accountBalances + maxAccounts);
  for(size_t i = 0; i!=maxAccounts; ++i)
   {}
  printArray (accountBalances, maxAccounts);//Displays results

}
void printArray (int arrayVals [], int size) //Displays function 
{
  cout << "\nPrinted Values in Array: " << endl;
  for (int i = 0; i< size ; i ++)
  {
  cout<< arrayVals[i] << ",";
  }
  cout << "\n" << endl;
}
