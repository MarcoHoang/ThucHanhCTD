/ *
* @copyright (c) 2008, Hedspi, Đại học Bách khoa Hà Nội
* @author Huu-Duc Nguyen
* @version 1.0
 * /

# include  < stdio.h >
# bao gồm  < stdlib.h >
# bao gồm  " error.h "

 lỗi void (ErrorCode err, int lineNo, int colNo)
{
  chuyển đổi (err)
  {
  trường hợp ERR_ENDOFCOMMENT:
    printf ( " % d - % d : % s \ n " , lineNo, colNo, ERM_ENDOFCOMMENT);
    phá vỡ ;
  trường hợp ERR_IDENTTOOLONG:
    printf ( " % d - % d : % s \ n " , lineNo, colNo, ERM_IDENTTOOLONG);
    phá vỡ ;
  trường hợp ERR_INVALIDCHARCONSTANT:
    printf ( " % d - % d : % s \ n " , lineNo, colNo, ERM_INVALIDCHARCONSTANT);
    phá vỡ ;
  trường hợp ERR_INVALIDSYMBOL:
    printf ( " % d - % d : % s \ n " , lineNo, colNo, ERM_INVALIDSYMBOL);
    phá vỡ ;
  trường hợp ERR_NUMBERTOOLONG:
    printf ( " % d - % d : % s \ n " , lineNo, colNo, ERM_NUMBERTOOLONG);
    phá vỡ ;
  }

  thoát ra (- 1 );
}
