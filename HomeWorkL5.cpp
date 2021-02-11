#include <iostream>
#include <time.h>
#include <cstdlib>
#include <stdarg.h>

using namespace std;

void PrintFirst(int,...);
void FirstArray (int*, const int);
void SecondArray (int*);    

int main() {
    const int size = 10;
    
    int arr[size];
    int S_Arr[8];
    
    FirstArray(arr,size);
    cout << endl;
    SecondArray(S_Arr);
    
    return 0;
}



//Задание 1
void FirstArray (int * arr, const int size){
    
    srand(time(NULL));
   
    for (int i = 0 ; i < size; i++)
    {
        arr[i] = rand() % 2;
        cout << arr[i]<< endl;
    }
    
    cout<< endl;
    
    for (int i = 0; i < size ; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = 1;
        }else 
           if (arr[i]== 1)
           {
           arr[i] = 0;  
           }
       PrintFirst(1, arr[i]);
    }
}
  
//Задание 5/1
void PrintFirst (int n, ...){
va_list lst;
va_start(lst, n);

cout << va_arg(lst, int) << " ";
va_end(lst);
}



//Задание 2
void SecondArray(int S_Arr[]){
    
    int ArrNum = 1;
    for (int i = 0; i < 8; i++)
    {
         S_Arr[i] = ArrNum;
         ArrNum = ArrNum + 3;
         cout << S_Arr[i] <<endl;
    }
}


//Задание 3

 void Array (int *, const int);
int  Sum (int *, const int , int , int);
 

    const int size = 5;
    int Arr [size] = {2,5,3,2,2};
    Array (Arr, size);


void Array(int *arr, const int size){
    int j = 0;
    int A_sum = 0;
    int A_arr;
    for (int i = 0; i < size ; i++)
    {
      
         A_sum = A_sum + arr[i] ;
         cout <<"Sum "<< A_sum << endl;
         j++;
        
         A_arr = Sum(arr,size,j,A_sum);
        
         if (A_sum == A_arr)
         {
           cout << A_sum <<"=="<< A_arr << endl; 
           cout << "{";
           for ( i = 0 ; i< size ; i++)
           {
               cout << arr[i];  
           }
           cout <<"}"<< " -True" << endl;
         } else if (A_sum != A_arr)
          {
          cout << "{";
          for (int j = 0 ; j< size ; j++)
           {
               cout << arr[j];  
           }
          cout  <<"}"<< " - False" << endl;
          }
     }
}

int Sum (int *arr, const int size, int j, int A_sum){
    
    int A_arr=0;
    for (j=j; j < size; j++)
    {
       cout <<" + " << arr[j] << endl;
       A_arr = A_arr + arr[j];
    }
    cout << "SumArray = "<<A_arr << endl;
    
    cout <<"-----------------" <<endl;
    return A_arr;
}

//Задание 4 

   int n;
   int ArrayD[5] = {2,4,6,8,9};
   int size = 5;
   int x;
   cout<< "Enter n 1-5 = ";
   cin >> n;
   

   for (int i = 0; i < size; i++)
{
    cout<<ArrayD[i]<< " ";
}
cout<< endl;

   if (n >= 0)
{
   for (int i = 0; i < n; i++)
   {
    for(int j = size-1; j >= 0; j--)
    {
        if (j == size-1)
        {
        x = ArrayD[size-1];
        }else
        ArrayD[j+1] = ArrayD[j];
    }
     ArrayD[0] = x;
   }
}
}
   
   
  for (int i = 0; i < 5; i++)
{
    cout<<ArrayD[i]<<" ";
}
  
