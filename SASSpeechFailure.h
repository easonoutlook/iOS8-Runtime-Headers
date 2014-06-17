/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SASSpeechFailure : SABaseClientBoundCommand  {
}

@property int errorCode;
@property int reason;
@property(copy) NSString * reasonDescription;

+ (id)speechFailureWithDictionary:(id)arg1 context:(id)arg2;
+ (id)speechFailure;

- (id)reasonDescription;
- (void)setReasonDescription:(id)arg1;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setReason:(int)arg1;
- (void)setErrorCode:(int)arg1;
- (int)errorCode;
- (int)reason;
- (id)groupIdentifier;

@end