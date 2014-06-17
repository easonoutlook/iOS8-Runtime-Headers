/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSSet, NSString;

@interface AFPerson : NSObject <AFTranscriptionType> {
    NSSet *_contactHandles;
    NSString *_fullName;
}

@property(copy) NSSet * contactHandles;
@property(copy) NSString * fullName;

+ (BOOL)supportsSecureCoding;

- (void)setFullName:(id)arg1;
- (id)fullName;
- (void)setContactHandles:(id)arg1;
- (id)contactHandles;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
