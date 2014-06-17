/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface _UIAppearanceCustomizableClassInfo : NSObject  {
    BOOL _isGuideClassRoot;
    BOOL _isCustomizableViewClassRoot;
    NSString *_appearanceNodeKey;
    unsigned int _hash;
    Class _customizableViewClass;
    Class _guideClass;
}

@property(readonly) Class _customizableViewClass;
@property(readonly) Class _guideClass;
@property(readonly) NSString * _appearanceNodeKey;
@property(readonly) unsigned int _hash;

+ (id)_customizableClassInfoForViewClass:(Class)arg1 withGuideClass:(Class)arg2;

- (unsigned int)_hash;
- (id)_superClassInfo;
- (Class)_guideClass;
- (id)_appearanceNodeKey;
- (Class)_customizableViewClass;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end