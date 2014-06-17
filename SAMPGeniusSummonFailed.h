/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAMPGeniusSummonFailed : SABaseCommand <SAServerBoundCommand> {
}

@property int errorCode;
@property(copy) NSString * reason;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)geniusSummonFailedWithReason:(id)arg1;
+ (id)geniusSummonFailedWithErrorCode:(int)arg1;
+ (id)geniusSummonFailedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)geniusSummonFailed;

- (id)initWithErrorCode:(int)arg1;
- (id)encodedClassName;
- (void)setReason:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (int)errorCode;
- (id)initWithReason:(id)arg1;
- (id)reason;
- (id)groupIdentifier;

@end
