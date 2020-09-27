#include <iostream>
using namespace std;
// Function prototypes 
int countPositiveNegative(int a[], int size, int &numNegs, int &numPos); 
void rotateRight(int a[], int size);
int countNonAlpha(string sentence);  
int deleteZeros(int arr[], int size); 
int reverseCase(char message[]); 

int main()
{
  cout << endl << endl;
  // Question 1
  int negs = 0;
  int pos = 0; 
  int arr1[] = { 0, 10, 0, 20, -30, -40, 0, 60, 0};
  cout << "Question 1" << endl << endl; 
  cout << "Number of zeros: " << countPositiveNegative(arr1, 9, negs, pos) << "\n";
  cout << "Number of negative numbers: " << negs << endl; 
  cout << "Number of positive numbers: " << pos << endl;
  cout << endl << "-------------------------\n\n";

  // Question 2 
  int arr2[] = {40, 10, 0, 20, 30, 60};
  cout << "Question 2" << endl << endl;
  cout << "Rotated array: "; 
  rotateRight(arr2, 6); 
  cout << endl << "-------------------------" << endl;

  // Question 3
  string message = "Hello, World and G**dbye!"; 
  cout << "Question 3: \n\n";
  cout << "Number of non-alphabets: " << countNonAlpha(message);
  cout << "\n-------------------------\n\n";

  // Question 4
   int arr3[] = {40, 0, 0, 20, 30, 0, 60, 20, 33}; 
   cout << "Question 4: " << endl << endl;
   cout << "Array after deletion: ";
   deleteZeros(arr3, 9) ; 
   cout << "-------------------------\n\n"; 
 
  // Question 5
  char arr4[] = { 'H', 'e', 'l', 'l', 'o',',', 'W', 'o', 'r', 'l', 'd', '!', '\0'}; 
  cout << "Question 5: \n\n";
  reverseCase(arr4); 
  cout << "-------------------------\n"; 

}

/*
Question 1
This function counts the positive numbers and negative numbers and stores them in 
parameters and returns the number of 0s. 
*/
int countPositiveNegative(int a[], int size, int &numNegs, int &numPos) 
{
  int zerocounter =0; 
  for (int i= 0; i< size; i+=1 )
  {
    if(a[i] == 0)
    {
      zerocounter +=1; 
    }
    else if(a[i] < 0)
    {
      numNegs +=1; 
    }
    else if(a[i > 0])
    {
      numPos +=1; 
    }
  }
  return zerocounter; 
}

/*
Question 2
This function taks an array and rotates the entire array 
to the right by one place. 
*/
void rotateRight(int a[], int size)
{
  int newArr[size];
  newArr[0] = a[size-1]; 
  
  for (int i= 1; i<size; i +=1 )
  {
    newArr[i] = a[i-1]; 
  } 
  a = newArr; 
  for (int i= 0; i<size; i +=1 )
  {
    cout << a[i] << ", " ; 
  } 
  cout << endl;
}

/*
This function counts how many special chracters excluding spaces there in the given string. 
*/
int countNonAlpha(string sentence)
{
  int counter = 0; 
  for (int i= 0; i<sentence.length(); i +=1 )
  {
    if (!isalpha(sentence[i]) && !(sentence[i] == ' '))
    {
      counter+=1; 
    }
  }
  return counter; 
}

/*
This function removes the 0's from a given array and shifts the rest accordingly. 
*/
int deleteZeros(int arr[], int size)
{
  int zeroCounter = 0;
  int count = 0; 
  for (int i= 0; i< size ;i+=1 )
  {
    if(arr[i] == 0)
    {
      zeroCounter +=1;
    }
  }
  int newArr[size-zeroCounter];
  for (int i= 0; i< size ;i+=1 )
  {
    if(arr[i] == 0)
    {
      count -= 1; 
    }
    else
    {
      newArr[count] = arr[i]; 
    }
    count += 1; 
  }
  for (int i= 0; i< size-zeroCounter;i+=1 )
  {
    cout << newArr[i] << " "; 
  }
  cout << endl;
  return zeroCounter;
}

/*
This function reverses the cases of the alphabets in a given sentence 
*/
int reverseCase(char message[])
{
  int size = 0; 
  int index = 0; 
  int counter; 
  while(message[index] != '\0')
  {

    index += 1; 
  }
  size = index; 
  for (int i= 0; i < size; i+=1)
  {
    if(isalpha(message[i]))
    {
      counter+=1;
      if(islower(message[i]))
      {
         message[i] = toupper(message[i]);  
      }
      else
      {
        message[i] = tolower(message[i]);
      }
    }
     
  }
  for (int i= 0; i < size; i+=1)
  {
    cout << message[i] << " "; 
     
  }
  cout << endl;
  return counter; 
}