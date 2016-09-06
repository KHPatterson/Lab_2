#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class ReadFile
{
		
	public:
		ifstream input_file;
		bool _eof;
		bool closed;
		
		ReadFile* rf;
		
	 	ReadFile();  //Constructor.
		~ReadFile();  //Deconstructor.

		ReadFile* createReadFile(const char* file_name);
		void destroyReadFile();
		String* readLine();
		bool eof();
		void close();

};

#endif
