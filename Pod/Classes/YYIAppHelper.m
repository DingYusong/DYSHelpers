//
//  YYIAppHelper.m
//  GoldWalletPro
//
//  Created by 丁玉松 on 15/6/5.
//  Copyright (c) 2015年 Beijing Yingyan Internet Co., Ltd. All rights reserved.
//

#import "YYIAppHelper.h"
#import <AdSupport/AdSupport.h>
#import <UIKit/UIKit.h>

@implementation YYIAppHelper
/*单例*/
+(id)sharedInstace
{
    static YYIAppHelper *configManager;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        configManager = [[YYIAppHelper alloc]init];
    });
    return configManager;
}


+ (NSString *)deviceID {
    NSString *adId = [[[ASIdentifierManager sharedManager] advertisingIdentifier] UUIDString];
    return adId;
}


+ (NSString *)userAgent
{
    UIWebView* webView = [[UIWebView alloc] initWithFrame:CGRectZero];
    return [webView stringByEvaluatingJavaScriptFromString:@"navigator.userAgent"];
}


@end
