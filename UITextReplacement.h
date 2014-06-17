/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UITextRange;

@interface UITextReplacement : NSObject  {
    UITextRange *_range;
    NSString *_originalText;
    NSString *_replacementText;
    NSString *_menuTitle;
    unsigned int _usageTrackingMask;
}

@property(readonly) UITextRange * range;
@property(readonly) NSString * originalText;
@property(readonly) NSString * replacementText;
@property(readonly) NSString * menuTitle;
@property unsigned int usageTrackingMask;

+ (id)replacementWithRange:(id)arg1 original:(id)arg2 replacement:(id)arg3 menuTitle:(id)arg4;

- (id)menuTitle;
- (void)setUsageTrackingMask:(unsigned int)arg1;
- (unsigned int)usageTrackingMask;
- (id)range;
- (id)originalText;
- (id)replacementText;
- (void)dealloc;

@end
