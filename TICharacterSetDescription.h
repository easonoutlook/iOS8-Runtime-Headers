/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString, NSCharacterSet;

@interface TICharacterSetDescription : NSObject <NSCopying, NSSecureCoding> {
    NSCharacterSet *_characterSet;
    BOOL _inverted;
    long _baseIdentifier;
    NSString *_charactersAddedToBase;
}

@property(readonly) NSCharacterSet * characterSet;
@property(readonly) long baseIdentifier;
@property(copy) NSString * charactersAddedToBase;
@property(readonly) BOOL inverted;

+ (BOOL)supportsSecureCoding;

- (id)initWithCharactersInString:(id)arg1;
- (id)initWithBaseCharacterSet:(long)arg1;
- (id)characterSet;
- (void)setCharactersAddedToBase:(id)arg1;
- (void)clearCachedCharacterSet;
- (id)invertedSetDescription;
- (id)newCharacterSetFromDescription;
- (id)charactersAddedToBase;
- (BOOL)inverted;
- (long)baseIdentifier;
- (id)initWithBase:(long)arg1 additionalCharacters:(id)arg2 inverted:(BOOL)arg3;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;

@end
