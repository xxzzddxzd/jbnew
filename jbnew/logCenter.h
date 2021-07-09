
#ifndef __xxScreenShot__logCenter__
#define __xxScreenShot__logCenter__

//#import "p_inc.h"



typedef enum{
    X5_LOG_TYPE_MIN = 0,
    X5_LOG_TYPE_LUAMANAGER,
    X5_LOG_TYPE_OPENCV,
    X5_LOG_TYPE_BACKBOARDD,
    X5_LOG_TYPE_LUA,
    X5_LOG_TYPE_SIMTOUCH,
    X5_LOG_TYPE_MAX
}X5_LOG_TYPE;


void logParaInit();
void logParaLoad(int type, int parin);
void x5LogPrint(X5_LOG_TYPE type, NSString * format);

#endif 
