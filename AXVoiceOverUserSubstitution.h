/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@class NSSet, NSString, NSUUID;

@interface AXVoiceOverUserSubstitution : NSObject <NSSecureCoding, NSCopying> {
    BOOL _active;
    BOOL _ignoreCase;
    BOOL _appliesToAllApps;
    BOOL _isReplacementTextAllPunctuation;
    BOOL _isReplacementTextSurroundedByPunctuation;
    NSString *_originalString;
    NSString *_replacementString;
    NSSet *_bundleIdentifiers;
    NSUUID *_uuid;
}

@property(copy) NSString * originalString;
@property(copy) NSString * replacementString;
@property BOOL active;
@property BOOL ignoreCase;
@property BOOL appliesToAllApps;
@property(copy) NSSet * bundleIdentifiers;
@property(readonly) BOOL isReplacementTextAllPunctuation;
@property(readonly) BOOL isReplacementTextSurroundedByPunctuation;
@property(retain) NSUUID * uuid;

+ (BOOL)supportsSecureCoding;

- (void)setBundleIdentifiers:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)bundleIdentifiers;
- (BOOL)isReplacementTextSurroundedByPunctuation;
- (BOOL)isReplacementTextAllPunctuation;
- (BOOL)appliesToAllApps;
- (BOOL)ignoreCase;
- (id)originalString;
- (void)setReplacementString:(id)arg1;
- (void)setOriginalString:(id)arg1;
- (void)setAppliesToAllApps:(BOOL)arg1;
- (void)setIgnoreCase:(BOOL)arg1;
- (id)uuid;
- (void)setActive:(BOOL)arg1;
- (BOOL)active;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)replacementString;

@end
