#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class WriteFile
{
	private: 
	
		ofstream output_file; // we do not want the user to CHANGE the write file, or the file the data is being saved in. We only want the
										// user to be able to change what data is being SAVED 
		bool closed;	
		WriteFile* line;
		
	public: 
		
		WriteFile();   // constructor
		~WriteFile();  // destructor 

		WriteFile* createWriteFile(const char* fileName);
		void destroyWriteFile();
		void writeLine();
		void close();		
}; 

#endif
