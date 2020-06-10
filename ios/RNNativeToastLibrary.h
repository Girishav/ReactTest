
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif
#import "IOSNativeToast.h"

@interface RNNativeToastLibrary : NSObject <RCTBridgeModule>
@property (nonatomic, retain) IOSNativeToast *toast;
@end
  
