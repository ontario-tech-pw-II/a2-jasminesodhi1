#include <iostream>
#include <fstream>

using namespace std;


//for input open argv1
//for output open argv2

int main(int argc, char const *argv[])
{
 	ifstream fin;
 	ofstream fout;
	
	// check if there are enough arguments
	if (argc < 3) {
		cout << "Error, not enough arguments" << endl;
		return 1;
	}

	
	// open the first file
	fin.open(argv[1]);
 	
	char c;

 	if (fin.fail()) // check if it is successful 
 	{
 		cerr << " Cannot open the input file!" << endl;
 		return 1;
 	}
 	

	// open the second file
	fin.open(argv[2]);
	
 	if (fout.fail())
 	{
 		cerr << " Cannot open the output file!" << endl;
 		return 1;
 	}
 	
 	while(fin.get(c)) 
	{
		//put all items in file oen into file 2 
		//do this by changing teh argv[] things 
		fout << c;
	}
 	
 	fin.close(); 

 	fout.close();

 	 return 0;

 } 