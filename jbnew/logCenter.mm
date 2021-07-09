#import "logCenter.h"

const char * logEx[] = {
    "log::LuaManager",
    "log::OpenCV    ",
    "log::backboardd",
    "log::LuaRun    ",
    "log::SimTouch  ",

};

int logPara = 0;

void logParaInit(){
    logPara = 0;
}

void logParaLoad(int type, int parin){
    if (X5_LOG_TYPE_MIN>=type || X5_LOG_TYPE_MAX<=type) {
        return;
    }
    NSLog(@"set log type %d, val %d", type, parin);
//    logPara&= (0<<type);
    logPara|= (parin<<type);
    NSLog(@"now log type %d", logPara);
}

//void x5LogPrint(X5_LOG_TYPE type, NSString * log)
void x5LogPrint(X5_LOG_TYPE type, NSString * format){
    if (X5_LOG_TYPE_MIN>=type || X5_LOG_TYPE_MAX<=type) {
        return;
    }
    
    int mask = 1<<type;
    if ( (mask & logPara) == mask ) {
        NSLog(@"%s @ %@",logEx[type-1], format );
//        NSLog(format,...);
    }
}
