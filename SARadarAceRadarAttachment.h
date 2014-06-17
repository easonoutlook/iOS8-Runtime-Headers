/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSData, NSString;

@interface SARadarAceRadarAttachment : AceObject <SAAceSerializable> {
}

@property(copy) NSData * contents;
@property(copy) NSString * fileName;

+ (id)aceRadarAttachmentWithDictionary:(id)arg1 context:(id)arg2;
+ (id)aceRadarAttachment;

- (id)encodedClassName;
- (void)setFileName:(id)arg1;
- (id)fileName;
- (id)contents;
- (void)setContents:(id)arg1;
- (id)groupIdentifier;

@end
