#include "WriteFile.h"
#include <sstream>
using namespace std; 

WriteFile* WriteFile::createWriteFile(const char* fileName)
{
   WriteFile* wf = new WriteFile;
   output_file.open(fileName);
   closed = false;
}

WriteFile::~WriteFile()
{ 
}

void WriteFile::close()
{
   if (!closed)
   {
      output_file.close();
      closed = true;
   }
}

void WriteFile::writeLine()
{
   if (!closed && line->length() > 0)
   {
      output_file << line->getText() << endl;
   }
}
