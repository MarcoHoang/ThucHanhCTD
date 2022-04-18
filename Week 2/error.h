/ *
* @copyright (c) 2008, Hedspi, Đại học Bách khoa Hà Nội
* @author Huu-Duc Nguyen
* @version 1.0
 * /

# ifndef __ERROR_H__
# xác định  __ERROR_H__

typedef  enum
{
  ERR_ENDOFCOMMENT,
  ERR_IDENTTOOLONG,
  ERR_INVALIDCHARCONSTANT,
  ERR_INVALIDSYMBOL,
  ERR_NUMBERTOOLONG
} Mã lỗi;

# xác định  ERM_ENDOFCOMMENT  " Dự kiến ​​kết thúc nhận xét! "
# xác định  ERM_IDENTTOOLONG  " Nhận dạng quá dài! "
# xác định  ERM_INVALIDCHARCONSTANT  " const char không hợp lệ! "
# xác định  ERM_INVALIDSYMBOL  " Biểu tượng không hợp lệ! "
# xác định  ERM_NUMBERTOOLONG  " Số quá dài! "

 lỗi void (ErrorCode err, int lineNo, int colNo);

# endif
