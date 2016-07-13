//
//  RNBranch.h
//  RNBranch
//
//  Created by Kevin Stumpf on 1/28/16.
//

#import <Foundation/Foundation.h>
#import <React/RCTBridgeModule.h>

@interface RNBranch : NSObject <RCTBridgeModule>

+ (void)initSessionWithLaunchOptions:(NSDictionary *)launchOptions isReferrable:(BOOL)isReferrable;
+ (BOOL)handleDeepLink:(NSURL *)url;
+ (BOOL)continueUserActivity:(NSUserActivity *)userActivity;
+ (void) setTestMode:(BOOL) enabled;

@end
