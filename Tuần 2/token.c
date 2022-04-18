/ * 
* @copyright (c) 2008, Hedspi, Đại học Bách khoa Hà Nội
* @author Huu-Duc Nguyen
* @version 1.0
 * /

# bao gồm  < stdlib.h >
# bao gồm  < ctype.h >
# bao gồm  " token.h "

struct {
  chuỗi ký tự char [MAX_IDENT_LEN + 1 ];
  TokenType tokenType;
} từ khóa [KEYWORDS_COUNT] = {
  { " PROGRAM " , KW_PROGRAM},
  { " CONST " , KW_CONST},
  { " TYPE " , KW_TYPE},
  { " VAR " , KW_VAR},
  { " INTEGER " , KW_INTEGER},
  { " CHAR " , KW_CHAR},
  { " ARRAY " , KW_ARRAY},
  { " OF " , KW_OF},
  { " FUNCTION " , KW_FUNCTION},
  { " PROCEDURE " , KW_PROCEDURE},
  { " BEGIN " , KW_BEGIN},
  { " HẾT " , KW_END },
  { " CALL " , KW_CALL},
  { " IF " , KW_IF},
  { " THEN " , KW_THEN},
  { " ELSE " , KW_ELSE},
  { " WHILE " , KW_WHILE},
  { " DO " , KW_DO},
  { " CHO " , KW_FOR},
  { " TO " , KW_TO}
};

int  keywordEq ( char * kw, char * string) {
  while ((* kw! = ' \ 0 ' ) && (* string! = ' \ 0 ' )) {
    if (* kw! = toupper (* string)) break ;
    kw ++; chuỗi ++;
  }
  return ((* kw == ' \ 0 ' ) && (* string == ' \ 0 ' ));
}

TokenType checkKeyword ( char * string) {
  int i;
  cho (i = 0 ; i <KEYWORDS_COUNT; i ++)
    if ( keywordEq (từ khóa [i]. string , string))
      trả về từ khóa [i]. tokenType ;
  trả lại TK_NONE;
}

Token * makeToken (TokenType tokenType, int lineNo, int colNo) {
  Mã thông báo * mã thông báo = (Mã thông báo *) malloc ( sizeof (Mã thông báo));
  token-> tokenType = tokenType;
  mã thông báo-> lineNo = lineNo;
  mã thông báo-> colNo = colNo;
  trả lại mã thông báo;
}
