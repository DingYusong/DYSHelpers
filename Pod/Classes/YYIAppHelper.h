//
//  YYIAppHelper.h
//  GoldWalletPro
//
//  Created by 丁玉松 on 15/6/5.
//  Copyright (c) 2015年 Beijing Yingyan Internet Co., Ltd. All rights reserved.
//

#define VERSION_iOS [[[UIDevice currentDevice] systemVersion] floatValue]
#define VERSION_APP [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]


#import <Foundation/Foundation.h>

@interface YYIAppHelper : NSObject
+(id)sharedInstace;

+ (NSString *)deviceID;

+ (NSString *)userAgent;

@end
