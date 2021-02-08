#include <iostream>

using namespace std;

int main() {

//Задание 1
    int n;
    cout<< "Enter number"<< endl;
    cin >> n;
    
    if (n>=10 && n<=20)
    cout << "true"<< endl;
    else
    cout << "falce"<< endl;


//Задание 2
 int a;
    cin >> a;
    if (a%2 == 0)
    cout<< a << " Is natural number"<<endl;
    else 
    cout<< a << " Is not natural number"<<endl;


//Задание 3
 const int x = 4;
    const int y = 6;
    
    if (x == 10 && y == 10)
    {
        cout << "true" <<  endl;
    }else if  (x+y == 10)
    {
        cout << "true" << endl;
    }else 
    {
          cout << "false" << endl;
    }


//Задание 4 
int year; 
    char l;
    cout << "Enter year"<< endl;
    cin >> year;
    
    
    if (year % 4 == 0)
    {
        
        if (year % 100 == 0)
        {
           if (year % 400 == 0)
           {
           cout << year << " True"<<endl;
           }else
           cout<< year << " false"<<endl;
           
        }else 
        cout << year << " true"<<endl;
        
    }else 
    cout << year << " false"<<endl;;
    
    
    cout<< endl;
    
    
    cout <<"display a list year? Y/N" << endl;
    cin >> l;
    
    if (l == 'Y')
    {
    for (int i = 0; i <= 2020; i+=4)
    
    if (i % 100 == 0)
    {
     if (i % 400 == 0)
     {
         cout << i << " ";
     }
    }else
    cout << i << " "; 
    }


 return 0;
}
