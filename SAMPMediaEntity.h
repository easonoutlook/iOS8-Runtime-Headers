/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAMPMediaEntity : SADomainObject  {
}

@property(copy) NSString * sortTitle;
@property(copy) NSString * title;

+ (id)mediaEntityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mediaEntity;

- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setSortTitle:(id)arg1;
- (id)sortTitle;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)groupIdentifier;

@end
