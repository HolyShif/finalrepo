#include <iostream>
#include <fstream>

using namespace std;

int countLine(char* pName);

int countChar(char* pName);

int main(int argc, char **argv){

   int i;
   if (argc != 2){
      cout << "incorrect or no file specified\n";
	return 0;
   }
//	cout << "correct\n";
   for (i=1; i<argc; ++i){
   countLine(argv[i]);
   countChar(argv[i]);
   }


return 0;
}


int countLine(char* pName){
   int lcount = 0;
   string line;
   ifstream file(pName);
   while(getline(file,line)){
       lcount++;
   }

   cout << "linecount = " << lcount << endl;   
return lcount;
}

int countChar(char* pName){
   int ccount = 0;
   string line;
   ifstream file(pName);
   while(getline(file,line)){
     ccount += line.length();
   cout << "charcount = " << ccount << endl;
   }
return 0;
}
