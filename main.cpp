//---------------------------------------------------
// Purpose: Implement simple spreadsheet program.
// Author:  John Gauch and Kinal Mangukiya
//---------------------------------------------------

#include <cmath>
#include <cstdlib>
#include <iostream>
#include<string>
#include<sstream>
#include <math.h>

using namespace std;

// Global constants
const int ROWS = 26;
const int COLS = 26;

//---------------------------------------------------
// Read read index of the form A4 and calculate
// the corresponding row=3 col=0 values.
//---------------------------------------------------
void read_index(int &row, int &col, char letter, int number)
{
   
   if (letter >= 'A' && letter <= 'Z')
      col = letter - 'A';
   else
      cout << "Error: invalid column\n";

   if (number >= 1 && number <= 26)
      row = number - 1;
   else
      cout << "Error: invalid row\n";
}

//---------------------------------------------------
// Print range of values in spreadsheet array
//---------------------------------------------------
void print(float data[ROWS][COLS], string input)
{
    stringstream ss(input);
      string operation="";
      int r1, c1, r2, c2;
      char letter1=' ';
      char letter2=' ';
      int number1=0;
      int number2=0;
      ss>>operation>>letter1>>number1>>letter2>>number2;
      read_index(r1,c1, letter1, number1);
      read_index(r2,c2, letter2, number2);
   for (int row = r1; row <= r2; row++)
   {
      for (int col = c1; col <= c2; col++)
         cout << data[row][col] << "\t";
      cout << endl;
   }
}

// ADD FUNCTIONS TO DO ARRAY OPERATIONS HERE

void storeData(float data[ROWS][COLS], string input){
    
      stringstream ss(input);
      string operation="";
      float value=0.0;
      int row=0, col=0;
      char letter=' ';
      int number=0;
      ss>>operation>>value>>letter>>number;
      read_index(row,col,letter,number);
      data[row][col] = value;
    
}

void randomData(float data[ROWS][COLS], string input){
     
      stringstream ss(input);
      string operation="";
      int value1=0, value2=0, row1=0, col1=0, row2=0,col2=0;
      char letter1=' ';
      char letter2=' ';
      int number1=0;
      int number2=0;
      ss>>operation>>value1>>value2>>letter1>>number1>>letter2>>number2;
      read_index(row1,col1, letter1, number1);
      read_index(row2,col2, letter2, number2);
      for(int i=row1;i<=row2;i++)
      {
          data[i][col1]=rand() % value2 + value1;
      }
    
}

void findMin(float data[ROWS][COLS], string input){
    stringstream ss(input);
      string operation="";
      int row1=0, col1=0, row2=0, col2=0, row3=0, col3=0;
      char letter1=' ';
      char letter2=' ';
      char letter3=' ';
      int number1=0;
      int number2=0;
      int number3=0;
      ss>>operation>>letter1>>number1>>letter2>>number2>>letter3>>number3;
      read_index(row1,col1, letter1, number1);
      read_index(row2,col2, letter2, number2);
      read_index(row3,col3, letter3, number3);
      float min=999999;
       for(int i=row1;i<=row2;i++)
      {
          if(data[i][col1]<min)
          {
              min = data[i][col1];
          }
      }
      data[row3][col3]=min;
      
}

void findMax(float data[ROWS][COLS], string input){
    
    stringstream ss(input);
      string operation="";
      int row1=0, col1=0, row2=0, col2=0, row3=0, col3=0;
      char letter1=' ';
      char letter2=' ';
      char letter3=' ';
      int number1=0;
      int number2=0;
      int number3=0;
      ss>>operation>>letter1>>number1>>letter2>>number2>>letter3>>number3;
      read_index(row1,col1, letter1, number1);
      read_index(row2,col2, letter2, number2);
      read_index(row3,col3, letter3, number3);
      float max=0;
       for(int i=row1;i<=row2;i++)
      {
          if(data[i][col1]>max)
          {
              max = data[i][col1];
          }
      }
      data[row3][col3]=max;
    
    
}

