#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
extern const int ae;
extern const int be;
extern const int ce;
extern const int de;

int main() {
void SecondFile() ;

//Задание 1 
SecondFile();
float fa = static_cast<float>(a);
float fb = static_cast<float>(b);
float fc = static_cast<float>(c);
float fd = static_cast<float>(d);
 
float f = fa * (fb+(fc/fd));
cout << f <<endl;


// Задание 2

int n = 32;
int diff;
diff = n - 21;
diff = (n > 21) ? n*2 : 21;
cout << diff << endl;



// Задание 4   
   int array[3][3][3];
   int e;
   int * pa;
 srand (time (NULL));
 
 for (int i = 0; i<3 ; i++)
 {
     for (int j = 0; j<3; j++)
     {
         for (int q =0; q<3;q++)
         {
             array[i][j][q] = rand()%10;
             a = array[1][1][1];
             *pa = e;
             cout << array[i][j][q];
             
         }
     }
     cout<< endl;
 }
cout << endl <<"Указатель "<< pa << endl;
cout <<"Разим. " << *pa << endl;

return 0;
}
