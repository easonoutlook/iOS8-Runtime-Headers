/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray;

@interface SAResultCallback : AceObject <SAAceSerializable> {
}

@property int code;
@property(copy) NSArray * commandReferences;
@property(copy) NSArray * commands;

+ (id)resultCallbackWithDictionary:(id)arg1 context:(id)arg2;
+ (id)resultCallback;

- (void)setCode:(int)arg1;
- (void)setCommandReferences:(id)arg1;
- (id)commandReferences;
- (id)encodedClassName;
- (void)setCommands:(id)arg1;
- (id)commands;
- (int)code;
- (id)groupIdentifier;

@end
