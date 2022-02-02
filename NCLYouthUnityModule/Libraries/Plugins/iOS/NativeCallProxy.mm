#import <Foundation/Foundation.h>
#import "NativeCallProxy.h"


@implementation FrameworkLibAPI

id<NativeCallsProtocol> api = NULL;
+(void) registerAPIforNativeCalls:(id<NativeCallsProtocol>) aApi
{
    api = aApi;
}

@end


extern "C" {
    void quitApplication() { return [api quitApplication]; }
    void minimizeApplication() { return [api minimizeApplication]; }
    void sendMessage(const char* message) { return [api sendMessage:[NSString stringWithUTF8String:message]]; }  
}

