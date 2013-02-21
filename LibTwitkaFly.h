//TwitkaFly

#import <Foundation/Foundation.h>

@interface LibTwitkaFly : NSObject

+ (id) sharedTwitkaFly;
- (BOOL) showSheetWithInitialText:(NSString *)text andInitialImage:(UIImage *)image;
- (void) QRWithText:(NSString *)text fromUser:(NSString *)sender forPostID:(NSString *)tweetID toOwner:(NSString *)ownerName;   // required the latest version of twitkafly
- (BOOL) hideSheet;

@end
