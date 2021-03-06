/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSExtension;

@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode  {
    NSExtension *_extension;
}

@property(retain) NSExtension * extension;


- (id)normalizedIdentifierLevels;
- (id)containingBundle;
- (id)displayName;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isDesiredForTraits:(id)arg1 forceASCIICapable:(BOOL)arg2;
- (BOOL)defaultLayoutIsASCIICapable;
- (BOOL)isAllowedForTraits:(id)arg1;
- (BOOL)isDefaultRightToLeft;
- (BOOL)isExtensionInputMode;
- (id)identifierWithLayouts;
- (id)extension;
- (void)setExtension:(id)arg1;
- (id)hardwareLayout;
- (void)dealloc;

@end
