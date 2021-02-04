#include <iostream>

using namespace std;

int main()
{

//Задание 1
int a = 10;
float b;
b = 12.5;
char name;

//Задание 2 
enum gameXO{ O, X };

//Задание 3 

int array[3][3]= {0};

for (int i = 0; i<3; i++)
{
 for (int j = 0; j < 3; j++)
 { 
	 cout<< array[i][j]<<endl;
 }
}

//Задание 4

struct plaingyField {
	int size;
        char x;
	char o;

};
typedef struct playingField PlayingField;
PlayingField s;
s.size = 3;

//Задание 5


 union SizeBit {
                int i;
                char c;
                float f;
        };

struct typeSize  {

        union SizeBit s;

        int isInt:1;
        int isChar:1;
        int isFloat:1;
        }ts;

ts.s.i = 2;
ts.s.f = 1.0;
ts.s.c = 'c';

ts.isInt= ts.s.i;
ts.isChar = ts.s.c;
ts.isFloat = ts.s.f;

cout << ts.s.i <<endl;
cout << ts.s.c <<endl;
cout << ts.s.f <<endl<<endl;

cout << ts.isInt <<endl;
cout << ts.isChar <<endl;
cout << ts.isFloat <<endl;
















