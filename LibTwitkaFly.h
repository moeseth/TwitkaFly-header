//TwitkaFly

#import <Foundation/Foundation.h>

@interface LibTwitkaFly : NSObject

+ (id) sharedTwitkaFly;
- (BOOL) showSheetWithInitialText:(NSString *)text andInitialImage:(UIImage *)image;

// deprecated in the iOS7 version
- (void) QRWithText:(NSString *)text fromUser:(NSString *)sender forPostID:(NSString *)tweetID toOwner:(NSString *)ownerName;   // required the latest version of twitkafly

// use this method for iOS7 version
- (BOOL) showQRForBulletin:(BBBulletin *)bulletin;

- (BOOL) hideSheet;

@end
