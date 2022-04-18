/ *
* @copyright (c) 2008, Hedspi, Đại học Bách khoa Hà Nội
* @author Huu-Duc Nguyen
* @version 1.0
 * /

# ifndef __READER_H__
# xác định  __READER_H__

# xác định  IO_ERROR  0
# xác định  IO_SUCCESS  1

int  readChar ( void );                  // Doc mot ki tu kenh vao
int  openInputStream ( char * fileName); // Mo kenh vao
void  closeInputStream ( void );         // Dong kenh vao

# endif
