/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@class NSString;

@interface SGSimpleNamedEmailAddress : NSObject <NSCopying, NSSecureCoding> {
    NSString *_emailAddress;
    NSString *_name;
}

@property(readonly) NSString * emailAddress;
@property(readonly) NSString * name;

+ (id)namedEmailAddressWithFieldValue:(id)arg1;
+ (id)serializeAll:(id)arg1;
+ (id)namedEmailAddressesWithFieldValues:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)serialized;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2;
- (BOOL)isEqualToNamedEmailAddress:(id)arg1;
- (id)emailAddress;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)description;

@end
