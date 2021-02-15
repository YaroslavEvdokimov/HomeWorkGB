#include <iostream>
#include <fstream>
#include <ctime>
#include <cstring>
using namespace std;

void ConnectFile();
void RFile(string);

int main()
{  int *size;
   size =new int [50];
   string path;
   cout<< "Enter path to the file: ";
   cin >> path;

  srand(time(NULL));


  std:: ofstream file("HomeWork6.txt");
  for (int i = 0; i < 50; i ++){
    size[i] = rand()%100;
    file<< "HomeW - " << size[i] << endl;
  }

  std:: ofstream fileTwo("HomeWork6Two.txt");
  for (int j = 0; j < 50; j ++){
   size[j] = rand()%200;
   fileTwo <<" + "<< size[j]<< endl;
  }

  RFile(path);
  ConnectFile();

  file.close();
  fileTwo.close();
  delete [] size;
  return 0;
}


void RFile(string path){
  string word;
  cout << "Enter a word: ";
  cin >> word;

  std::ifstream file(path);
  std:: string str;
  for (int i =0; i < 50; i++){
     file >> str;
     if (!file.eof())
     {
         if(word == str)
       {
         cout<< "Word a found: " <<word<< endl;
       }else
         {
         cout<< "Word not found: " <<word<< endl;
         }
         break;
     }
   }
 }

void ConnectFile(){
int sizeFile;

std::ifstream file("HomeWork6.txt");
std:: string strFile;

std::ifstream fileTwo("HomeWork6Two.txt");
std:: string strFileTwo;

std:: ofstream fileThree("HomeWork6Last.txt");

while (!file.eof() && !fileTwo.eof())
{

    getline(file, strFile);
    getline(fileTwo, strFileTwo);
    cout << strFile << strFileTwo << endl;
    
    sizeFile =strFile.length()+strFileTwo.length();
    cout << sizeFile << endl;

    string * arr = new string[sizeFile];

    for (int i = 0; i< sizeFile ; i++)
    {
        arr[i] = strFile + strFileTwo;
        fileThree << arr[i]<< endl;;
        break;
    }

        delete [] arr;
}
file.close();
fileTwo.close();
fileThree.close();
}

