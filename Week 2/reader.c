/ * 
* @copyright (c) 2008, Hedspi, Đại học Bách khoa Hà Nội
* @author Huu-Duc Nguyen
* @version 1.0
 * /

# include  < stdio.h >
# bao gồm  " reader.h "

FILE * inputStream;
int lineNo, colNo;
int currentChar;

int  readChar ( void ) {
  currentChar = getc (inputStream);
  colNo ++;
  if (currentChar == ' \ n ' ) {
    lineNo ++;
    colNo = 0 ;
  }
  trả về currentChar;
}

int  openInputStream ( char * fileName) {
  inputStream = fopen (fileName, " rt " );
  if (inputStream == NULL )
    trả về IO_ERROR;
  lineNo = 1 ;
  colNo = 0 ;
  readChar ();
  trả về IO_SUCCESS;
}

void  closeInputStream () {
  fclose (inputStream);
}

 17 