void findSum(float data[ROWS][COLS], string input){
    
    stringstream ss(input);
      string operation="";
      int row1=0, col1=0, row2=0, col2=0, row3=0, col3=0;
      char letter1=' ';
      char letter2=' ';
      char letter3=' ';
      int number1=0;
      int number2=0;
      int number3=0;
      ss>>operation>>letter1>>number1>>letter2>>number2>>letter3>>number3;
      read_index(row1,col1, letter1, number1);
      read_index(row2,col2, letter2, number2);
      read_index(row3,col3, letter3, number3);
      float sum=0;
       for(int i=row1;i<=row2;i++)
      {
         
            sum+= data[i][col1];
         
      }
      data[row3][col3]=sum;
    
    
}
void findAvg(float data[ROWS][COLS], string input){
    
    stringstream ss(input);
      string operation="";
      int row1=0, col1=0, row2=0, col2=0, row3=0, col3=0;
      char letter1=' ';
      char letter2=' ';
      char letter3=' ';
      int number1=0;
      int number2=0;
      int number3=0;
      ss>>operation>>letter1>>number1>>letter2>>number2>>letter3>>number3;
      read_index(row1,col1, letter1, number1);
      read_index(row2,col2, letter2, number2);
      read_index(row3,col3, letter3, number3);
      float sum=0;
      float num_cells = row2-row1+1;
       for(int i=row1;i<=row2;i++)
      {
         
            sum+= data[i][col1];
         
      }
      data[row3][col3]=(sum/num_cells);
    
    
}
void findVar(float data[ROWS][COLS], string input){
    
    stringstream ss(input);
      string operation="";
      int row1=0, col1=0, row2=0, col2=0, row3=0, col3=0;
      char letter1=' ';
      char letter2=' ';
      char letter3=' ';
      int number1=0;
      int number2=0;
      int number3=0;
      ss>>operation>>letter1>>number1>>letter2>>number2>>letter3>>number3;
      read_index(row1,col1, letter1, number1);
      read_index(row2,col2, letter2, number2);
      read_index(row3,col3, letter3, number3);
      float sum=0;
      float num_cells = row2-row1+1;
      for(int i=row1;i<=row2;i++)
      {
        sum+= data[i][col1];
      }
      float avg=(sum/num_cells);
      
      float sum1=0;
       for(int i=row1;i<=row2;i++)
      {
            sum1+= pow( (data[i][col1]-avg), 2);
      }
      
      data[row3][col3]=(sum1/num_cells);
    
    
}
void findStd(float data[ROWS][COLS], string input){
    
    stringstream ss(input);
      string operation="";
      int row1=0, col1=0, row2=0, col2=0, row3=0, col3=0;
      char letter1=' ';
      char letter2=' ';
      char letter3=' ';
      int number1=0;
      int number2=0;
      int number3=0;
      ss>>operation>>letter1>>number1>>letter2>>number2>>letter3>>number3;
      read_index(row1,col1, letter1, number1);
      read_index(row2,col2, letter2, number2);
      read_index(row3,col3, letter3, number3);
      float sum=0;
      float num_cells = row2-row1+1;
      for(int i=row1;i<=row2;i++)
      {
        sum+= data[i][col1];
      }
      float avg=(sum/num_cells);
      
      float sum1=0;
       for(int i=row1;i<=row2;i++)
      {
            sum1+= pow( abs(data[i][col1]-avg), 2);
      }
      
      data[row3][col3]=sqrt(  (sum1/(num_cells))  );
    
    
}

//---------------------------------------------------
// Main program
//---------------------------------------------------
int main()
{
   // Initialize spreadsheet
   float data[ROWS][COLS];
   for (int row = 0; row < ROWS; row++)
      for (int col = 0; col < COLS; col++)
         data[row][col] = 0;

   cout<<"\nSimple Spreadsheet Calculator - Version 0.1\n";

cout<<"Commands:\n\tSTORE value location\n\tRANDOM low high location1 location2\n\tMIN location1 location2 location3\n\tMAX location1 location2 location3\n\tSUM location1 location2 location3\n\tAVE location1 location2 location3\n\tVAR location1 location2 location3\n\tSTDEV location1 location2 location3\n\tPRINT location1 location2\n\tQUIT\nWhere\n\tvalue is float	\n\tlow is int\n\thigh is int\n\tlocation is between A1 and Z26";
cout<<"\n\n";  
  while(1)
  {
   string input="";
   cout<<"Enter command: ";
   getline(cin, input);
   int pos = input.find(" ",0);
   string copy = input.substr (0,pos);
   int choice;
   if(copy=="STORE")
   {
      storeData(data, input);
   }
   else if (copy=="RANDOM")
   {
       randomData(data, input);
   }
   else if (copy=="MIN")
   {
       findMin(data, input);
   }
   else if (copy=="MAX")
   {
       findMax(data, input);
   }
   else if (copy=="SUM")
   {
       findSum(data, input);
   }
   else if (copy=="AVE")
   {
       findAvg(data, input);
   }
   else if (copy=="VAR")
   {
       findVar(data, input);
   }
   else if (copy=="STDEV")
   {
       findStd(data, input);
   }
   else if (copy=="PRINT")
   {
       print(data, input);
   }
   else if (copy=="QUIT")
   {
       exit(0);
   }
   else
   {
      cout<<"\nIncorrect command parameters, Try again!\n";
   }
   
  }

   return 0;
}

