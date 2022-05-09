/* 
 * @copyright (c) 2008, Hedspi, Hanoi University of Technology
 * @author Vinh-Duc Tran
 * @version 1.0
 */

#ifndef __READER_H__
#define __READER_H__

#define IO_ERROR 0
#define IO_SUCCESS 1

int readChar(void);
int openInputStream(char *fileName);
void closeInputStream(void);

#endif
