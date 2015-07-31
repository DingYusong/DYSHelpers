/*
 Erica Sadun, http://ericasadun.com
 iPhone Developer's Cookbook, 3.0 Edition
 BSD License, Use at your own risk
 */

//获取物理设备的高度
#define ScreenHeight [UIScreen mainScreen].bounds.size.height
//获取物理设备的宽度
#define ScreenWidth [UIScreen mainScreen].bounds.size.width
#define ScreenViewHeight (ScreenHeight-64)


#import <UIKit/UIKit.h>

CGPoint CGRectGetCenter(CGRect rect);
CGRect  CGRectMoveToCenter(CGRect rect, CGPoint center);

@interface UIView (ViewFrameGeometry)
@property CGPoint origin;
@property CGSize size;

@property (readonly) CGPoint bottomLeft;
@property (readonly) CGPoint bottomRight;
@property (readonly) CGPoint topRight;

@property CGFloat height;
@property CGFloat width;

@property CGFloat top;
@property CGFloat left;

@property CGFloat bottom;
@property CGFloat right;

- (void) moveBy: (CGPoint) delta;
- (void) scaleBy: (CGFloat) scaleFactor;
- (void) fitInSize: (CGSize) aSize;



-(void)addSeperateLineWithRowCount:(NSInteger)rowCount andIsAlignment:(BOOL)isAlignment;

@end