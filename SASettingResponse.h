/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SASettingResponse : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)responseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)response;

- (id)encodedClassName;
- (id)groupIdentifier;

@end