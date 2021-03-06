/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSURL, NSString, NSUUID;

@interface RCSSavedRecordingAccessToken : NSObject <NSSecureCoding, NSCoding, NSCopying> {
    unsigned int _accessType;
    NSURL *_compositionAVURL;
    NSUUID *_identifier;
    NSString *_accessName;
}

@property(readonly) unsigned int accessType;
@property(readonly) NSURL * compositionAVURL;
@property(copy,readonly) NSUUID * identifier;
@property(copy,readonly) NSString * accessName;

+ (id)tokenWithName:(id)arg1 accessType:(unsigned int)arg2 compositionAVURL:(id)arg3;
+ (BOOL)supportsSecureCoding;

- (id)accessName;
- (id)compositionAVURL;
- (unsigned int)accessType;
- (id)initWithName:(id)arg1 accessType:(unsigned int)arg2 compositionAVURL:(id)arg3 identifier:(id)arg4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
