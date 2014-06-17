/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SACommandFailed : SABaseClientBoundCommand <SAServerBoundCommand, SAClientBoundCommand> {
}

@property int errorCode;
@property(copy) NSString * reason;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;
@property(copy) NSString * appId;
@property(copy) NSArray * callbacks;

+ (id)commandFailedWithReason:(id)arg1;
+ (id)commandFailedWithErrorCode:(int)arg1;
+ (id)commandFailedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)commandFailed;

- (id)initWithErrorCode:(int)arg1;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setReason:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (int)errorCode;
- (id)initWithReason:(id)arg1;
- (id)reason;
- (id)groupIdentifier;

@end