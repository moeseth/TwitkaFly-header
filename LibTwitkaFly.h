//TwitkaFly

#import <Foundation/Foundation.h>

@interface LibTwitkaFly : NSObject

+ (id) sharedTwitkaFly;
- (BOOL) showSheetWithInitialText:(NSString *)text andInitialImage:(UIImage *)image;
- (BOOL) hideSheet;

@end