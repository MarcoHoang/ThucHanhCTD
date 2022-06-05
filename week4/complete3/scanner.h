/* Scanner
 * @copyright (c) 2008, Hedspi, Hanoi University of Technology
 * @author Vinh-Duc Tran
 * @version 1.0
 */

#ifndef __SCANNER_H__
#define __SCANNER_H__

#include "token.h"

Token* getToken(void);
Token* getValidToken(void);
void printToken(Token *token);

#endif
