/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class NSString;

@interface AXAssertion : NSObject  {
    NSString *_assertionType;
    NSString *_identifier;
}

@property(retain) NSString * assertionType;
@property(retain) NSString * identifier;

+ (id)assertionWithType:(id)arg1 identifier:(id)arg2;

- (BOOL)_hasValidAssertionType;
- (id)assertionType;
- (void)_notifyServerAssertionWasRelinquished;
- (void)_notifyServerAssertionWasAcquired;
- (void)setAssertionType:(id)arg1;
- (id)initWithType:(id)arg1 identifier:(id)arg2;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)description;
- (void)dealloc;

@end
