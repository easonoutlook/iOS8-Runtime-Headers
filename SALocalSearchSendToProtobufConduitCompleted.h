/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSData, NSString;

@interface SALocalSearchSendToProtobufConduitCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSData * rawResponse;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)sendToProtobufConduitCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sendToProtobufConduitCompleted;

- (void)setRawResponse:(id)arg1;
- (id)rawResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
