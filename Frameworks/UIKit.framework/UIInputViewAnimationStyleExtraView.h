/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIView;

@interface UIInputViewAnimationStyleExtraView : NSObject {
    int _alignment;
    id _animation;
    int _clipContainerType;
    UIView *_view;
}

@property int alignment;
@property(copy) id animation;
@property int clipContainerType;
@property(retain) UIView * view;

+ (id)extraView:(id)arg1 withAlignment:(int)arg2 animation:(id)arg3 onSnapshot:(BOOL)arg4;

- (int)alignment;
- (id)animation;
- (int)clipContainerType;
- (void)dealloc;
- (void)setAlignment:(int)arg1;
- (void)setAnimation:(id)arg1;
- (void)setClipContainerType:(int)arg1;
- (void)setView:(id)arg1;
- (id)view;

@end