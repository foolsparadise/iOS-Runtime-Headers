/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDGradientOpacityStop : CUIPSDGradientStop <NSCoding> {
    float opacity;
}

+ (void)initialize;
+ (id)opacityStopWithLocation:(float)arg1 opacity:(float)arg2;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(float)arg1 opacity:(float)arg2;
- (BOOL)isOpacityStop;
- (float)opacity;
- (float)opacityLocation;

@end