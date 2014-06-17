/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAMPOrder : AceObject <SAAceSerializable> {
}

@property BOOL descending;
@property(copy) NSString * mediaItemProperty;

+ (id)orderWithDictionary:(id)arg1 context:(id)arg2;
+ (id)order;

- (void)setDescending:(BOOL)arg1;
- (BOOL)descending;
- (void)setMediaItemProperty:(id)arg1;
- (id)mediaItemProperty;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
