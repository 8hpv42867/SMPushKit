//
//  SMPushManager.h
//  SMPush
//
//  Created by Mac on 2025/6/14.
//

#import <Foundation/Foundation.h>
#import "JPUSHService.h"
//! Project version number for SMPush.
FOUNDATION_EXPORT double SMPushVersionNumber;

//! Project version string for SMPush.
FOUNDATION_EXPORT const unsigned char SMPushVersionString[];

NS_ASSUME_NONNULL_BEGIN

@interface SMPushManager : NSObject
@property (nonatomic, copy) NSString *appkey;
@property (nonatomic, strong) NSData *token;
+ (instancetype)shareInstance;
- (void)enableJPush;

@end

NS_ASSUME_NONNULL_END
